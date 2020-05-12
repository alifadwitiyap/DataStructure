
#include "header.h"

void enqueue(string data){
    address temp= new node;
    temp->data=data;
    temp->next=NULL;
    if(first==NULL){
        first=temp;
    }
    if(last !=NULL){
        last->next=temp;
    }
    last=temp;
}

void dequeque(){
    if (first==NULL){
        cout<<"data sudah kosong";
    }else{
        if(first != last){
        address temp=first;
        first=first->next;
        temp->next=NULL;
        delete temp;
        }else{
            address temp=first;
            first=NULL;last=NULL;
            delete temp;
        }
        
    }
}

void view(){
    address i=first;
    int j=0;
    cout<<endl<<"data didalam antrian : ";
    while(i != NULL){
        cout<<endl<<j<<". "<<i->data;
        j++;
        i=i->next;
    }
}