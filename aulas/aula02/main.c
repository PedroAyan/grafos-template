#include <stdio.h>
#include "grafo_matriz_h"

int main () {
    int numero_vertices = 8;
    
    GrafoMatriz grafo;
    inicializar(&grafo, numero, vertices);
    
    1 -- 2
    1 -- 3
    1 -- 4
    2 -- 5
    2 -- 6
    3 -- 4
    3 -- 7
    4 -- 7
    5 -- 6
    8 -- 5
    8 -- 6
    8 -- 7

    inserir_aresta(&grafo, 0, 1);
    inserir_aresta(&grafo, 0, 2);
    inserir_aresta(&grafo, 0, 3);
    inserir_aresta(&grafo, 1, 4);
    inserir_aresta(&grafo, 1, 5);
    inserir_aresta(&grafo, 2, 3);
    inserir_aresta(&grafo, 2, 6);
    inserir_aresta(&grafo, 3, 6);
    inserir_aresta(&grafo, 7, 4);
    inserir_aresta(&grafo, 7, 5);
    inserir_aresta(&grafo, 7, 6);


    printf("Matriz de adjacencia\n");
     exibir_matriz(&grafo);

     return 0;
}