#include<iostream>
#include<string.h>
using namespace std;
int main() {
   char txt[100];
   cout<<"Enter the text:";
   cin>>txt;
   int i, j, length,choice,key;
   cout << "Enter key:";
   cin >> key;
   length = strlen(txt);
   cout<<"Enter 1 for Encryption and 2 for Decryption:";
   cin>>choice;
   if (choice==1) 							//for encryption
    {
		char ch; 
      for(int i = 0; txt[i] != '\0'; ++i) 
	  {
         ch = txt[i];
		    if(ch >= 'a' && ch <= 'z')
			{
            	ch = ch + key;
            	if (ch > 'z') 
				{
            	   ch = ch - 'z' + 'a' - 1;
            	}  
            	txt[i] = ch;
         	}
            else if (ch >= 'A' && ch <= 'Z')
			{
            	ch = ch + key;
            	if (ch > 'Z')
				{
               		ch = ch - 'Z' + 'A' - 1;
            	}
            	txt[i] = ch;
         	}
      	}
      cout<<"Encrypted text:" << txt;
   }
   if(choice == 2) { 								//for decryption
      char ch;
      for(int i = 0; txt[i] != '\0'; ++i) 
	  {
         ch = txt[i];
         if(ch >= 'a' && ch <= 'z') 
		 {
            ch = ch - key;
            if(ch < 'a')
			{
               ch = ch + 'z' - 'a' + 1;
            }
            txt[i] = ch;
         }
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') 
			{
               ch = ch + 'Z' - 'A' + 1;
            }
            txt[i] = ch;
         }
      }
      cout << "Decrypted text: " << txt;
   }
}
