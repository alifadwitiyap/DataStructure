#include "bodyStack.cpp"


int main(){
  
    bool loop=true;
    createStack();
    cout << "\033[2J\033[1;1H";
    while(loop){
        cout<<endl;
         int pilihan;
    cout<<"1. masukan data"<<endl;
    cout<<"2. Keluarkan data paling atas"<<endl;
    cout<<"3. lihat data"<<endl;
    cout<<"4. hapus seluruh data"<<endl;
    cout<<"Pilihan : "<<endl;
    cin>>pilihan;

    switch (pilihan)
    {
    case 1:
        int input;
        cout<<endl<<"Data yang ingin dimasukan =";
        cin>>input;
        cout<<endl;
        if(isFull()){
         cout<<endl<<"                 -List Telah Penuh-"<<endl;   
        }else{
        push(input);
        }
        break;

    case 2:
        if(isEmpty()){
             cout<<endl<<"                  -List Telah Kosong-"<<endl; 
        }else{
        cout<<endl<<"keluaran = "<<pop();  
        cout<<endl;    
        }
        break;

    case 3:
        print();
        break;

    case 4:
        S.top=-1;
        break;

    default:
        loop=false;
    }
    }
}