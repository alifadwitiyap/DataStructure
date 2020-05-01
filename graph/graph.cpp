#include "graph.h"

void insertParent(int info){
    Padr temp= new Pelm;
    temp->info=info;
    temp->firstChild=NULL;
    temp->next=NULL;
    if(G==NULL){
        G=temp;
    }else{
        Padr i=G;
        while(i->next!=NULL){
            i=i->next;
        }  
        i->next=temp;
    }
}

void insertChild(Padr P,Padr info){

    Cadr temp=new Celm;
    temp->tetangga=info;
    temp->next=NULL;
    if(P->firstChild==NULL){
        P->firstChild=temp;
    }else{
        Cadr i=P->firstChild;
        while(i->next!=NULL){
            i=i->next;
        }
        i->next=temp;
    }
}

void Connect(int info, int info2){
    Padr P1= Search(info);
    Padr P2= Search(info2);
    insertChild(P1,P2);
    insertChild(P2,P1);
}

Padr Search(int info){
    Padr temp=G;
    while(temp != NULL){
        if(temp->info==info){
            return temp;
        }else{
            temp=temp->next;
        }
    }
    return NULL;
}

void view(){
    Padr Ptemp=G;
    Cadr Ctemp=NULL;
    cout<<"keterhubungan :"<<endl;
    while(Ptemp!=NULL){
        cout<<Ptemp->info<<"= {";
        Ctemp=Ptemp->firstChild;
        while(Ctemp != NULL){
            cout<<Ctemp->tetangga->info<<", ";
            Ctemp=Ctemp->next;
        }
        cout<<"}"<<endl;
        Ptemp=Ptemp->next;
    }
    cout<<endl<<endl;
}

void BreadhFirstSearch(){
    Padr B1;
    Cadr B2;
    vector<Padr> head;

    B1=G;
    head.push_back(B1);
    while(int(head.size()) != 0){
        cout<<head.front()->info<<",";
        head.front()->status=true;
        B2=head.front()->firstChild;
        while(B2!=NULL){
            if(B2->tetangga->status!=true){
                head.push_back(B2->tetangga);
            }
            B2=B2->next;
        }
        head.erase(head.begin());
    }

    //reset status
    B1=G;
    while(B1 != NULL){
        B1->status=false;
        B1=B1->next;
    }
}

void DeepFirstSearch(){
    Padr B1;
    Cadr B2;
    vector<Padr> head;
    int count;
    B1=G;
    head.push_back(B1);
    while(int(head.size())!=0){
        if(head.back()->output==false){
        cout<<head.back()->info<<",";
        }
        head.back()->output=true;
        head.back()->status=true;
        B2=head.back()->firstChild;
        count=0;
        while(B2 != NULL){
            if(B2->tetangga->status == false){
                count++;
                head.push_back(B2->tetangga);
                B2->tetangga->status=true;
                
            }
            B2=B2->next;
        }
        if(count == 0){
        head.pop_back();
        }        
    }

    //reset status
    Padr temp=G;
    while(temp !=NULL){
        temp->status=false;
        temp=temp->next;
    }
}