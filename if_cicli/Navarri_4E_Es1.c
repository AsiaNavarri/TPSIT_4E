/*Esercizio 1
Progettare un algoritmo che effettui 
la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il 
rapporto tra il valore minore e quello maggiore dei due. 
Il programma termina quando uno dei due valori o entrambi sono uguali a zero.
*/

//inserimento libreria
#include <stdio.h>

void main() //funzione principale
{
    //dichiarazione delle variabili
    int numero1=0,numero2=0;
    float rapporto=0;
    
    //ciclo do while per la ripetizione dell'acquisizione dei numeri e il calcolo del rapporto
    do{
        //acquisizione primo numero
        printf("\nInserire primo numero: ");
        scanf("%d", &numero1);
        
        //acquisizione secondo numero
        printf("\nInserire secondo numero: ");
        scanf("%d", &numero2);
        
        //calcolo del rapporto tra il valore minore e quello maggiore
        if(numero1<numero2)
            rapporto=(float)numero1/(float)numero2;
            
        else
            rapporto=(float)numero2/(float)numero1;
            
        //stampa a schermo del rapporto tra i due numeri
        printf("\nIl rapporto tra il numero minore e il maggiore vale: %.2f \n", rapporto);
        
    }while((numero1!=0)&&(numero2!=0)); //condizione per ripetere il ciclo: entrambi i numeri devono essere diversi da 0

}