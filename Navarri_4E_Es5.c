/*Esercizio 5
Progettare un algoritmo che effettui le seguenti operazioni:

    • continui a leggere da tastiera una serie di terne di valori interi A, B e C 
    finchè non vengono inseriti dei valori tali per cui A + B < C
    
    • conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
    
    • prima di terminare, visualizzi il valore dei valori conteggiati
*/

//inserimento libreria
#include <stdio.h>

void main() //funzione principale
{
    //dichiarazione delle variabili
    int A=0,B=0, C=0;
    int differenza=0;
    int diffPari=0, diffDispari=0, diffNulla=0;
    
    //ciclo do while per la ripetizione dell'acquisizione dei numeri e il calcolo della differenza
    do{
        //acquisizione A
        printf("\nInserire A: ");
        scanf("%d", &A);
        
        //acquisizione B
        printf("\nInserire B: ");
        scanf("%d", &B);
        
        //acquisizione C
        printf("\nInserire C: ");
        scanf("%d", &C);
        
        //calcolo della differenza tra A e B
        differenza=A-B;
            
        //verifica se la differenza è pari, dispari o nulla ed incrementa i relativi contatori
        if(differenza%2==0)
            diffPari++;
        else if(differenza==0)
            diffNulla++;
        else    
            diffDispari++;
        
    }while((A+B)>=C); 

    //stampa a schermo di quante differenze pari, nulle o dispari ci sono state
    printf("\nDifferenze tra A e B pari: %d", diffPari);
    printf("\nDifferenze tra A e B nulle: %d", diffNulla);
    printf("\nDifferenze tra A e B dispari: %d", diffDispari);
}