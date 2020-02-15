#include<iostream>
using namespace std;
string caesar(int s,string text){
    string result="";
    for(int i=0;i<text.length();i++){
        if(isupper(text[i])){
            result += char(int(text[i]+s-65)%26+65);
        }
        else 
            result += char(int(text[i]+s-97)%26+97);
    }
    return result;
}
int main(){
    string x="BABIKAUYA";
    int y=4;
    cout<<caesar(y,x);
}