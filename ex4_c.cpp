#include <iostream>
#include <stack>

using namespace std;

int main(void){

    stack<char> p; //pilha P
    p.push('A');    
    p.push('B');   
    p.push('C');
    p.push('D');
    p.push('E');
    
    stack<char> p2; //pilha auxiliar;
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    p2.push(p.top());
    p.pop();
    //auxiliar = E D C B A
    //p = vazia

    p.push('A');    
    p.push('B');   
    p.push('C');
    p.push('D');
    p.push('E');
    //P = A B C D E

    p2.swap(p); //auxiliar troca de elementos com P

    p2.pop();
    p2.pop();
    p2.pop();
    p2.pop();
    p2.pop();
    //p = E D C B A
    //auxiliar = vazia

    return 0;
}