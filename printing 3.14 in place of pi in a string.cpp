#include<iostream>
using namespace std;
void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        string ros=s.substr(1);
        replacePi(ros);
    }
}
int main(){
    replacePi("pippppiiiipi");
    return 0;
}