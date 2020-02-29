#include <iostream>

using namespace std;

int main()
{
    int zahl;
    string bs;


    cout << "Bitte Zahl eingeben!" << endl;
    cin >> zahl;
    cout << "Danke. Sie haben " << zahl << " eingegeben" << endl;

    cout << "Gebe jetzt einen Buchstaben ein" << endl;
    cin >> bs;
    cout << "Super du hast " << bs << " eingegeben" << endl;
    
    if (zahl < 10) {
        cout << "Deine Zahl war kleiner als 10" << endl;
    }
    else 

    if (bs == "A") {
         cout << "Was ein Zufall mein Buchstabe war auch ein A" << endl;
    }
    


    return 0;
     
}

