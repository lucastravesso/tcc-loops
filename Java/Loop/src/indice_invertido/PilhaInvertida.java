package indice_invertido;

import java.time.Duration;
import java.time.LocalDateTime;
import java.util.*;

public class PilhaInvertida {

    private static final int MAX_VALOR = 9;

    // 10kk
    private static final int NUM_LINHAS = 10;
    private static final int NUM_COLUNAS = 5;

    public static void main(String[] args) {

        int[][] matriz = new int[NUM_LINHAS][NUM_COLUNAS];

        Random random = new Random();
        for (int i = 0; i < NUM_LINHAS; i++) {
            for (int j = 0; j < NUM_COLUNAS; j++) {
                matriz[i][j] = random.nextInt(MAX_VALOR) + 1;
            }
        }

        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        // Criar lista de listas de pilhas para armazenar índices de valores repetidos em cada coluna
        List<List<Stack<Integer>>> pilhasPorValor = new ArrayList<>();
        for (int j = 0; j < NUM_COLUNAS; j++) {
            Map<Integer, List<Integer>> mapa = new HashMap<>();
            for (int i = 0; i < NUM_LINHAS; i++) {
                if (mapa.containsKey(matriz[i][j])) {
                    mapa.get(matriz[i][j]).add(i);
                } else {
                    mapa.put(matriz[i][j], new ArrayList<>(Arrays.asList(i)));
                }
            }
            List<Stack<Integer>> pilhas = new ArrayList<>();
            for (Map.Entry<Integer, List<Integer>> entry : mapa.entrySet()) {
                List<Integer> indices = entry.getValue();
                if (indices.size() >= 1) {
                    Stack<Integer> pilha = new Stack<>();
                    for (int i : indices) {
                        pilha.push(i);
                    }
                    pilhas.add(pilha);
                }
            }
            pilhasPorValor.add(pilhas);
        }
        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");



        for (int i = 0; i < NUM_LINHAS; i++) {
            for (int j = 0; j < NUM_COLUNAS; j++) {
                System.out.print(matriz[i][j] + "\t");
            }
            System.out.println();
        }


        for (int j = 0; j < NUM_COLUNAS; j++) {
            System.out.println((char) ('A' + j) + ":");
            List<Stack<Integer>> pilhas = pilhasPorValor.get(j);
            for (int i = 0; i < pilhas.size(); i++) {
                Stack<Integer> pilha = pilhas.get(i);
                int valor = matriz[pilha.peek()][j];
                System.out.print(valor + " : ");
                while (!pilha.isEmpty()) {
                    System.out.print(pilha.pop() + " ");
                }
                System.out.println();
            }
        }
    }
}
