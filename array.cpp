#include<iostream>
using namespace std;
int promedio(int y[][3],int len){
  int promedio,datos;
  datos=9
  for (int i=0;i<len;i++){
    
  }
}
int maximo(int z[][3],int len){
  int max;
  max=z[0][0];
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){
      if (z[i][j]>z[0][0]){
        max=z[i][j];
      }
    }
  }
  return max;
}
int minimo(int z[][3],int len){
  int min;
  min=z[0][0];
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){
      if (z[i][j]<z[0][0]){
        min=z[i][j];
      }
    }
  }
  return min;
}
int main(){
  int as[3][3];
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cin>>as[i][j];
    }
  }
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<as[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"el valor maximo es:"<<maximo(as,3)<<"\n";
  cout<<"el valor minimo es:"<<minimo(as,3)<<"\n";
