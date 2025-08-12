#include <bits/stdc++.h>
using namespace std;
int cnt=0;
string s[3]={"Swimming","Running","Football"};
void ans(vector<string>&v,int d,int n,string ss){
   if(n==d){
      for(string c:v)cout<<c<<" ";
      cout<<endl;
      cnt++;
      return;
   }
   for(string c:s){
      if(ss!=c){
         v[d]=c;
         ans(v,d+1,n,c);
      }
   }
}
int main(){
   int n;
   cin>>n;
   vector<string>v(n);
   ans(v,0,n,"");
   cout<<cnt<<endl;
}
