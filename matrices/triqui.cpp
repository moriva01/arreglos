#include<iostream>

using namespace std;

int main(){
int contador=1;
char triqui[3][3];

cout<<"por favor digita 0- para O y 1- para x"<<endl;

for(int i=0; i<3;i++){

    for(int j=0; j<3;j++){
        int aux=0;
        cout<<"jugada["<<contador<<"] - ";
        cin>>aux;
        if(aux==1){

        triqui[i][j]='X';
        }else{
            triqui[i][j]='O';
        }

        contador++;
    }

cout<<triqui[i][0]<<" | "<<triqui[i][1]<<" | "<<triqui[i][2]<<" | "<<endl;
    
}

    return 0;
}