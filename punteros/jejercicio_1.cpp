#include<iostream>

using namespace std;

int main(){

int x, *p1, *p2;//inicializar variable x, y 2 punteros
*p1=NULL;//puntero nulo
*p2=NULL;//puntero nulo dos
x=15;//valor para x
p1=&x;//apuntador uno (espacio de memoria) se le asigna el valor del espacio de memoria de x
p2=p1;//apuntador 2(espacio de memoria) se le asigna el valor que se le paso a p1 (espacio de memoria de x)
    return 0;
}