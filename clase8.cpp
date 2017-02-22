#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <cmath>
const double N=1000;
double  expansion(double n, int m){
  int i=1;
  double t=1;
  while(i<=m){
  t=t*n;
  i++;
  }
  return t;
}
double  suma1(double n){
  double i=1;
  double suma=0;
  double f=0;
  while(i<n){
  suma=suma + pow(-1,i)*(i/(i+1));
  i++;
  }
  return suma; 
}
double  suma2(double n)
{
  double i=1;
  double j=1;
  double t=0;
  double f=0;
  double c=0;
  while(i<n){
    t=t+((2*i-1)/(2*i));
    i++;
  }
  while(j<n){
    f=f+(2*i/(2*i+1));
    j++;
  }
  c=-t+f;
  return c;
}
double suma3( double n)
{
  double sum=0;
  double i=1;
  while(i<n){
    sum = sum +1/(2*i*(2*i+1));
    i++;
  }
  return sum;
}
int main(){
  std::ofstream myfile;
  myfile.open ("datos1.txt");
  std::cout.precision(26);
  std::cout.setf(std::ios::scientific);
  int n=1;
  double f=0,r=0,h=0,k=0,i=1,j=N;
  while(i<N){
  k=suma3(i);
  std::cout<<i<<"  ";
  myfile<<i<<"   ";
  f=suma1(2*i);
  std::cout<<(k-f)/k<<"  ";
  myfile <<(k-f)/k<<"  ";
  r=suma2(i);
  std::cout<<(k-r)/k<<"  "<<std::endl;
  myfile<<(k-r)/k<<std::endl;
  i++;
  }
 
    return 0;
}

//export https_proxy="https://mdgordillob:exq7MmTKsv@proxyapp.unal.edu.co:8080/"
