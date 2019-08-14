
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upisUfajl(char imeFajla[20]);
typedef struct aranzman{

    char imeAgencije[10];
    char imeHotela[10];
    char mesto[10];
    int brojNocenja;
    int cenaAranzmana;

}Aranzmani;
Aranzmani aranzmani[10];
int main()
{
    int i = 0;
    int maks;
    int lokacija = 1;



    strcpy(aranzmani[0].imeAgencije, "Agencija 1");
    strcpy(aranzmani[0].imeHotela, "Hotel 1");
    strcpy(aranzmani[0].mesto, "Lefkada");
    aranzmani[0].brojNocenja = 4;
    aranzmani[0].cenaAranzmana = 30;

    strcpy(aranzmani[1].imeAgencije, "Agencija 2");
    strcpy(aranzmani[1].imeHotela, "Hotel 2");
    strcpy(aranzmani[1].mesto, "Berlin");
    aranzmani[1].brojNocenja = 5;
    aranzmani[1].cenaAranzmana = 50;

    strcpy(aranzmani[2].imeAgencije, "Agencija 3");
    strcpy(aranzmani[2].imeHotela, "Hotel 3");
    strcpy(aranzmani[2].mesto, "Lefkada");
    aranzmani[2].brojNocenja = 10;
    aranzmani[2].cenaAranzmana = 150;

    strcpy(aranzmani[3].imeAgencije, "Agencija 4");
    strcpy(aranzmani[3].imeHotela, "Hotel 4");
    strcpy(aranzmani[3].mesto, "London");
    aranzmani[3].brojNocenja = 20;
    aranzmani[3].cenaAranzmana = 600;


    /* Vec je upisano u fajl! */
        // upisUfajl("aranzmani.txt");
    citaj("aranzmani.txt");



    return 0;
}

void upisUfajl(char imeFajla[20]){

     int velicina = sizeof(aranzmani)/sizeof(aranzmani[0]);
     FILE* fajl = fopen(imeFajla, "w");


     for(int i = 0; i < velicina; i++){


            fprintf(fajl, "Aranzman: %s  \n  Hotel: %s \n Mesto: %s \n Broj nocenja: %d  \n Cena: %d \n", aranzmani[i].imeAgencije, aranzmani[i].imeHotela, aranzmani[i].mesto, aranzmani[i].brojNocenja, aranzmani[i].cenaAranzmana);

    }
    fclose(fajl);

}
void citaj(char imeFajla[20]) {

    int velicina = sizeof(aranzmani)/sizeof(aranzmani[0]);
    int lokacija = 1;
	FILE* file1 = fopen(imeFajla, "r");
    int i = 0;
	char * singleLine = malloc(1000 * sizeof(char));



    while(fgets(singleLine, 1000, file1) != NULL){

        for(i; i < velicina; i++){
            if(strcmp(aranzmani[i].mesto, "Lefkada")){
            puts(singleLine);
            }
        }

    }

	free(singleLine);
	fclose(file1);
}









