#include <stdio.h>

const int linha = 3;
const int coluna = 3;

int Dimensionar_matriz(int linha, int coluna){

    return linha * coluna;

}



int Estruturamatriz(int l, int c){

    int k;

    k = l * coluna + c;

    return k;
}


void adicionarElemnto(int vet[], int num, int lin, int col){
    int k;
    k = Estruturamatriz(lin, col);
    
    vet[k] = num;

}


void ZerarMatriz(int vet[]){
    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            adicionarElemnto(vet, 0, i, j);
        }
    }
}



int Busca_matriz(int vet[], int linha_desejada, int coluna_desejada){

    int n, num;

    num = Estruturamatriz(linha_desejada, coluna_desejada);

    return vet[num];
}

void Imprimirmatriz(int vet[]){

    int i, j;
    int total = Dimensionar_matriz(linha, coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            int num = Busca_matriz(vet, i, j);
            printf("%d ", num);
        }
        printf("\n");
    }
    printf("\n \n");
}

int main(){

    int dimensiona = Dimensionar_matriz(linha, coluna);
    int vet[dimensiona];
    int l = 2, c = 2;

    ZerarMatriz(vet);
    Imprimirmatriz(vet); 

    adicionarElemnto(vet, 7, 0, 0);
    adicionarElemnto(vet, 2, 0, 1);
    adicionarElemnto(vet, 3, 2, 2);
    adicionarElemnto(vet, 5, 1, 1);

    Imprimirmatriz(vet);

    int buscou = Busca_matriz(vet, l, c);
    printf("O elemento que está na linha %d coluna %d eh: %d",l, c, buscou);
    
    
}