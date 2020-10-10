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

using namespace std;

int main(void){

    stack<char> p; //pilha P
    p.push('A');    
    p.push('B'); 
    p.push('C');
    p.push('D');
    p.push('E');
    
    stack<char> p2; //pilha auxiliar 1
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

    stack<char> p3; //pilha auxiliar 2
    p3.push(p2.top());
    p2.pop();
    p3.push(p2.top());
    p2.pop();
    p3.push(p2.top());
    p2.pop();
    p3.push(p2.top());
    p2.pop();
    p3.push(p2.top());
    p2.pop();
    
    printf("Pilha P invertida: ");
    p.push(p3.top());
    printf("%c ", p.top());
    p3.pop();
    p.push(p3.top());
    printf("%c ", p.top());
    p3.pop();
    p.push(p3.top());
    printf("%c ", p.top());
    p3.pop();
    p.push(p3.top());
    printf("%c ", p.top());
    p3.pop();
    p.push(p3.top());
    printf("%c ", p.top());
    p3.pop();
    //Pilha P invertida

    return 0;
}
