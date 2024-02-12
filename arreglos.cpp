#include <iostream>

using namespace std;

int main()
{
    string nombre_estudiantes[5];

    cout << "--- Digita los nombres de los estudiantes: " << endl;

    for (int i = 0; i < nombre_estudiantes->length(); i++)
    {
        cout << i + 1 << "-";
        cin >> nombre_estudiantes[i];
    }
    cout << "--------------------------------------------------------" << endl;
    for (int i = 0; i < nombre_estudiantes->length(); i++)
    {

        cout << i + 1 << "-" << nombre_estudiantes[i] << endl;
    }

    return 0;
}