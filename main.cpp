#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include<iomanip>
#include<vector>
using namespace std;


int main()
{
   char arr1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   char arr2[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

   cout<<"Enter Decrypted Plain Text :";
   string plain;
   cin>>plain;

   cout<<"Encrypted Cipher Text : ";
   for(int i=0;i<plain.length();i++)
   {
       for(int k=0;k<26;k++)
       {
           if(plain[i]==arr1[k])
           {
               cout<<arr2[k];
           }
       }
   }

   cout<<"\n";

   cout<<"Enter Encrypted Cipher Text :";
   string cipher;
   cin>>cipher;

   cout<<"Decrypted Plain Text : ";

   for(int i=0;i<cipher.length();i++)
   {
       for(int k=0;k<26;k++)
       {
           if(cipher[i]==arr2[k])
           {
               cout<<arr1[k];
           }
       }
   }
return 0;
}
