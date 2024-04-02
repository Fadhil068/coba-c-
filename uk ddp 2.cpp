#include <iostream>
using namespace std;
int main()
{
    int data[10][10];
    int baris,kolom,i,j;
    cout<< " Jumlah Baris = ";
    cin>>baris;
    cout<< " Jumlah Kolom = ";
    cin>>kolom;

    cout<<endl;

    for (i=0;i<baris;i++)
    {
        for(j=0;j<kolom;j++)
        {
            cout<<"Nilai matriks ke["<<i+1<<","<<j+1<<"] : ";
            cin>>data[i][j];
        }
    }

    cout<<endl;

    for (int i=0;i<=baris;i++)
    {
        for(int j=0;j<kolom;j++)
        cout<<data [i][j]<<" " ;
        cout<<endl;   
}
}
