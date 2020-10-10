/*6. Criar uma variação de pilha, chamada de PilhaMin, que, além de fornecer
as operações de pilha em tempo constante, define a operação função obterMinimo(ref P: PilhaMin): <TElem>
que retorna o elemento de P com a menor chave em tempo constante.*/

#include <iostream>

using namespace std;

constexpr int MAXN = 10;
class Pilha{
    public:
    int elementos[MAXN];
    int N;
    int aux[MAXN], i=0; //auxiliares para obter o menor valor da pilha

    void cria(){
        this->N=0;
    }
    int topo(){
        if (N>0){
            return this->elementos[N-1];
        }
        else{
            return 0;
        }
    }
    void empilha(int dado){
        if (N<MAXN){
            this->elementos[N]=dado;
            this->N++;
            if (i==0){ //primeiro elemento empilhado armazenado no primeiro elemento do vetor 
                aux[i]=dado;
            }
            else if (i>0 && dado<aux[i-1]){ //novo menor é armazenado no fim do vetor
                aux[i]=dado;
            }
            else{
                aux[i]=aux[i-1]; //menor continua o mesmo e é armazenado novamente no fim do vetor
            }                   
            i++;
        }
        else{
            printf("Pilha cheia.\n");
        }
    }
    int desempilha(){
        i--; //último do vetor é descartado junto com o desempilhado
        if (N>0){
            this->N--;
            return elementos[N];
        }
        else{
            return 0;
        }
    }
    int obterMinimo(){ //retorna em tempo constante o menor elemento de da pilha P
        return aux[i-1]; 
    }
};

int main(void){
    Pilha p;
    p.cria();
    p.empilha(10);
    p.empilha(12);
    p.empilha(7);
    p.empilha(4);
    p.empilha(2);
    p.empilha(2);
    p.empilha(1);
    p.desempilha();
    p.desempilha();

    printf("O menor valor da pilha P é: %d\n", p.obterMinimo());
    return 0;
}
