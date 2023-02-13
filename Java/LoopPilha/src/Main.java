import java.time.Duration;
import java.time.LocalDateTime;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {

        Stack<Long> pilha = new Stack<>();
        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        for (long i = 0; i < 200000000; i++) {
            pilha.push(i);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");
    }
}