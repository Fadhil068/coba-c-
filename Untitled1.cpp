#include <iostream> 
#include <conio.h>
using namespace 
std; int main(){
//array a dan b masing-masing memesan memori sebanyak 20 
alamat int i, j, a[20], b[20], banyakA, banyakB [1];
cout<<"IRISAN & GABUNGAN 2 HIMPUNAN\n"; 
cout<<"============================\n\n";
cout<<"Masukkan banyaknya anggota himpunan A : "; cin>>banyakA;
//isi anggota A ditampung dalam array a
for(i=0;i<banyakA;i++){ [2]; cin>>a[i];
}
cout<<"\nMasukkan banyaknya anggota himpunan B : "; cin>>banyakB;
//isi anggota B ditampung dalam 
array b for(i=0;i<banyakB;i++){
cout<<"Masukkan anggota " << i+1 << " : "; cin>>b[i];
}
//menamoilkan isi dari arrai a cout<<"\nHimpunan A={ "; 
for(i=0;i<banyakA;i++){ cout<<a[i]<<" ";
}
cout<<"}";
//menampilkan isi dari 
array b cout<<"\nHimpunan" B={ for(i=0;i<banyakB;i++){ 
cout<<b[i]<<" ";
}
cout<<"}";cout<<"\n\n \n"; cout<<"A irisan B = {";
for(i=0;i<banyakA;i++){ [3]
for(j=0;j<banyakB;j++){
//a irisan b berisi anggota dari himpunan a dan b yang sama
//jika isi dari array a = isi array b, maka tampilkan isi 
array a if(a[i]==b[j]) cout<<a[i]<<" ";
}
}
cout<<"}";
//menampilkan gabungan isi dari array a dan 
array b cout<<"\n\nA gabungan B = { "; 
for(i=0;i<banyakA;i++){
cout<<a[i]<<" ";
}
for(i=0;i<banyakB;i++){ [4]
cout<<b[i]<<" ";
}
cout<<"}";
cout<<"\n\nTekan sembarang untuk keluar ..."; getch();
return 0;
}
