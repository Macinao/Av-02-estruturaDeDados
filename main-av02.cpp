#include <iostream>

using namespace std;

int main() {
	

	
	int numPositivoNegativo;
	
	cout << "Digite um numero: ";
	cin >> numPositivoNegativo;
	
	if(numPositivoNegativo != 0){
		
		if(numPositivoNegativo > 0){
			
			cout << "O numero e positivo!" << endl;
			
		}else{
			
			cout << "O numero e negativo!" << endl;
			
		}
		
	}else{
		
		cout << "O valor e zero!" << endl;
		
	}
	
	int num1;
	int num2;
	
	cout << "Digite um numero: ";
	cin >> num1;
	
	cout << "Digite mais um numero: ";
	cin >> num2;
	
	if(num1 > num2){
	
		cout << "O primeiro numero e o maior!" << endl;
		
	}else{
		
		cout << "O segundo numero e o maior!" << endl;
		
	}
	
	
	char verificaSexo;
	
	cout << "Informe seu sexo (M) masculino, (F) feminino: ";
	cin >> verificaSexo;
	
	if(verificaSexo == 'M' || verificaSexo == 'F'){
		
		if(verificaSexo == 'F'){
			
			cout << "Sexo feminimo!" << endl;
			
		}else{
			
			cout << "Sexo masculino!" << endl;
			
		}
		
	}else{
		
			cout << "Sexo invalido!" << endl;
		
	}
	
	// Essa parte do codigo esta comentada porque o while encerra o codigo, não sei como corrigir :(
	
	/*
	
	bool base = true;
	
	int num;
	
	int numMenor = 0;
	
	int numMaior = 0;
	
	int somaTotal = 0;
	
	string teste;
	
	cout << "Digire pelo menos dois numeros!" << endl;
	
	while(base == true){
		
		cout << "Digite um numero: ";
		cin >> num;
		
		if(num > numMaior){
			
			numMaior = num;
			
			somaTotal += num;
			
			cout << "Deseja para? ";
			cin >> teste;
			
			if(teste == "sim"){
			
				return base = false;
				
			}
		}
		else if(num < numMenor || numMenor == 0 || num == numMaior){
			
			numMenor = num;
			
			somaTotal += num;
			
			cout << "Deseja para?";
			cin >> teste;
			
			if(teste == "sim"){
			
				return base = false;
				
			}
		}
		else if(num < numMaior || num > numMenor){
			
			somaTotal += num;
			
			cout << "Deseja para?";
			cin >> teste;
			
			if(teste == "sim"){
			
				return base = false;
				
			}
		}
	
	cout << "A soma total dos numeros foi: " << somaTotal << endl;
	cout << "O maior numero foi: " << numMaior << endl;
	cout << "O menor numero foi: " << numMenor << endl;
	
	
	}
	
	*/
	
	int numTabuada;
	
	int numControlaValor;
	
	int numSoma;
	
	cout << "De qual numero voce quer ver a tabuada? ";
	cin >> numTabuada;
	
	for(numTabuada; numControlaValor <= 10; numControlaValor++){
		
			numSoma = numTabuada * numControlaValor;
		
		cout << numTabuada << " x " << numControlaValor << " = " << numSoma << endl;
		
	}
	
	bool basePrimo = true;
	
	string testePrimo;
	
	int primo;
	
	while(basePrimo == true){
	cout << "Digite um numero: ";
	cin >> primo;
	
		if(primo == 2){
		
			cout << "E um numero primo!" << endl;
		
			cout << "Deseja para?";
			cin >> testePrimo;
			
				if(testePrimo == "sim"){
			
					return basePrimo = false;
				
				}
				
		}else if(primo % 2 != 0 && primo % 3 != 0){
		
			cout << "E um numero primo!" << endl;
		
			cout << "Deseja para?";
			cin >> testePrimo;
			
				if(testePrimo == "sim"){
			
					return basePrimo = false;
				
				}
		
		}else{
		
			cout << "Nao e um numero primo!" << endl;
		
			cout << "Deseja para?";
			cin >> testePrimo;
			
				if(testePrimo == "sim"){
			
					return basePrimo = false;
				
				}
		}
	}
	
	int totalImpar = 0;
	
	int totalPar = 0;
	
	int numImpaPar;
	
	bool baseImpaPar = true;
	
	while(baseImpaPar == true){
		
		cout << "Digite um numero: ";
		cin >> numImpaPar;
		
		if(numImpaPar > 0){
			
			if(numImpaPar % 2 != 0){
				
				totalImpar += numImpaPar;
				
				if(numImpaPar >= 1000){
					
					baseImpaPar = false;
					
				}
				
			}else{
				
				totalPar +=  numImpaPar;
				
				if(numImpaPar >= 1000){
					
					baseImpaPar = false;
					
				}	
			}	
		}else{
			
			cout << "Valor invalido!" << endl;
			
		}
		
		cout << "Soma total de numeros impar: " << totalImpar << endl;
		cout << "Soma total de numeros par: " << totalPar << endl;
			
	}
	
	// ta repreendido em filho
	
	int numFibo;

    cout << "Digite um numero: ";
    cin >> numFibo;

    if (numFibo < 0) {
        cout << "Nao pode ser um valor negativo!" << endl;
    }else {
        
        int cont1 = 0;
        
        int cont2 = 1;
    	
    	if (numFibo == 1) {
    		
            cout << "O " << numFibo << "º termo da série de Fibonacci é: " << cont1 << endl;
        
    	}else {
            for (int i = 2; i <= numFibo; ++i) {
                int temp = cont2;
                cont2 = cont1 + cont2;
                cont1 = temp;
            }
		}
		cout << "O " << numFibo << " enesimo termo da serie de Fibonacci e: " << cont2 << endl;
	}
	
	double aumento20 = 1.20;
	double aumentoP20 = 0.20;
	
	double aumento15 = 1.15;
	double aumentoP15 = 0.15;
	
	double aumento10 = 1.10;
	double aumentoP10 = 0.10;
	
	double aumento5 = 1.05;
	double aumentoP5 = 0.05;
	
	double salarioTabajara;
	double salarioAumentado;
	double valorAumetado;
	
	cout << "Qual seu salario atual? ";
	cin >> salarioTabajara;
	
	if(salarioTabajara <= 280){
		
		
		salarioAumentado = salarioTabajara * aumento20;
		valorAumetado =  salarioTabajara * aumentoP20;
		
		cout << "Salario antes do reajuste: " << salarioTabajara << " Reais" << endl;
		cout <<	"Percentual do reajuste foi de 20%" << endl;
		cout << "Valor do aumentado do salario: " << valorAumetado << " Reais" << endl;
		cout << "Salario depois do reajuste: " << salarioAumentado << " Reais" << endl;
		
	}else if(salarioTabajara > 280 && salarioTabajara <= 700){
		
		
		salarioAumentado = salarioTabajara * aumento15;
		valorAumetado =  salarioTabajara * aumentoP15;
		
		cout << "Salario antes do reajuste: " << salarioTabajara << " Reais" << endl;
		cout <<	"Percentual do reajuste foi de 15%" << endl;
		cout << "Valor do aumentado do salario: " << valorAumetado << " Reais" << endl;
		cout << "Salario depois do reajuste: " << salarioAumentado << " Reais" << endl;
		
	}else if(salarioTabajara > 700 && salarioTabajara <= 1500){
		
		
		salarioAumentado = salarioTabajara * aumento10;
		valorAumetado =  salarioTabajara * aumentoP10;
		
		cout << "Salario antes do reajuste: " << salarioTabajara << " Reais" << endl;
		cout <<	"Percentual do reajuste foi de 10%" << endl;
		cout << "Valor do aumentado do salario: " << valorAumetado << " Reais" << endl;
		cout << "Salario depois do reajuste: " << salarioAumentado << " Reais" << endl;
		
	}else if(salarioTabajara > 1500){
		
		
		salarioAumentado = salarioTabajara * aumento5;
		valorAumetado =  salarioTabajara * aumentoP5;
		
		cout << "Salario antes do reajuste: " << salarioTabajara << " Reais" << endl;
		cout <<	"Percentual do reajuste foi de 5%" << endl;
		cout << "Valor do aumentado do salario: " << valorAumetado << " Reais" << endl;
		cout << "Salario depois do reajuste: " << salarioAumentado << " Reais" << endl;
		
	}
	
	
	int soma1;
	
	int soma2;
	
	int somaTotalMusica;
	
	cout << "Digite um numero: ";
	cin >> soma1;
	
	if(soma1 != 0){
		
		if(soma1 >= 1 && soma1 <= 10){
			
			cout << "Digite mais um numero: ";
			cin >> soma2;
			
			somaTotalMusica = soma1 + soma2;
			
			if(somaTotalMusica == 1){
				
				cout << "Esta tocando ( ROCK NO SERTAO )";
				
			}else if(somaTotalMusica == 2){
				
				cout << "Esta tocando ( SAGA DE UM VAQUEIRO )";
				
			}else if(somaTotalMusica == 3){
				
				cout << "Esta tocando ( BOTA PEGADO PAREA )";
				
			}else if(somaTotalMusica == 4){
				
				cout << "Esta tocando ( PONTO FINAL )";
				
			}else if(somaTotalMusica == 5){
				
				cout << "Esta tocando ( LUZ CÂMERA ACAO )";
				
			}else if(somaTotalMusica == 6){
				
				cout << "Esta tocando ( TOMA CONTA DE MIM )";
				
			}else if(somaTotalMusica == 7){
				
				cout << "Esta tocando ( OLHA PRO CEU )";
				
			}else if(somaTotalMusica == 8){
				
				cout << "Esta tocando ( OLHINHOS DE FOGUEIRA )";
				
			}else if(somaTotalMusica == 9){
				
				cout << "Esta tocando ( RANCHEIRA )";
				
			}else if(somaTotalMusica == 10){
				
				cout << "Esta tocando ( AVOANTE )";
				
			}
			
		}else{
			
			cout << "Valor invalido!";
			
		}
		
	}else{
		
		cout << "Esta tocando ( MEIO-DIA )";
		
	}
	

	
	return 0;
}
