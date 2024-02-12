/*

===================== ejercicios  ==============================00

1-  crear 2 vectores de n cantidad de numeros, el usuario da la cantidad
    sumar los valores que paso el usuario. y compare sumas

2-  crear un vector de n poscisiones simulando el buscaminas; mostrar cuantas
    minas hay de n cantidad de minas

*/

#include <iostream>

using namespace std;

int main()
{

    cout << "==========ejercicio 1===============" << endl;
    int x, y, suma_1 = 0, suma_2 = 0;
    cout << "digite el tamaño del primer vector: ";
    cin >> x;
    int primer_vector[x];
    cout << "==== digite los valores del vector: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << i + 1 << "-";
        cin >> primer_vector[i];
        suma_1 = suma_1 + primer_vector[i];
    }
    cout << "suma= " << suma_1 << endl;

    cout << "digite el tamaño del segundo vector: ";
    cin >> y;
    int segundo_vector[y];
    cout << "==== digite los valores del vector: " << endl;
    for (int i = 0; i < y; i++)
    {
        cout << i + 1 << "-";
        cin >> segundo_vector[i];
        suma_2 = suma_2 + segundo_vector[i];
    }

    cout << "suma= " << suma_2 << endl;

    if (suma_1 == suma_2)
    {
        cout << "============== sumas iguales" << endl;
    }
    else
    {

        cout << "============== sumas diferentes" << endl;
    }

    cout << "==========ejercicio 2===============" << endl;

    int w , minas=0;

    cout << "digite el tamaño del  vector: ";
    cin >> w;
    int vector_minas[w];
    cout<<"============= digite 1- para mina y 0 - para espacio en blanco"<<endl;

    for(int i=0; i<w;i++){
        cout<<i+1<<"- ";
        cin>>vector_minas[i];

        if(vector_minas[i]==1){
            minas++;
        }
    }
    cout<<"total minas: "<<minas<< endl;

    return 0;
}