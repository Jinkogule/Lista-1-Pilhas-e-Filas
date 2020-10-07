//Deque estático
#include <iostream>
using namespace std;

constexpr int MAXN = 100; //tamanho máximo do deque
class Deque{ 
    int elementos[MAXN]; 
    int frente; 
    int fim; 
    int N; 
    public : 
    Deque(int N){ 
        frente=-1; 
        fim=0; 
        this->N=N; 
    } 
    void insereInicio(int dado){ //insereInicio
        if (verif_cheio()){ 
            return; 
        } 
        if (frente == -1){ 
            frente = 0; 
            fim = 0; 
        } 
        else if (frente == 0){ 		    
            frente = N-1; 
        }
        else{
            frente = frente-1; 
        }
        elementos[frente] = dado; 			
    }
    void insereFim(int dado){ //insereFim
        if (verif_cheio()){ 
            return; 
        }
        if (frente == -1){ 
            frente = 0; 
            fim = 0; 
        } 
        else if (fim == N-1){
            fim = 0;
        }			   
        else{
            fim = fim+1;
        }
        elementos[fim] = dado; 		
    } 
    void removeInicio(){ //removeInicio
        if (verif_vazio()){ 
            return ; 
        } 
        if (frente == fim){  
            frente = -1; 
            fim = -1; 
        } 
        else{
            if (frente == N -1){
                frente = 0; 
            }
            else{
                frente = frente+1;
            }
        }
    } 
    void removeFim(){ //removeFim
        if (verif_vazio()){ 
            return; 
        } 
        if (frente == fim){ 
            frente = -1; 
            fim = -1; 
        } 
        else if (fim == 0){
            fim = N-1;
        } 
        else{
            fim = fim-1;
        }
    }
    int buscaInicio(){ //buscaInicio
        if (verif_vazio()){
            printf("Deque Vazio\n"); 
            return -1; 
        } 
        return elementos[frente]; 
    }
    int buscaFim(){ //buscaFim
        if (verif_vazio() || fim < 0){ 
            printf("Deque Vazio\n");
            return -1 ; 
        } 
        return elementos[fim]; 
    } 
    bool verif_cheio(){
        return ((frente == 0 && fim == N-1)||frente == fim+1);    
    }
    bool verif_vazio(){
        return (frente == -1);  
    }
};

int main(void){

    Deque dq(10); //deque de tamanho 10
    dq.insereInicio(1); //deque: 1
    dq.insereInicio(5); //deque: 5 1
    dq.insereInicio(7); //deque: 7 5 1
    dq.insereFim(3); //deque: 7 5 1 3
    dq.insereFim(2); //deque: 7 5 1 3 2
    dq.removeInicio(); //deque: 5 1 3 2
    dq.removeInicio(); //deque: 1 3 2
    dq.removeFim(); //deque: 1 3
    printf("%d\n", dq.buscaInicio()); //resultado: 1
    printf("%d\n", dq.buscaFim()); //resultado: 3
  
    return 0; 
}
