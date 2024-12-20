#include <iostream>
#include <string>
using namespace std;
#include "Grafo.cpp" 

int main() {
    
//dichiarazione grafo
    Grafo<string> grafo;

    //dichiarazione elementi del grafo
    grafo.aggiungiNodo("Milano");
    grafo.aggiungiNodo("Venezia");
    grafo.aggiungiNodo("Torino");
    grafo.aggiungiNodo("Lecce");
    grafo.aggiungiNodo("Livorno");

    //dichiarazione archi
    grafo.aggiungiArco("Milano", "Venezia", 245);
    grafo.aggiungiArco("Venezia", "Torino", 400);
    grafo.aggiungiArco("Torino", "Livorno", 345);
    grafo.aggiungiArco("Livorno", "Lecce",  940);
    grafo.aggiungiArco("Lecce", "Milano", 1000);
    grafo.aggiungiArco("Venezia", "Lecce", 965);

   
    grafo.stampa();

    //controlla i nodi adiacenti a quello scelto
    grafo.nodiAdiacenti("Venezia");

    //controllo esistenza nodo
    cout << "Esiste nodo 'Venezia': " << grafo.esisteNodo("Venezia") << endl;

    
    vector<string> adiacenti = grafo.nodiAdiacenti("Lecce");
    cout << "Nodi adiacenti a 'Lecce': ";
    for (string& nodo : adiacenti) {
        cout << nodo << " ";
    }
    
    cout << "Esiste arco tra 'Livorno' e 'Lecce': " << grafo.esisteArco("Livorno", "Lecce") <<endl;

    //rimozione arco
    grafo.rimuoviArco("Milano", "Venezia");
    //rimozione nodo
    grafo.rimuoviNodo("Milano");

    grafo.stampaGrafo();

    //trova arco con peso minore
    int minimo=grafo.arcomin("Livorno");
	if(arcomin!=-1){
		cout<<"L'arco col peso minimo pesa ""<<arcomin<<endl;
	}

    return 0;
}
