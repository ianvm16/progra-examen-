#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char enfer[10][20]= {"gripe", "indigestion", "catarro", "bronquitis", "alergia", "migraña", "gastritis", "amigdalitis", "sinusitis", "covid"};
	string sintomas[10] = {"fiebre", "tos", "dolor de cabeza", "nausea", "dolor de garganta", "congestion", "dificultad para respirar", "fatiga", "dolor muscular", "perdida de apetito"};
	bool sintomatologias[10][10]={
	{1, 1, 1, 0, 1, 0, 0, 1, 0, 0},
	{0, 0, 1, 1, 0, 0, 0, 1, 1, 0},
	{0, 1, 1, 0, 1, 1, 0, 1, 0, 0},
	{1, 1, 0, 0, 1, 1, 1, 1, 0, 0},
	{0, 1, 1, 0, 1, 1, 0, 1, 0, 1},
	{0, 0, 1, 1, 0, 1, 0, 1, 0, 0},
	{1, 0, 1, 1, 0, 1, 0, 1, 1, 0},
	{0, 1, 1, 0, 1, 1, 0, 1, 0, 1},
	{0, 1, 1, 0, 1, 1, 0, 1, 0, 0},
	{1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
	};
	bool sintomasp[10];
	cout<<"presione 1 si tiene alguno de estos sintomas y 0 si no los presenta "<<endl;
	for(int i=0; i<10;i++){
		cout<<sintomas[i]<<": "<<endl;
		cin>>sintomasp[i];
	}
	bool enc;
    for(int i = 0; i < 10;i++){
        enc=true;
        for(int j = 0; j < 10;j++){
            if(sintomasp[j]!=sintomatologias[i][j]){
                enc=false;
                break;
            }
        }
        if(enc){
 cout<<"lo que podria tener es : "<<enfer[i]<<endl;
            return 0;
        }
    }
    cout<<"no se tiene un correcto diagnostico"<<endl;
	return 0;
}
