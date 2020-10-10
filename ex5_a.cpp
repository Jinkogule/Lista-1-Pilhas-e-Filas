/*5. Escreva um algoritmo que dada uma fila F, inverta a ordem dos elementos
de F. Seu algoritmo deve usar espaço auxiliar constante (somente variáveis
locais e nenhum vetor extra) e:
a) uma pilha
b) duas filas
Seu algoritmo deve manipular as pilhas e filas por suas interfaces padrão
(somente métodos do TAD).*/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void){

    queue<char> f; //Fila F
    f.push('A');    
    f.push('B');  
    f.push('C');
    f.push('D');
    f.push('E');
    
    stack<char> p; //Pilha auxiliar
    p.push(f.front());
    f.pop();
    p.push(f.front());
    f.pop();
    p.push(f.front());
    f.pop();
    p.push(f.front());
    f.pop();
    p.push(f.front());
    f.pop();
    
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
    //Fila F invertida

    return 0;
}
