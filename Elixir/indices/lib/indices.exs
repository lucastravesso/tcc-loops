defmodule Indices do
  @min_repeticoes 2
  @max_valor 9
  @num_linhas 10
  @num_colunas 5

  def main(_) do
    # Criar matriz com 10 linhas e 5 colunas
    matriz = Enum.map(1..@num_linhas, fn _ ->
      Enum.map(1..@num_colunas, fn _ ->
        :rand.uniform(@max_valor) + 1
      end)
    end)

    hora_de_inicio = :os.system_time(:millisecond)
    memory_bef = :erlang.memory()
    # Criar lista de listas de pilhas para armazenar índices de valores repetidos em cada coluna
    pilhas_por_valor = Enum.map(1..@num_colunas, fn j ->
      mapa = Enum.reduce(matriz, %{}, fn linha, acc ->
        valor = linha |> Enum.at(j - 1)
        Map.update!(acc, valor, [acc[valor] || []] ++ [[acc[valor] ++ [linha]]])
      end)

      pilhas = Enum.map(mapa, fn {valor, indices} ->
        if length(indices) >= @min_repeticoes do
          pilha = Enum.reduce(indices, [], fn i, acc -> [i | acc] end)
          {:ok, Enum.reverse(pilha)}
        else
          {:error, "not enough repetitions"}
        end
      end)

      {j, pilhas}
    end)
    memory_aft = :erlang.memory()
    hora_de_fim = :os.system_time(:millisecond)
    elapsed_time = (hora_de_fim - hora_de_inicio) / 1000.0

    total_memory = (memory_aft[:processes_used] - memory_bef[:processes_used]) / 1024 / 1024
    IO.puts "Memoria #{total_memory}"
    IO.puts "Tempo #{elapsed_time}"

    matriz |> Enum.each(fn linha ->
      linha |> Enum.each(fn valor ->
        IO.write("#{valor}\t")
      end)
      IO.puts("")
    end)

    pilhas_por_valor |> Enum.each(fn {j, pilhas} ->
      IO.puts("#{?A + j - 1}:")
      pilhas |> Enum.each(fn {i, pilha} ->
        case pilha do
          {:ok, pilha} ->
            IO.write("#{i}: ")
            pilha |> Enum.each(fn indice ->
              IO.write("#{indice} ")
            end)
            IO.puts("")
          {:error, _mensagem} ->
            :ok
        end
      end)
    end)
  end
end
