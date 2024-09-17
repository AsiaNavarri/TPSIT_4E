/*Esercizio 2
Progettare un algoritmo che effettui le seguenti operazioni:
    • continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
    0 (zero)
    • per ogni coppia di numeri letti:
        ◦ calcoli il prodotto dei due numeri e ne stampi il valore
        ◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
    • all’uscita del ciclo, stampi il valore della somma
*/

//inserimento libreria
#include <stdio.h>

void main() //funzione principale
{
    //dichiarazione delle variabili
    int numero1=0, numero2=0;
    float prodotto=0, somma=0;
    
    //ciclo do while per la ripetizione dell'acquisizione dei numeri e il calcolo del rapporto
    do{
        //acquisizione primo numero
        printf("\nInserire primo numero: ");
        scanf("%d", &numero1);
        
        //acquisizione secondo numero
        printf("\nInserire secondo numero: ");
        scanf("%d", &numero2);
        
        //calcolo del prodotto tra i due numeri
        prodotto=numero1*numero2;
        
        //calcolo della somma dei prodotti
        somma=somma+prodotto;
        
        //stampa a schermo del prodotto tra i due numeri
        printf("\nIl prodotto tra i numeri inseriti vale: %.2f \n", prodotto);
        
    }while((numero1!=0)&&(numero2!=0)); //condizione per ripetere il ciclo: entrambi i numeri devono essere diversi da 0
    
    //stampa della somma dei prodotti dei numeri inseriti
    printf("\nLa somma tra i prodotti di tutte le coppie di numeri inserite vale: %.2f \n", somma);    

}