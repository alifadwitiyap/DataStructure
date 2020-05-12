#include "bodyQueue.cpp"
int main(){
    cout << "\033[2J\033[1;1H";
    while(true){
    
    cout<<endl<<"<program antrian> ";
    cout<<endl<<"1. masukan antrian";
    cout<<endl<<"2. antrian pertama";
    cout<<endl<<"3. orang selanjutnya";
    cout<<endl<<"4. tampilkan semua antrian";
    cout<<endl<<"masukkan : ";
    int pilihan;cin>>pilihan;

    switch(pilihan){
        case 1:
        {
            cout << "\033[2J\033[1;1H";
            string namaPelanggan;
            cout<<endl<<"Masukan nama pelanggan : ";
            cin>>namaPelanggan;
            enqueue(namaPelanggan);
            break;
        }
        case 2:
        {
            cout << "\033[2J\033[1;1H";
            if (first!=NULL){
            cout<<endl<<"data pertama : "<<first->data;
            }else{
            cout<<endl<<"data kosong";
            }
            break;
        }
        case 3:
        {
            cout << "\033[2J\033[1;1H";
            if (first != NULL){
            dequeque();
            if(first != NULL){
            cout<<endl<<"orang selanjutnya : "<<first->data;
            }
            }else{
                cout<<"data telah kosong";
            }
            break;
        }
        case 4:
        {
            cout << "\033[2J\033[1;1H";
            view();
            break;
        }

    }
    }
}