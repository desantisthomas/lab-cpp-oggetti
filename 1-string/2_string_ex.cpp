#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){

     // .size()
    int x = stringa.size();
    cout << "La lunghezza della stringa è: " << x << endl;
    cout << endl;

     // .length()
    int y = stringa.length();
    cout << "La lunghezza della stringa è: " << y << endl;
    cout << endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){
    // .find()
    int z = stringa.find("ciao");
    if(z!=-1)
    {
         cout << "La parola ciao e' presente" << endl;
         cout << endl;
    }

    else
    {
        cout << "La parola ciao non e' presente" << endl;
        cout << endl;
    }

}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){

    // .replace()
    stringa = "pizza";
    cout << "Stringa prima di replace: " << stringa << endl;

    stringa.replace(stringa.find("pizza"), stringa.length(), "pasta");
    cout << "Stringa dopo replace: " << stringa << endl;
    cout<< endl;

}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    // TODO
       int j=stringa.find(" ");

       string s = stringa.substr(0, j);


    cout << "Nuova stringa estratta: " << s << endl;
    cout << endl;

}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string stringa){

// .insert()
    stringa.insert(stringa.length(), " Giovanni!");
    cout << "Stringa dopo insert: " << stringa << endl;
    cout<< endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);

    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);

    return 0;
}
