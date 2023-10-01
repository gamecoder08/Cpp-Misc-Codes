#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() {
    string str;
    int digitCounter=0,characterCounter=0;
    cout<<"Enter any string:";
    getline(cin,str);
    for (int i = 0;str[i]!='\0'; i++){
        if(str[i]>='0' && str[i]<='9'){
            digitCounter++;
        }
        
        else if(str[i]!=' '){
            characterCounter++;
        }
    }
    
    cout<<"Digits in string: "<< digitCounter;
    cout<<"\n";
    cout<<"Letters in string: "<< characterCounter;

    return 0;
}