/*Esercizio 4
Progettare un algoritmo che effettui la lettura da tastiera di 
una serie di coppie di valori numerici reali (sia positivi che negativi che zero).

Per ciascuna coppia, l’algoritmo deve calcolare e stampare il 
valore della radice quadrata del rapporto tra il valore maggiore e quello minore dei due. 

Il programma termina quando vengono inseriti dei valori che non permettono di svolgere il calcolo 
nel dominio dei numeri reali.

Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.
*/

//inserimento librerie
#include <stdio.h>
#include <math.h>

void main() //funzione principale
{
    //dichiarazione delle variabili
    int numero1=0,numero2=0;
    float rapporto=0, radice=0;
    
    //ciclo do while per la ripetizione dell'acquisizione dei numeri e il calcolo del rapporto
    do{
        //acquisizione primo numero
        printf("\nInserire primo numero: ");
        scanf("%d", &numero1);
        
        //acquisizione secondo numero
        printf("\nInserire secondo numero: ");
        scanf("%d", &numero2);
        
        //verifica qual'è il numero maggiore
        if(numero1>numero2)
            //verifica che sia possibile calcolare il rapporto
            if(numero2==0)
            {
                //stampa messaggio di errore e termine del programma
                printf("\ncalcolo del rapporto tra il maggiore e il minore impossibile");
                break;
            }
            else
                //calcolo del rapporto tra il valore minore e quello maggiore
                rapporto=(double)numero1/(double)numero2;
            
        else
            //verifica che sia possibile calcolare il rapporto
            if(numero1==0)
            {
                //stampa messaggio di errore e termine del programma
                printf("\ncalcolo del rapporto tra il maggiore e il minore impossibile");
                break;
            }
            else
                //calcolo del rapporto tra il valore minore e quello maggiore
                rapporto=(double)numero2/(double)numero1;
                
        
        //stampa a schermo del rapporto tra i due numeri
        printf("\nIl rapporto tra il numero minore e il maggiore vale: %.2f \n", rapporto);
          
        //verifica che sia possibile calcolare la radice quadrata      
        if (rapporto >= 0)
		{
		    //calcolo della radice quadrata del rapporto
			radice = sqrt(rapporto);
			
			//stampa a schermo della radice quadrata
			printf("\nLa radice quadrata del rapporto tra i due numeri vale: %.2f \n", radice);
		}
        else
        {
            //stampa messaggio di errore e termine del programma
            printf("\nNon si può calcolare la radice quadrata di un numero negativo");
            break;
        }    
        
    }while(rapporto>=0); //condizione per ripetere il ciclo: deve essere possibile calcolare la radice quandrata del rapporto dei due numeri

}