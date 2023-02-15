defmodule Loops do
  def hash do
    hashmap = %{}

    1..1000000
    |> Enum.each(fn i ->
        Map.put(hashmap, i, 0)
      end)

    num_pairs = :maps.size(hashmap)
    size_in_bytes = num_pairs * 10
    size_in_mbs = div(size_in_bytes, 1024 * 1024)
    IO.puts("Uso de memoria: #{size_in_mbs} MB")

    hashmap = %{}

    1..50000000
    |> Enum.each(fn i ->
        Map.put(hashmap, i, 0)
      end)


    tamanho_memoria = :erlang.system_info(:allocated_areas) |> Enum.reduce(0, fn area, acc -> acc + elem(area, 1) end)
    tamanho_memoria = tamanho_memoria / 1024 / 1024
    IO.puts("Uso de memoria: #{tamanho_memoria} MB")

    hashmap = %{}

    1..100000000
    |> Enum.each(fn i ->
        Map.put(hashmap, i, 0)
      end)


    tamanho_memoria = :erlang.system_info(:allocated_areas) |> Enum.reduce(0, fn area, acc -> acc + elem(area, 1) end)
    tamanho_memoria = tamanho_memoria / 1024 / 1024
    IO.puts("Uso de memoria: #{tamanho_memoria} MB")

    hashmap = %{}

    1..150000000
    |> Enum.each(fn i ->
        Map.put(hashmap, i, 0)
      end)


    tamanho_memoria = :erlang.system_info(:allocated_areas) |> Enum.reduce(0, fn area, acc -> acc + elem(area, 1) end)
    tamanho_memoria = tamanho_memoria / 1024 / 1024
    IO.puts("Uso de memoria: #{tamanho_memoria} MB")

    hashmap = %{}

    1..200000000
    |> Enum.each(fn i ->
        Map.put(hashmap, i, 0)
      end)


    tamanho_memoria = :erlang.system_info(:allocated_areas) |> Enum.reduce(0, fn area, acc -> acc + elem(area, 1) end)
    tamanho_memoria = tamanho_memoria / 1024 / 1024
    IO.puts("Uso de memoria: #{tamanho_memoria} MB")

  end
end
