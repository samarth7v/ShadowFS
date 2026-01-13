#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        string str;
        getline(cin, str);
        int n = str.size();
        string str2;
        for(int i=n-1;i>=0;i--){
            char ch = str[i];
            switch(ch){
                case '\\':str2 += '/'; break;
                case '/':str2 += '\\'; break;
                case '<':str2 += '>'; break;
                case '{':str2 += '}'; break;
                case '>':str2 += '<'; break;
                case '}':str2 += '{'; break;
                case ')':str2 += '('; break;
                case '(':str2 += ')'; break;
                default: str2+=ch; break;
            }
        }
        cout << str2 <<"\n";
    }
}