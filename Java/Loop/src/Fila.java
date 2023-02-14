import java.time.Duration;
import java.time.LocalDateTime;
import java.util.LinkedList;
import java.util.Stack;

public class Fila {
    public static void main(String[] args) {

        LinkedList<Long> fila = new LinkedList<>();
        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 1000000; i++) {
            fila.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        fila.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 50000000; i++) {
            fila.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        fila.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 100000000; i++) {
            fila.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        fila.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 150000000; i++) {
            fila.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        fila.clear();
        System.gc();
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 200000000; i++) {
            fila.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");
    }
}