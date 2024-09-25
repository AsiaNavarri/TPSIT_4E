/*Esercizio 9:
Progettare un algoritmo che risolva il seguente problema. 

Si richieda all’utente di inserire una serie di terne di dati numerici (A, B, C).

Il programma deve terminare quando uno dei valori inseriti è minore di zero. 

Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.

Su tutte le terne non scartate si calcoli il massimo e il minimo dei valori inseriti. 

Si stampino a video tali valori massimi e minimi prima di terminare il programma.
*/

//inseriento libreria
#include <stdio.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizializzazione variabili
    int A=0, B=0, C=0;
    int max=0, min=0;
    
    do
	{
	    //acquisizione A, B e C
		printf("\nInserire primo numero (A): ");
		scanf("%d", &A);
		//controllo che A non sia negativo (in quel caso termina il programma)
		if(A<0)
		    break;
		
		printf("\nInserire secondo numero (B): ");
		scanf("%d", &B);
		//controllo che B non sia negativo (in quel caso termina il programma)
		if(B<0)
		    break;
		
		printf("\nInserire terzo numero (C): ");
		scanf("%d", &C);
		//controllo che C non sia negativo (in quel caso termina il programma)
		if(C<0)
		    break;

        //controllo validità della terna (A<B<C)
		if((A<B) && (B<C))
		{
            //calcolo valori maggiori e minori tra tutti quelli inseriti
			if (A < min)
				min = A;
				
			if (C > max)
				max = C;
		}
		else
		{
		    //stampa messaggio di errore per la terna non valida
			printf("\nTerna inserita non valida");
		}

	} while ((A>=0)&&(B>=0)&&(C>=0)); //controllo che la terna inserita non contenga valori negativi

    //stampa a schermo del numero maggiore e minore 
	printf("\nIl numero massimo inserito e\': %d", max);
	printf("\nIl numero minimo inserito e\': %d", min);
    
    return 0;
}