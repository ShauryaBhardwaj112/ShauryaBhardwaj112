#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"enter the amount"<<endl;
    cin>>amt;
    int n100=0,n50=0,n1=0,n20=0;
    switch(1){
        case 1: n100=amt/100;
        
        
            amt=amt%100;
        
        cout<<"notes of 100 rupees required : "<<n100<<endl;
        case 2: n50=amt/50;
        
            amt=amt%50;

        
        cout<<"Notes of 50 Rupees required : "<<n50<<endl;
        
        case 3: n20 = amt/20;
    
            amt=amt%20;
        
        cout<<"Notes of 20 Rupees required : "<<n20<<endl;
        
        case 4: n1=amt/1;
        amt=amt%1;
        
        cout<<"1 rupees notes reuired : "<<n1<<endl;
        break;

        default: cout<<"Invalid input"<<endl;
             break;
        }

        return 0;


}
