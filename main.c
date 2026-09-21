#include <stdio.h>

const int linha = 3;
const int coluna = 3;

int Estruturamatriz(int linha, int c){

    int k;

    k = linha * coluna + c;

    return k;
}

int Dimensionar_matriz(int linha, int coluna){

    return linha * coluna;

}

void ZerarMatriz(int vet[]){
    int k;
    int total = Dimensionar_matriz (linha, coluna);

    for(k = 0; k < total; k++){
        vet[k] = 0;
    }
}

void Imprimirmatriz(int vet[]){

    int k;
    int total = Dimensionar_matriz (linha, coluna);

    for(k = 0; k < total; k++){
        printf("%d ", vet[k]);
        if((k + 1) % coluna == 0){
            printf("\n");
        }
    }
}

int Busca_matriz(int vet[], int linha, int coluna){

    int n, num;

    num = Estruturamatriz(linha, );

    return vet[num];
}

int main(){

    int l = 2, c = 2;
    int dimensiona = DimensionarMatriz(linha, coluna);

    int vet[dimensiona], linha, coluna;

    ZerarMatriz(vet);

    Imprimirmatriz(vet); 

    int buscou = Busca_matriz(vet, l, c);
    printf("O elemento que está na linha 2 coluna 2 eh: %d", buscou);
    
    
}