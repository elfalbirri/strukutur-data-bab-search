#include <iostream>
using namespace std;


char cariin,temp,data[100];
int i,j,low,higt,mid,jum,get;
bool got = false;
void cari_binari(){
    for(i=0;i<jum;i++){
        for(j=0;j<jum-i-1;j++){
            if(data[j] > data [j+1]){
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl;
    cout<<"Data Di Sorting : ";
    for(i=0;i<jum;i++){
        cout<<"'"<<data[i]<<"' ";
    }
    cout<<endl;
    low = 0;
    higt = (jum - 1);
    while(low<=higt){
        mid = (low + higt)/2;
        if(cariin == data[mid]){
            got = true;
            break;
        }else if(cariin < data[mid]){
            higt = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout<<endl;
    if(!got){
        cout<<"Pencarian     : Data tidak ditemukan";
    }else{
        cout<<"Pencarian     : Data '"<< cariin <<"' ditemukan index ke : "<<mid ;
    }
}

int main(void){
    cout<<"PENCARIAN BINARI\n";

    cout<<"====================\n\n";
    cout<<"Masukan Jumlah Data :";
    cin>>jum;
    for(i=0;i<jum;i++){
        cout<<"Data huruf ke - "<<(i+1)<<" = ";
        cin>>data[i];
    }
    cout<<"\nData huruf: \t";
    for(i=0;i<jum;i++){
        cout<<"'"<<data[i]<<"' ";
    }
    cout<<endl;

    cout<<"\nMasukan Data yang dicari : ";
    cin>>cariin;


    cari_binari();
    cout<<endl;
    return 0;
}
