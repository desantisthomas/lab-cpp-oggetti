/***************************************************************************
 *                         Username generator                              *
 *                                                                         *
 *  Capire il funzionamento della funzione minuscolo                       *
 *  e implementare le due funzioni usernameGenerator                       *
 **************************************************************************/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Funzione che trasforma una stringa in minuscolo
string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}

/*
    Funzione che, a partire da 2 stringhe nome e cognome,
    genera uno username nella forma:
    prima lettera del nome + tutto il cognome (minuscolo)
*/
string usernameGenerator(string nome, string cognome){
    string username;
    username += tolower(nome.at(0));       // prima lettera del nome in minuscolo
    username += minuscolo(cognome);        // cognome tutto minuscolo
    return username;
}

/*
    Funzione che, a partire da una stringa "Nome Cognome",
    genera uno username nella forma:
    prima lettera del nome + tutto il cognome (minuscolo)
*/
string usernameGenerator(string nomeCognome){
    // Trova la posizione dello spazio
    int spazio = nomeCognome.find(" ");
    string nome = nomeCognome.substr(0, spazio);
    string cognome = nomeCognome.substr(spazio + 1);

    // Riutilizza la funzione già scritta
    return usernameGenerator(nome, cognome);
}

// main con testing
int main()
{
    string nome = "Mario";
    string cognome = "Rossi";

    string nomeCognome = "Luca Bianchi";

    string username1 = usernameGenerator(nome, cognome);
    string username2 = usernameGenerator(nomeCognome);

    cout << "Primo utente: " << nome << " " << cognome << ". Username: " << username1 << endl;
    cout << "Secondo utente: " << nomeCognome << ". Username: " << username2 << endl;

    return 0;
}

