/*Esercizio 6
Progettare un algoritmo che effettui le seguenti operazioni:
    • legga da tastiera una coppia di valori interi A e B con A<B;
    
    • continui a leggere da tastiera una serie di valori interi, terminando 
    quando il valore letto è al di fuori dell’intervallo [A, B];
    
    • conteggi la media dei valori letti;
    
    • prima di terminare, stampi il valore calcolato.
*/

//inserimento libreria
#include <stdio.h>

void main() //funzione principale
{
    //dichiarazione delle variabili
    int A=0,B=0, n=0, i=0, somma=0;
    float media=0;
    
    //ciclo do while per la ripetizione dell'acquisizione dei numeri da usare come estremi
    do{
        //acquisizione A
        printf("\nInserire A: ");
        scanf("%d", &A);
        
        //acquisizione B
        printf("\nInserire B: ");
        scanf("%d", &B);
        
        //stampa messaggio di errore se i valori non rispettano i requisiti
        if(A>=B)
            printf("\nErrore: A deve essere MINORE di B!");
        
    }while(A>=B); //condizione per ripetere il ciclo: alla fine A deve essere minore di B


    //ciclo per l'accquisizione dei numeri finchè non escono dall'intervallo definito con A e B
    do{
        //acquisizione numero
        printf("\nInserisci un numero: ");
        scanf("%d", &n);

        //verifica l'appartenenza all'intervallo [A, B]
        if(n>=A && n<=B)
        {
            //calcolo la somma aggiungendo il numero appena inserito
            somma=somma+n; 
            //incremento il contatore per calcolare la media
            i++;
        }
        
    }while(n>=A && n<=B); //verifica che i numeri non escano all'intervallo

    //calcolo della media dei valori inseriti
    media = (double)somma/i;
    
    //stampa a schermo della media dei valori inseriti
    printf("\nLa media di tutti i valori inseriti compresi nell'intervallo [A, B] vale: %.2f", media);
    
}
