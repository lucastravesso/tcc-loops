using System.Diagnostics;

namespace loop_cSharp.Hash;

public class HashExecute
{
    public void ExecuteHash()
    {
        var hash = new Dictionary<long, int>();
        var horaDeInicio = DateTime.Now;
        for (var i = 0; i < 1000000; i++) hash.Add(i, 0);
        long memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        var tempo = (DateTime.Now - horaDeInicio).TotalSeconds;
        Console.WriteLine("Horario de finalizacao: "+ tempo);
        Console.WriteLine("Uso de memória: "+memoria + "MB");
        Console.WriteLine();
        hash.Clear();
        Thread.Sleep(5000);
        //
        // horaDeInicio = DateTime.Now;
        // for (var i = 0; i < 50000000; i++) hash.Add(i, 0);
        // memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        // tempo = (DateTime.Now - horaDeInicio).TotalSeconds;
        // Console.WriteLine("Horario de finalizacao: "+ tempo);
        // Console.WriteLine("Uso de memória: "+memoria + "MB");
        // Console.WriteLine();
        // hash.Clear();
        // Thread.Sleep(5000);
        //
        // horaDeInicio = DateTime.Now;
        // for (var i = 0; i < 100000000; i++) hash.Add(i, 0);
        // memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        // tempo = (DateTime.Now - horaDeInicio).TotalSeconds;
        // Console.WriteLine("Horario de finalizacao: "+ tempo);
        // Console.WriteLine("Uso de memória: "+memoria + "MB");
        // Console.WriteLine();
        // hash.Clear();
        // Thread.Sleep(5000);

        // horaDeInicio = DateTime.Now;
        // for (var i = 0; i < 150000000; i++) hash.Add(i, 0);
        // memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        // tempo = (DateTime.Now - horaDeInicio).TotalSeconds;
        // Console.WriteLine("Horario de finalizacao: "+ tempo);
        // Console.WriteLine("Uso de memória: "+memoria + "MB");
        // Console.WriteLine();
        // hash.Clear();
        // Thread.Sleep(5000);
        
        horaDeInicio = DateTime.Now;
        for (var i = 0; i < 200000000; i++) hash.Add(i, 0);
        memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        tempo = (DateTime.Now - horaDeInicio).TotalSeconds;
        Console.WriteLine("Horario de finalizacao: "+ tempo);
        Console.WriteLine("Uso de memória: "+memoria + "MB");
        Console.WriteLine();
        hash.Clear();
        
    }
}