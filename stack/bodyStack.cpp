#include "stack.h"

void createStack(){
    S.top=-1;
}


void push(int input){
    S.top++;
    S.data[S.top]=input;
}

int pop(void){
        S.top--;
       return S.data[S.top+1];
}

bool isEmpty(void){
    if(S.top==-1){
        return true;
    }else{
        return false;
    }

}

bool isFull(void){
    if(S.top==9){
        return true;
    }else{
        return false;
    }
}


void print(void){
    int i = S.top;
    cout<<endl<<"data { ";
    while (i>=0){
        if(i != 0){
        cout<<S.data[i]<<", ";
        }else{
        cout<<S.data[i];
        }
    i--;

    }
    cout<<"}"<<endl;
    }