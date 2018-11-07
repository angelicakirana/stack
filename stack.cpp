
#include <iostream>
using namespace std;

#define nil 0
#define MaxEl 10

typedef int infotype;
typedef int address;
typedef struct {
infotype Data[MaxEl+1];
address TOP;
} Stack;

#define TOP(S) (S).TOP
#define InfoTop(S) (S).Data[(S).TOP]

void CreateEmpty(Stack *S){
    TOP(*S)=nil;
    
}

bool IsEmpty(Stack *S){
    return TOP(*S)==nil;
}

bool IsFull(Stack *S){
    return TOP(*S)==MaxEl;
}

void Push (Stack *S, infotype X){
    if (!(IsFull(S))){
        TOP(*S)++;
        InfoTop(*S)=X;
        
    }
}

void Pop (Stack *S, infotype *X){
    if(!(IsEmpty(S))){
        *X=InfoTop(*S);
        TOP(*S)--;
    }
}

int main() {
    Stack id;
    
    CreateEmpty(&id);
    int hapus;
    int datamasukan;
    
    for (int i=1; i<MaxEl+1; i++){
      cin >> datamasukan;
        Push(&id, datamasukan);
    }
    
    Pop(&id, &hapus);
    cout << hapus;
    
    
}
