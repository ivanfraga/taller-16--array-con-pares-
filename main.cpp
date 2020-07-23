
#include <iostream>
using namespace std;
void ingresar(int a[],int t);
void cambiar(int a[], int t);
void imprimir(int b[], int t);
int main()
{
 
int a[100], b[100], i, k=0, t;

cout<<"Ingrese el tamaño del arreglo: ";
cin>>t;
ingresar(a, t);
cambiar(a, t);
imprimir(b, t);


return 0;
}
void ingresar(int a[],int t){
  int i;
  for(i=0;i<t;i++)
   {
    cout<<"\nIngrese a["<<i<<"]=";
    cin>>a[i];
  }
}
void cambiar(int a[], int t){
  int b[100];
  int i, k =0;
  for(i=0;i<t;i++)
{
if(a[i]%2==0)
{
  b[k]=a[i];
  k++;

}

}
}
void imprimir(int b[], int t){
  int i, k ;
  cout<<"Los pares son:"<<endl;
  for(i=0;i<k;i++)
   {
   cout<<endl<<"b["<<i<<"]="<<b[i];
  }
}

