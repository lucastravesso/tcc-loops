namespace loop_cSharp.Queue;

public class QueueExecute
{
    public void ExecuteQueue()
    {
        var queue = new Queue<int>();
        var horaDeInicio = DateTime.Now;
        for (var i = 0; i < 1000000; i++) queue.Enqueue(i);
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine("Uso de memoria: {0:0.000} MB", GC.GetTotalMemory(false) / (1024.0 * 1024.0));
        queue.Clear();

        horaDeInicio = DateTime.Now;
        for (var i = 0; i < 50000000; i++) queue.Enqueue(i);
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine("Uso de memoria: {0:0.000} MB", GC.GetTotalMemory(false) / (1024.0 * 1024.0));
        queue.Clear();
        
        horaDeInicio = DateTime.Now;
        for (var i = 0; i < 100000000; i++) queue.Enqueue(i);
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine("Uso de memoria: {0:0.000} MB", GC.GetTotalMemory(false) / (1024.0 * 1024.0));
        queue.Clear();
        
        horaDeInicio = DateTime.Now;
        for (var i = 0; i < 150000000; i++) queue.Enqueue(i);
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine("Uso de memoria: {0:0.000} MB", GC.GetTotalMemory(false) / (1024.0 * 1024.0));
        queue.Clear();
        
        horaDeInicio = DateTime.Now;
        for (var i = 0; i < 200000000; i++) queue.Enqueue(i);
        Console.WriteLine("Horario de finalizacao: {0}", (DateTime.Now - horaDeInicio).TotalSeconds);
        Console.WriteLine("Uso de memoria: {0:0.000} MB", GC.GetTotalMemory(false) / (1024.0 * 1024.0));
        queue.Clear();
    }
}