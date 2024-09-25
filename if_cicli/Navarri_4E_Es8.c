/*Esercizio 8:
Progettare un algoritmo che risolve il seguente problema. 

Si desidera calcolare la somma delle radici quadrate di N valori numerici
inseriti dall’utente, con N inserito in input.

L’algoritmo deve stampare la somma calcolata. 

L’algoritmo deve terminare con un messaggio di errore 
quando viene inserito un numero che non permette di effettuare il calcolo 
(nel dominio dei numeri reali).
*/

//inseriento librerie
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizializzazione variabili
    int n=0, numero=0;
    float somma=0, radice=0;
    
    //acquisizione n
    do
    {
        printf("\nQuanti numeri vuoi inserire: ");
        scanf("%d", &n);
        
        if(n<0)
            printf("\nValore inserito non valido.");
            
    }while(n<0);
    
    for(int i=0; i<n; i++)
    {
        //acquisizione numeri
        printf("\nInserire %d° numero: ", (i+1));
        scanf("%d", &numero);
    
        if(numero>=0)
        {
            //calcolo della radice quadrata del numero
			radice = sqrt(numero);
			//aggiunta della radice alla somma
			somma+=radice;
        }
        else
        {
            //dato l'inserimento di un numero di cui non è possibile calcolare la radice quadrata, 
            //stampa messaggio di errore e termina programma
            printf("\nErrore!\nE\' stato inserito un numero di cui non e\' possibile calcolare la radice quadrata.");
            break;
        }
            
    }
    
    //stampa a schermo della somma delle radici
    printf("La somma delle radici quadrate dei numeri inseriti vale: %.2f", somma);

    return 0;
}