#include <iostream>
using namespace std;

int main() {
    int tam=0,suma=0,promedio=0;
     int notas[tam];
     char res;
     do{
     	tam++;
     	cout<<"ingrese nota"<<tam;
     	cin>>notas[tam-1];
     	cout<<"desea ingresar otra nora (s/n)";
	 }while(res=='s'||res=='s');
	 for(int i=0;i<tam;i++){
	 	
	 	cout<<notas[i]<<endl;
	 }
   
   
   
    return 0;
}
