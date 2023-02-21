defmodule Loops do
  def pilha do
    hora_de_inicio = :os.system_time(:millisecond)
    memory_bef = :erlang.memory()
    pilha = for i <- 1..200000000, do: i
    memory_aft = :erlang.memory()
    hora_de_fim = :os.system_time(:millisecond)
    elapsed_time = (hora_de_fim - hora_de_inicio) / 1000.0

    total_memory = (memory_aft[:processes_used] - memory_bef[:processes_used]) / 1024 / 1024
    IO.puts "Memoria #{total_memory}"
    IO.puts "Tempo #{elapsed_time}"
    :erlang.garbage_collect()
  end

  def fila do
    hora_de_inicio = :os.system_time(:millisecond)
    memory_bef = :erlang.memory()
    fila = :queue.new
    fila = for i <- 1..50000000, do: fila = :queue.in(i, fila)
    memory_aft = :erlang.memory()
    hora_de_fim = :os.system_time(:millisecond)
    elapsed_time = (hora_de_fim - hora_de_inicio) / 1000.0

    total_memory = (memory_aft[:processes_used] - memory_bef[:processes_used]) / 1024 / 1024
    IO.puts "Memoria #{total_memory}"
    IO.puts "Tempo #{elapsed_time}"
    :erlang.garbage_collect()
  end

  def hashmap do
    hora_de_inicio = :os.system_time(:millisecond)
    memory_bef = :erlang.memory()
    map = %{}
    map = for i <- 1..150000000, do: map = Map.put(map, i, 0)
    memory_aft = :erlang.memory()
    hora_de_fim = :os.system_time(:millisecond)
    elapsed_time = (hora_de_fim - hora_de_inicio) / 1000.0

    total_memory = (memory_aft[:processes_used] - memory_bef[:processes_used]) / 1024 / 1024
    IO.puts "Memoria #{total_memory}"
    IO.puts "Tempo #{elapsed_time}"
    :erlang.garbage_collect()
  end
end
#iex --erl "+hms 16000MB" -S mix para rodar com max heap size em 16gb
#rodar separado cada tamanho de loop para nao ferrar o garbage collector
