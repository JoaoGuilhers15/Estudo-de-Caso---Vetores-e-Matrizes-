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
    k = Estruturamatriz(lin-1, col-1);
    
    vet[k] = num;

}


void ZerarMatriz(int vet[]){
    int k;
    int total = Dimensionar_matriz(linha, coluna);

    for(k = 0; k < total; k++){
        vet[k] = 0;
    }
}



void Imprimirmatriz(int vet[]){

    int k;
    int total = Dimensionar_matriz(linha, coluna);

    for(k = 0; k < total; k++){
        printf("%d ", vet[k]);
        if((k + 1) % coluna == 0){
            printf("\n");
        }
    }
    printf("\n \n");
}



int Busca_matriz(int vet[], int linha_desejada, int coluna_desejada){

    int n, num;

    num = Estruturamatriz(linha_desejada-1, coluna_desejada-1);

    return vet[num];
}

int main(){

    int dimensiona = Dimensionar_matriz(linha, coluna);
    int vet[dimensiona];
    int l = 1, c = 3;

    ZerarMatriz(vet);
    Imprimirmatriz(vet); 

    adicionarElemnto(vet, 7, 1, 3);
    adicionarElemnto(vet, 2, 2, 3);
    adicionarElemnto(vet, 3, 3, 1);
    adicionarElemnto(vet, 1, 2, 2);

    Imprimirmatriz(vet);

    int buscou = Busca_matriz(vet, l, c);
    printf("O elemento que está na linha %d coluna %d eh: %d",l, c, buscou);
    
    
}