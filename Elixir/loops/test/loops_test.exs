defmodule LoopsTest do
  use ExUnit.Case
  doctest Loops

  test "greets the world" do
    assert Loops.hello() == :world
  end
end
