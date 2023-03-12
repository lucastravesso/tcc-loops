package indice_invertido;

import java.time.Duration;
import java.time.LocalDateTime;
import java.util.*;

public class MapaInvertido {

    static final int MIN_REPETICOES = 2;
    static final int MAX_VALOR = 1000;
    static final int NUM_LINHAS = 10000000;
    static final int NUM_COLUNAS = 11;

    public static void main(String[] args) {
        // Criar matriz com 10000 linhas e 11 colunas
        int[][] matriz = new int[NUM_LINHAS][NUM_COLUNAS];
        for (int i = 0; i < NUM_LINHAS; i++) {
            for (int j = 0; j < NUM_COLUNAS; j++) {
                matriz[i][j] = (int) (Math.random() * MAX_VALOR) + 1;
            }
        }

        LocalDateTime horaDeInicio;
        horaDeInicio = LocalDateTime.now();
        // Criar mapa para armazenar índices de valores repetidos em cada coluna
        List<Map<Integer, List<Integer>>> mapasPorColuna = new ArrayList<>();
        for (int j = 0; j < NUM_COLUNAS; j++) {
            Map<Integer, List<Integer>> mapa = new HashMap<>();
            for (int i = 0; i < NUM_LINHAS; i++) {
                int valor = matriz[i][j];
                if (mapa.containsKey(valor)) {
                    mapa.get(valor).add(i);
                } else {
                    mapa.put(valor, new ArrayList<>(Arrays.asList(i)));
                }
            }
            mapasPorColuna.add(mapa);
        }

        // Filtrar mapa para incluir apenas valores repetidos
        List<Map<Integer, List<Integer>>> mapasDeValoresRepetidos = new ArrayList<>();
        for (int j = 0; j < NUM_COLUNAS; j++) {
            Map<Integer, List<Integer>> mapa = mapasPorColuna.get(j);
            Map<Integer, List<Integer>> mapaFiltrado = new HashMap<>();
            for (Map.Entry<Integer, List<Integer>> entry : mapa.entrySet()) {
                int valor = entry.getKey();
                List<Integer> indices = entry.getValue();
                if (indices.size() >= MIN_REPETICOES) {
                    mapaFiltrado.put(valor, indices);
                }
            }
            mapasDeValoresRepetidos.add(mapaFiltrado);
        }

        System.out.println("Horario de finalizacaoo:" + Duration.between(horaDeInicio, LocalDateTime.now()).abs().toString().replace("S", "").replace("PT", ""));
        System.out.println("Uso de memoria: " + (Runtime.getRuntime().totalMemory() - Runtime.getRuntime().freeMemory()) / (1024 * 1024) + " MB");

        // Imprimir matriz e mapa de valores repetidos em cada coluna
//        for (int i = 0; i < NUM_LINHAS; i++) {
//            for (int j = 0; j < NUM_COLUNAS; j++) {
//                System.out.print(matriz[i][j] + "\t");
//            }
//            System.out.println();
//        }
//
//        char coluna = 'A';
//        for (int j = 0; j < NUM_COLUNAS; j++) {
//            System.out.println(coluna + ":");
//            Map<Integer, List<Integer>> mapa = mapasDeValoresRepetidos.get(j);
//            for (Map.Entry<Integer, List<Integer>> entry : mapa.entrySet()) {
//                int valor = entry.getKey();
//                List<Integer> indices = entry.getValue();
//                Collections.reverse(indices);
//                for (int i : indices) {
//                    System.out.print(i + " ");
//                }
//                System.out.println();
//            }
//            coluna++;
//        }
    }
}
