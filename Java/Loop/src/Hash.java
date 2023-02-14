import java.time.Duration;
import java.time.LocalDateTime;
import java.util.HashMap;
import java.util.Stack;

public class Hash {
    public static void main(String[] args) {

        HashMap<Long, Long> hash = new HashMap<>();
        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 1000000; i++) {
            hash.put(i, 0L);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        hash.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 50000000; i++) {
            hash.put(i, 0L);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        hash.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 100000000; i++) {
            hash.put(i, 0L);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        hash.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 150000000; i++) {
            hash.put(i, 0L);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        hash.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 200000000; i++) {
            hash.put(i, 0L);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");
    }
}