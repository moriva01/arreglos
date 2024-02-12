/*almacenar frutas en un vector*/
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "digite cuantas frutas quiere agregar: ";
    cin >> size;

    string frutas_nomres[size];

    cout << "--- Digita los nombres de las frutas: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "-";
        cin >> frutas_nomres[i];
    }

    cout << "--------------------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << i + 1 << "-" << frutas_nomres[i] << endl;
    }

    return 0;
}