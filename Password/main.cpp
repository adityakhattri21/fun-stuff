//Right now the program is in char type . Try to convert it into string . 


#include <iostream>
#include <vector>
#include <conio.h>


using namespace std;
int main(){
    vector <char> vec {};
    char h {};
    int i {};
    cout<<"Welcome to Password Check "<<endl;
    cout<<"\n%%%%% Rules %%%%%"<<endl;
    cout<<"\nYour password must be atleast 5 characters long. "<<endl;
    cout<<"\nYour password must have atleast one digit and one special characters."<<endl;
    cout<<"\nEnter any key to begin."<<endl;
    getch();
    system("cls");
    START:
       cout<<"Enter any key to start entering password."<<endl;
       getch();
       system("cls");
       vec.clear();
       for( i=0;;i++){
            h = getch();
           if (h=='\r')
               break;
           vec.push_back(h);
           cout<<"* ";
           
       }
       if(i<5){
           cout<<"\nYour password is less than 5 character . Try again . Press any key to continue. "<<endl;
           getch();
           goto START;
       }
       else{
           int d=0 , sp=0;
           for (auto i : vec){
               if ('1'<= i && i<= '9')
                   d++;
                else if (!('1'<= i && i<= '9') && !( ('a'<= i && i<='z') || ('A' <=i && i<='Z')))
                    sp++;
           }
           if(d==0 || sp==0){
               cout<<"\nYour password voilates Rule 2 . Try again. Press any key to continue. "<<endl;
               getch();
               goto START;
           }
           else
           {
               cout<<"\nYour Password meets the parameters. Press any key to see it."<<endl;
               getch();
               system("cls");
               for(auto i : vec)
                   cout<<i;
           }
       }   
    cout<<endl;
    return 0;
}