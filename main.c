#include <stdio.h>

int linha = 3;
int coluna = 3;
int total;


void zerarMatriz(int vet[]){
    int k;
    for(k = 0; k < total; k++){
        vet[k] = 0;
    }
}

void imprimirmatriz(int vet[],int l,int c){

    int k;

    for(k = 0; k < total; k++){
        printf("%d ", vet[k]);
        if((k + 1) % coluna == 0){
            printf("\n");
        }
    }
}


int main(){
    total = linha*coluna;
    dimensionarMatriz(linha, coluna);
    int vet[linha*coluna];

    zerarMatriz(vet);

    imprimirmatriz(vet, linha, coluna);
    
}