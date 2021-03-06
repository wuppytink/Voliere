#include "voliere.h"
#include <iostream>
//vogel ist in voliere.h



using namespace std;


int main() {

bool cat = false;
char antwort;
string vogelName;
int auswahl;
bool run = true;
int vogelAuswahl = 0;
    CVoliere kaefig = CVoliere();   
    while(run){ 

    cout << "Was wollen Sie tun?\n"
            "1 - einen Vogel hinzufügen\n"
            "2 - einen Vogel entfernen\n"
            "3 - alle Voegel anzeigen\n"
            "4 - die Katze setzten\n"
            "5 - die Voliere simulieren\n"
            "6 - beenden\n"  << endl;
    cin >> auswahl;
    switch(auswahl){
 
    //vogel hinzufügen
        case 1:{
            cout << "Bitte geben Sie einen Namen fuer einen Vogel ein: " << endl;
            cin >> vogelName;
            cout << "Was fuer eine Vogel soll es sein:\n"
                    "1 - Taube\n"
                    "2 - Rabe\n"
                    "3 - Spatz\n" << endl;

                    cin >> vogelAuswahl;
                   
                    CVogel* pBird = new CVogel;
                    switch(vogelAuswahl){
                        case 1:{
                            CTaube *taube = new CTaube(vogelName);
                            pBird = taube;                           
                            break;}
                        case 2:{
                            CRabe *rabe = new CRabe(vogelName);
                            pBird = rabe;
                            break;}
                        case 3:{
                            CSpatz *spatz = new CSpatz(vogelName);
                            pBird = spatz;
                            break;}
                    }
            
            kaefig.addBird(pBird);
            break;}        
        
    //vogel entfernen
        case 2:{
            cout << "Welcher Vogel soll entfernt werden: ";
            cin >> vogelName;
            kaefig.deleteBird(vogelName);
            break;} 
            

    //Vögel anzeigen, geht nicht
        case 3:{
            kaefig.showBirds();
            break;}
    
    //Katze setzten
        case 4:{
            cout << "Ist die Katze agressiv? (J/N)\n";
            cin >> antwort;
            if(antwort == 'J'){cat = true;}else{cat = false;}
            break;}            

    //voliere simulieren, geht nicht
        case 5:{
            kaefig.simulate(cat);
            break;} 
            
    //beenden
        case 6:{
            run = false;
            break;}
    }
    } 
    
    return 0;
}

//Gui/Application, u8 äöü und so, Klasse abfragen