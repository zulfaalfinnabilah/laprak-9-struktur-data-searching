/* 
Nama	: Zulfa Alfin Nabilah
NIM		: 19051397024
Prodi	: D4 Manajemen Informatika 2019A
Matkul	: Struktur Data - Searching
*/

#include <iostream> 

using namespace std; 

int main(void)
{ 
    int cari,temp,data[11] = {77, 23, 69, 12, 79, 82, 6, 301, 46, 92, 7}; 
    int i,j,low,higt,mid,jum = 11; 
    bool got = false; 
    cout<<"BINARY SEARCH\n"; 
    cout<<"====================\n"; 
    cout<<"\nData : \t"; 
    for(i=0;i<jum;i++)
	{ 
        cout<<" "<<data[i]<<" ";
    }
    cout<<endl;
    for(i=0;i < jum;i++)
	{ 
        for(j=0;j < jum-i-1;j++)
		{ 
            if(data[j] > data [j+1])
			{
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    
    cout<<endl;
    for(i=0;i < jum;i++)
	{ 
        for(j=0;j < jum-i-1;j++)
		{ 
            if(data[j] > data [j+1])
			{ //untuk ascending ubah tanda > menjadi <
              //untuk descending ubah tanda < menjadi >
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    
    cout<<endl;
    cout<<"Data Di Urutkan berdasarkan ASC : "; 
    for(i=0;i<jum;i++)
	{
        cout<<" "<<data[i]<<" ";
    }
    
    cout<<endl;
    cout<<"\nMasukan Data yang dicari : "; 
    cin>>cari; 
    
    cout<<endl;
    low = 0;
    higt = (jum - 1); 
    while(low<=higt)
	{
        mid = (low + higt)/2;
        if(cari == data[mid])
		{
            got = true;
            break;
        }else if(cari < data[mid])
		{
            higt = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout<<endl;

    if(!got)
	{ 
        cout<<"Data tidak ditemukan";
    }
	else
	{
        cout<<"Data '"<< cari <<"' ditemukan index ke : "<<mid ;
    }
    return 0;
}
