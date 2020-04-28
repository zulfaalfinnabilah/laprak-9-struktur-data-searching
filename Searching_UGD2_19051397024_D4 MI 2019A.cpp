#include<iostream>

using namespace std;

int main()
{
        int i,len;
        string str;
        char s_char, r_char;
 
        cout<<"Masukkan sebuah kalimat : ";
        getline(cin,str);
 
        cout<<"\n> Masukkan karakter yang dicari : ";
        cin>>s_char;
 
        cout<<"\n> Karakter pengganti : ";
        cin>>r_char;
 
        len=str.length();
 
        for(i=0 ; i<len ; i++)
        {
                if(str[i]==s_char)
                {
                         str[i]=r_char;
                }
        }
 
        cout<<"\nMODIFIED STRING: "<<str;
 
        return 0;
}
