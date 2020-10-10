#include <iostream>
#include <stack>
using namespace std;

stack<int> p;
stack<int> p2;

int main(void){

    p.push(1);
    p.push(2);
    p.push(3);
    //"fila" inicial: 1 2 3

    //desenfileira 1:
    //transferir elementos de P para P2
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    //p = vazia
    //p2 = 3 2 1
    
    //remove o elemento 1, que anteriormente foi o primeiro inserido em P e agora está no final de P2
    p2.pop();
    //p = vazia
    //p2 = 3 2

    //Assim, o primeiro elemento inserido foi o primeiro a sair, ou seja, o comportamento é de FIFO, como uma fila.
    
    return 0;
}