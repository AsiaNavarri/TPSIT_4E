/*Esercizio 10:
Una birreria a fine serata deve conteggiare l’incasso. 
La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. 
La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande 
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni
*/

//inseriento librerie
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //dichiarazione e inizializzazione variabili
    char tipologia[12];
    float importo=0;
    float sommaRistorazione = 0, sommaBevande = 0, mediaRistorazioni=0, mediaBevande=0;
    int contBevande=0, contRistorazione=0;

    do //ciclo per la ripetizione del programma finchè non viene inserita la stinga "esci"
    {
        //acquisizione e verifica tipologia di consumazione
        do
        {
            printf("\nInserisci la tipologia \n- ristorazione\n- bevande\nesci\n ");
            scanf("%s", tipologia);
            
            if(strcmp("esci", tipologia) != 0 && strcmp(tipologia, "ristorazione") != 0 && strcmp(tipologia, "bevande") != 0)
                printf("\nInserimento non valido\n\n");
            
            if(strcmp("esci",tipologia)==0)
                break;
                
        } while (strcmp("esci", tipologia) != 0 && strcmp(tipologia, "ristorazione") != 0 && strcmp(tipologia, "bevande") != 0);
        
        
        if(strcmp("esci", tipologia) != 0 && strcmp(tipologia, "ristorazione") == 0 || strcmp(tipologia, "bevande") == 0)
        {
            //acquisizione e verifica importo
            do
            {
                printf("\nInserire l'importo: \n");
                scanf("%f", &importo);
                
                if(importo<=0)
                printf("\nImporto inserito non valido\n\n");
                
            } while (importo <= 0);
    
            if (strcmp(tipologia, "ristorazione") == 0)
            {
                contRistorazione++; //incremento contatore per il calcolo della media
                sommaRistorazione += importo; //calcolo della somma degli importi della ristorazione
            }
            
            if (strcmp(tipologia, "bevande") == 0)
            {
                contBevande++; //incremento contatore per il calcolo della media
                sommaBevande = sommaBevande + importo; //calcolo della somma degli importi delle bevande
            }
        }
        
    } while (strcmp("esci", tipologia) != 0);

    //al termine del programma viene verificato se sono state vendute più bevande o ristorazioni 
    //e viene visualizzato a schermo il relativo messaggio
    if (contRistorazione > contBevande)
    {
        printf("\nSono state vendute più ristorazioni");
    }
    else
    {
        printf("\nSono state vendute più bevande");
    }
    
    //calcolo della media degli incassi
    mediaBevande = sommaBevande / (double)contBevande;
    mediaRistorazioni = sommaRistorazione / (double)contRistorazione;
    
    //stampa a schermo delle medie
    printf("\nLa media degli incassi relativi alle ristorazioni vale: %.2f €", mediaRistorazioni);
    printf("\nLa media degli incassi relativi alle bevande vale: %.2f €", mediaBevande);
    
    return 0;
}