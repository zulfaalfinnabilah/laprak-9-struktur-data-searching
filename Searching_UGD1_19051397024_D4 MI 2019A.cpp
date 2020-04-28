#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int i;
  int n;
  int cari,ketemu=0;
  int A[100];
  
  cout<<"PENCARIAN ANGKA\n";
  cout<<"--------------------------"<<endl;
  cout<<"Masukan Banyak Angka : ";
  cin>>n;
  cout<<endl;

  for (i=1;i<=n;i++)
  {
	cout<<"Masukan Data Ke-"<<i<<" : ";
	cin>>A[i];
  }
  cout<<endl;
  cout<<"Data yang ingin dicari : ";
  cin>>cari;
  cout<<"--------------------------"<<endl;
  cout<<endl;
  
  for(i=0;i<=n;i++)
  {
	  if (A[i]==cari)
	  {
		  ketemu=1;
		  cout<<"Angka Ditemukan Pada Posisi Ke-"<<i;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"Maaf data yang dicari tidak ada";
  }
  getch();
  }
