/*registrar productos*/

#include<iostream>

using namespace std;

int main(){
int eje_x=0, eje_y=0,contador=1;

cout<<"digite las filas de productos: ";

cin>>eje_x;

cout<<"digite las columnas de productos: ";
cin>>eje_y;

string productos [eje_x][eje_y];

for(int i=0; i<eje_x;i++){

    for(int j=0; j<eje_y;j++){
        cout<<"["<<contador<<"] "<<"producto-precio: ";
        cin>>productos[i][j];
        contador++;
    }
}

cout<<"========================================================================"<<endl;

for(int i=0; i<eje_x;i++){

    for(int j=0; j<eje_y;j++){

        cout<<productos[i][j]<<" | ";
    }
    cout<<""<<endl;
}

    return 0;
}