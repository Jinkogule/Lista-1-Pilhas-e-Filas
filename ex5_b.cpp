#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void){

    queue<char> f; //Fila F
    queue<char> f2;//Fila auxiliar 1
    queue<char> f3;//Fila auxiliar 2
    f.push('A');    
    f.push('B');  
    f.push('C');
    f.push('D');
    f.push('E');

    f3.push(f.front());
    f.pop();
    f3.push(f.front());
    f.pop();
    f3.push(f.front());
    f.pop();
    f3.push(f.front());
    f.pop();
    f3.push(f.front());
    f.pop();
    //f3: A B C D E; f2: vazia; f: vazia;

    f2.push(f3.front()); //A
    f3.pop();
    f2.push(f3.front()); //B
    f3.pop();
    f2.push(f3.front()); //C
    f3.pop();
    f2.push(f3.front()); //D
    f3.pop();

    f.push(f3.front()); //f enfileira E
    f3.pop();

    f3.push(f2.front()); //A
    f2.pop();
    f3.push(f2.front()); //B
    f2.pop();
    f3.push(f2.front()); //C
    f2.pop();

    f.push(f2.front()); //f enfileira D
    f2.pop();

    f2.push(f3.front()); //A
    f3.pop();
    f2.push(f3.front()); //B
    f3.pop();

    f.push(f3.front()); //f enfileira C
    f3.pop();    

    f3.push(f2.front()); //A
    f2.pop();

    f.push(f2.front()); //f enfileira B
    f2.pop();

    f.push(f3.front()); //f enfileira A
    f3.pop();
    //Fila F invertida: E D C B A

    return 0;
}