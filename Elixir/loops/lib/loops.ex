defmodule Loops do
  def hash do

    map = Enum.into(1..1000000, %{}, fn n -> {n, 0} end)

    IO.inspect(map)
    memory_usage = :erts_debug.size(map) / 1048576

    IO.puts("Uso de memoria: #{memory_usage} MB")

  end
end
