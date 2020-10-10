/*4. Escreva um algoritmo que dada uma pilha P, inverta a ordem dos
elementos de P. Seu algoritmo deve usar espaço auxiliar constante
(somente variáveis locais e nenhum vetor extra) e:
a) uma fila
b) duas pilhas
c) uma pilha
Seu algoritmo deve manipular as pilhas e filas por suas interfaces padrão
(somente métodos do TAD). 5. Escreva um algoritmo que dada*/

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
