package multicore_paralelo;

import java.time.Duration;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Stack;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

public class PreenchimentoParalelo {

    public static List<Integer> preencher() {
        int numThreads = Runtime.getRuntime().availableProcessors();
        ExecutorService executor = Executors.newFixedThreadPool(numThreads);

        List<Integer> lista = new ArrayList<>(2_000_000_000);
        int chunkSize = 2_000_000_000 / numThreads;

        for (int i = 0; i < numThreads; i++) {
            int startIndex = i * chunkSize;
            int endIndex = (i == numThreads - 1) ? 2_000_000_000 : (i + 1) * chunkSize;

            // isso aq retorna um objeto Future<?> que me deixa ver se a tarefa foi concluida ou n , porem n estou chamando
            executor.submit(() -> {
                for (int j = startIndex; j < endIndex; j++) {
                    lista.add(j);
                }
            });
        }

        executor.shutdown();
        try {
            executor.awaitTermination(Long.MAX_VALUE, TimeUnit.NANOSECONDS);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        return lista;
    }

    public static void main(String[] args) {

        List<Integer> pilha = new Stack<>();
        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        preencher();

//        for (int i = 0; i < 150000000; i++) {
//            pilha.add(i);
//        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        pilha.clear();
        System.gc();
    }

}