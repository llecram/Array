#include<iostream>
using namespace std;
int main(){
  string a;
  cout<<"ingrese su expresion";
  cin>>a;
  for (int i=0;i<a.size();i++){
    if (isalpha(a[i])){
      cout<<a[i];
    }
  }
}
