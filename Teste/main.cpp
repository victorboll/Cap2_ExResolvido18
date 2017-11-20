#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 

{
	
	double dias, comePorDia, sacoDeRacao, quantidadeDeGatos, quantoRestaDeRacao, quantoJaFoiConsumido;
	int quantosDiasSuficiente;
	
	cout << "Bem Vindo" << endl;
	cout << "Digite abaixo o peso em kilos do saco de racao adquirido\n";
	
    cin >> sacoDeRacao; 
	
	cout << "\n";
	cout << "Digite abaixo a quantidade de racao em gramas consumida por gato\n";
	
    cin >> comePorDia;
		
	cout << "\n";
	cout << "Digite abaixo quantos gatos voce possui\n";
	
    cin >> quantidadeDeGatos;
	
	cout << "\n";
	cout << "Digite abaixo por quantos dias a raçao ja foi consumida\n";
	
    cin >> dias;
	
	quantoRestaDeRacao = ( sacoDeRacao * 1000 - (dias * comePorDia * quantidadeDeGatos ) ) / 1000;
	
	quantoJaFoiConsumido = ( dias * comePorDia  *quantidadeDeGatos ) / 1000;
	
    quantosDiasSuficiente = quantoRestaDeRacao / ((comePorDia * quantidadeDeGatos )/1000);
    
    cout << "\nJa foram consumidos " << quantoJaFoiConsumido << " kilos de Racao";
    cout << "\n";
	
	cout << "\nRestam " << quantoRestaDeRacao << " kilos de Racao";
    cout << "\n ";
    
    cout << "\nA racao ainda vai durar por " << quantosDiasSuficiente << " dias" << endl;
    
	system("pause");
	
	return 0;
}
