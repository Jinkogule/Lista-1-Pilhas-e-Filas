#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void){

    stack<char> p; //pilha P
    p.push('A');    
    p.push('B');  
    p.push('C');
    p.push('D');
    p.push('E');
    
    queue<char> f; //fila auxiliar
    f.push(p.top());
    p.pop();
    f.push(p.top());
    p.pop();
    f.push(p.top());
    p.pop();
    f.push(p.top());
    p.pop();
    f.push(p.top());
    p.pop();
    
    printf("Pilha P invertida: ");
    p.push(f.front());
    printf("%c ", p.top());
    f.pop();
    p.push(f.front());
    printf("%c ", p.top());
    f.pop();
    p.push(f.front());
    printf("%c ", p.top());
    f.pop();
    p.push(f.front());
    printf("%c ", p.top());
    f.pop();
    p.push(f.front());
    printf("%c ", p.top());
    f.pop();
    //Pilha P invertida

    return 0;
}