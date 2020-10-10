#include <iostream>
#include <queue>
using namespace std;

queue<int> f;
queue<int> f2;

int main(void){

    f.push(2);
    f.push(2);
    f.push(2);
    //"pilha" inicial: 2 2 2

    //empilha 4:
    //transferir elementos de F para F2
    f2.push(f.front());
    f.pop();
    f2.push(f.front());
    f.pop();
    f2.push(f.front());
    f.pop();
    //f = vazia
    //f2 = 2 2 2
    
    //adiciona o elemento "empilhado" em F
    f.push(4);
    //f = 4
    //f2 = 2 2 2

    //transfere os elementos de F2 de volta para F;
    f.push(f2.front());
    f2.pop();
    f.push(f2.front());
    f2.pop();
    f.push(f2.front());
    f2.pop();
    //f = 4 2 2 2
    //f2 = vazia

    //Assim, ao dar "f.pop()" o elemento "4" sairá da lista, ou seja, o comportamento será de LIFO, como uma pilha.

    return 0;
}


