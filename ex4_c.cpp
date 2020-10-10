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
