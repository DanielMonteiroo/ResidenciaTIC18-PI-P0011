#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void insere_meio(int vet[], int *tam, int elemento) {
    
    if (*tam >= 2)
    {
        
        int meio = *tam / 2;
        
        
        for (int i = *tam - 1; i >= meio; i--)
        {
            vet[i + 1] = vet[i];
        }
        
      
        vet[meio] = elemento;
        
        
        (*tam)++;
    } 
    else
    {
      
        cout<<"O vetor deve ter pelo menos 2 elementos para inserção no meio."<<endl;
    }
}

int main()
 {
    int vetor[7] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;
    
    int elemento = 100;
    
    insere_meio(vetor, &qtde, elemento);
    
    cout<<"Vetor resultante: "<<endl;
    for (int i = 0; i < qtde; i++) 
    {
        cout<<" "<<vetor[i];
    }
    cout<<""<<endl;
    
    return 0;
}
