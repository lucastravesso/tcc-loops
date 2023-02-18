using System.Diagnostics;

namespace loop_cSharp;

public class StackExecute
{
    public void ExecuteStask()
    {
        var pilha = new Stack<long>();
        var horaDeInicio = DateTime.Now;
        for (long i = 0; i < 1000000; i++) pilha.Push(i);
        long memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine($"Uso de memoria: "+ memoria +" MB");
        pilha.Clear();
        
        horaDeInicio = DateTime.Now;
        for (long i = 0; i < 50000000; i++) pilha.Push(i);
        memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine($"Uso de memoria: "+ memoria +" MB");
        pilha.Clear();
        
        horaDeInicio = DateTime.Now;
        for (long i = 0; i < 100000000; i++) pilha.Push(i);
        memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine($"Uso de memoria: "+ memoria +" MB");
        pilha.Clear();
        
        
        horaDeInicio = DateTime.Now;
        for (long i = 0; i < 150000000; i++) pilha.Push(i);
        memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine($"Uso de memoria: "+ memoria +" MB");
        pilha.Clear();
        
        horaDeInicio = DateTime.Now;
        for (long i = 0; i < 200000000; i++) pilha.Push(i);
        memoria = (Process.GetCurrentProcess().WorkingSet64 / (1024 * 1024));
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine($"Uso de memoria: "+ memoria +" MB");
    }
}