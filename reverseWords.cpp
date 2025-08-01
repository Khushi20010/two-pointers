#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseWords(string s){
    int n=s.length();
    int i=0 , j=0;
    while(j<n){
        while(j<n &&s[j] ==' ') j++;
         while(j<n &&s[j] !=' ') s[i++] = s[j++];
          while(j<n &&s[j] ==' ') j++;
          if(j<n) s[i++]   = ' ';
    }
    s.resize(i);
    reverse(s.begin() , s.end());
    int st=0;
    for(int e=0;e<=s.length(); e++){
if(e == s.length() || s[e] == ' '){
    reverse(s.begin() + st , s.begin() +e);
    st = e+1;
}
    }
    return s;
}
int main(){
    string str=  "                 jeojfe              ejfjf";
    string result = reverseWords(str);
    cout<<result<<endl;
    return 0;
}