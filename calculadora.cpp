#include<iostream>
#include<cmath>
using namespace std;
  
int main(){
		while (true){
	char operacao;
	float numero1, numero2, aah;
	
	cout << "Digite aqui qual o sinal da operacao desejada: ";
	cin >> operacao;
	
	cout << "Digite aqui os numeros a serem operados: ";
	cin >> numero1 >> numero2;
		
	switch(operacao){
		case '+':
			cout << "Aqui esta seu resultado:" << numero1 + numero2 << endl;
		break;
		
		case '-':
			cout << "Aqui esta seu resultado:" << numero1 - numero2 << endl;
		break;
		
		case '*':
			cout << "Aqui esta seu resultado:" << numero1 * numero2 << endl;
		break;
		
		case'/':
			cout << "Aqui esta seu resultado:" << numero1 / numero2 << endl;
		break;
		
		case '^':
			cout << "Aqui esta seu resultado: " << pow(numero1, numero2) << endl;
		break;
		
		default:
			cout << "dai vc me complica patrao kkkk" << endl;
		break;
	}

}

}
