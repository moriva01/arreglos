/*

se necesita almacenar informacion sobre animales,
para gestionar una clinica veterinaria. para comenzar,
se supondra que solo hay un animal. del animal es:

- tipo animal (perro, gato, etc)
- nombre
- edad
- nombre del dueño

implementa un programa que pida los datos necesarios del animal
utilizando la siguiente variable de tipo puntero:

animal *a;

*/

#include <iostream>
#include <string>

using namespace std;

struct animal
{
    string tipo_animal;
    string nombre_animal;
    int edad;
    string nombre_dueno;
};

int main()
{

    animal *a = new animal; // apuntador de tipo animal (estructura creada anteriormente)

    cout << "Ingresa el tipo de animal: "; // pedir datos y pasarlos a la memoria
    cin >> a->tipo_animal;

    cout << "Ingresa el nombre del animal: ";
    cin >> a->nombre_animal;

    cout << "Ingresa edad del animal: ";
    cin >> a->edad;

    cout << "Ingresa el nombre del dueño del animal: ";
    cin >> a->nombre_dueno;

    cout << "--------------------------------------------" << endl;
    cout << "--------------Datos animal: " << endl;
    cout << "-Tipo: " << a->tipo_animal << endl;
    cout << "-Nombre: " << a->nombre_animal << endl;
    cout << "-Edad: " << a->edad << endl;
    cout << "-Nombre dueño: " << a->nombre_dueno << endl;
    cout << "--------------------------------------------" << endl;
    return 0;
}