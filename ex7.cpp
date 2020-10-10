#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int prioridade(char x){ //função para verificar prioridade dos operadores
    int pri;
    switch (x){
        case '*':
        case '/':
            pri = 3;
            break;
        case '+':
        case '-':
            pri = 2;
            break;
        case '(':
            pri = 1;
            break;
    }
    return pri;
}
int main(void){

    char expressao;//elemento "atual" da expressão
  
    stack<char> p; //pilha auxiliar
    queue<char> f; //fila que armazenará a notação polonesa reversa
    printf("Expressão: ");
    do{ //faça:
        scanf("%c", &expressao);
        if ('A'<=expressao && expressao<='Z'){ //enfileira
            f.push(expressao);
        }
        else if (expressao == '+'|| expressao == '-'|| expressao == '*'|| expressao == '/'){ //operador encontrado
            if (p.empty()){ //pilha não possui elementos, empilha o operador
                p.push(expressao);
            }
            else{ //pilha possui elementos
                if (prioridade(expressao)>prioridade(p.top())){ //se prioridade do operador for maior que a do elemento no topo da pilha:
                    p.push(expressao); //empilha o operador
                }
                else{ //se a prioridade do operador não for maior que a do elemento no topo da pilha:
                    while (prioridade(expressao)<=prioridade(p.top())){ //enfileira o topo da pilha e desempilha até que a prioridade do operador seja maior que o topo da pilha
                        f.push(p.top());
                        p.pop();
                    }
                    p.push(expressao);//quando prioridade do operador ser maior que o topo, empilha o operador
                }     
            }
        }
        else if (expressao=='('){
            p.push(expressao); //sempre que encontrar um '(' ele é empilhado
      
        }
        else if (expressao==')'){//ao encontrar ')':
            while (p.top() != '('){//enfileira todos os operadores e desempilha até encontrar um '(' no topo da pilha
                f.push(p.top());
                p.pop();
            }
            p.pop(); //desempilha o '('
        }

    }while (expressao != '\n'); //...enquanto a expressão não finalizar
    
    while(!p.empty()){ //enfileira o que sobrou na pilha e desempilha até esvaziá-la
        f.push(p.top());
        p.pop();
    }
    printf("NPR: ");
    while (!f.empty()){ //imprime a fila F (NPR)
        printf("%c", f.front());
        f.pop();
    }
    return 0;
}