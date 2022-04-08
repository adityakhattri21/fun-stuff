#include <iostream>
#include <string>
//#include <stdlib.h>

using namespace std;

int main(){
    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message ;
    int ch;
    char ch2;
    cout<<"Welcome To Indian Enigma "<<endl;
    
    cout<<"---------------------------------"<<endl;
    cout<<"\nEnter the message: ";
    getline(cin,message);
    
    system("cls");
     string copy=message; 
    cout<<"1. Encryption"<<endl;;
    cout<<"2. Decryption"<<endl;;
    cout<<"Enter your choice: ";
    cin>>ch;
   
    switch (ch){
        case 1:{
            for(size_t i=0;i<message.length();i++){
                int p = alphabet.find(message[i]);
                if(p!=string::npos){
                    copy[i]=key.at(p);
                }
            }
            cout<<"Encryption Done ! Ready for transfer"<<endl;
            cout<<"Encrypted Message: "<<copy<<endl;
            break;
            }
            case 2:{
                for(size_t i=0;i<message.length();i++){
                         int p = key.find(message[i]);
                          if(p>=0){
                                copy[i]=alphabet.at(p);
                }
            }
            cout<<"Decryption Done ! Ready for transfer"<<endl;
            cout<<"Decrypted Message: "<<copy<<endl;
            break;
            }
            default:
                cout<<"Wrong input ."<<endl;
    }
    
    cout<<endl;
    return 0;
}