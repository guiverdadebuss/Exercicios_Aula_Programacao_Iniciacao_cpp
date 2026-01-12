#include <iostream>
#include <iomanip>
using namespace std;


//int main()
//{
//    std::cout << "Hello World!\n";
//}



//1. Apresentar o produto de dois números inteiros inseridos pelo utilizador.
// Algoritmo apresenta produto de dois numeros
//int main()
//{
//	int num1, num2;
//	cout << "Inserir um numero: ";
//	cin >> num1;
//	cout << "Inserir outro numero: ";
//	cin >> num2;
//	cout << "O produto dos numeros " << num1 << " X " << num2 << " = " << num1 * num2;
//}



//2. Calcular a média de três números inteiros inseridos pelo utilizador.
// Algoritmo que calcula media
//int main()
//{
//	int num1, num2, num3;
//	cout << "Inserir tres numeros: ";
//	cin >> num1 >> num2 >> num3;
//	cout << "A media dos numeros inseridos: " << (num1 + num2 + num3) / 3;
//}



//3. Mostrar o resultado da divisão inteira entre dois números inseridos pelo utilizador.
// Algoritmo que mostra divisao de dois numeros
//int main()
//{
//	int num1, num2;
//	cout << "Inserir dois numeros: ";
//	cin >> num1 >> num2;
//	cout << "A divisao inteira dos dois numeros: " << num1 / num2;
//}



//4. Ler um número inteiro e apresentar o seu antecedente (número anterior) e o seu sucessor (posterior).
// Algoritmo que apresentar numero seguinte e anterior
//int main()
//{
//	int num;
//	cout << "Inserir um numero: ";
//	cin >> num;
//	cout << "O antecedente do numero inserido: " << num - 1 << ". " << "O sucessor do numero inserido: " << num + 1 << ".";
//}



//5. Obter a área de um triângulo. area = (base * altura) / 2
// Algoritmo que calcula area de triangulo
//int main()
//{
//	int base, altura, area;
//	cout << "Vamos calcular a area de um triangulo, insira primeiramente a base: ";
//	cin >> base;
//	cout << "Agora insira a altura: ";
//	cin >> altura;
//	cout << "...Calculando a area" << endl;
//	area = (base * altura) / 2;
//	cout << "A area do triangulo e: " << area << endl;
//}



//6. Determinar o valor total a pagar de uma dada mercadoria sendo que ao valor lido, deverá ser acrescido 23% de IVA.
// Algoritmo que calcula valor de mercadoria acrescido IVA
//int main()
//{
//	int valor;
//	double iva, valorComIva;
//	cout << "Insira o valor da mercadoria, para entao sabermos o valor final: " << endl;
//	cin >> valor;
//	iva = 1.23;
//	valorComIva = valor * iva;
//	cout << "O valor final do produto mencionado mais 23% de IVA: " << endl << valorComIva;
//}



//7. Calcular o troco efetivo a retribuir a um cliente que decide dar como gorjeta ao funcionário 10% do valor do troco
//inicial.
//Note que deve pedir ao utilizador para inserir :
//O valor a pagar;
//O valor dado para fazer o pagamento(assumindo que este é superior).
//Considere que o valor dado para pagar é superior ao valor que tem a pagar.
// Algoritmo que calcula troco
//int main()
//{
//	double valorPagar, valorDado, trocoEfetivo, trocoInicial, gorjeta;
//	cout << "### CALCULADOR DE GORJETA E TROCO ###" << endl;
//	cout << "Quanto que deu o jantar? ";
//	cin >> valorPagar;
//	cout << "O cliente entregou quanto? ";
//	cin >> valorDado;
//	trocoInicial = valorDado - valorPagar;
//	gorjeta = trocoInicial * 0.1;
//	trocoEfetivo = trocoInicial - gorjeta;
//	cout << "A gorjeta dada pelo cliente foi de " << gorjeta << endl;
//	cout << "O troco devolvido ao cliente foi de " << trocoEfetivo << endl;
//	cout << "Obrigado pela gorjeta!";
//}



//8. Dado um número inteiro positivo, com 3 dígitos inteiros, imprimir os seus dígitos separados por espaços.
//	Considere que o número inserido já é de 3 dígitos, ou seja, entre 100 e 999.
// Algoritmo que imprime digitos separados por espaço
//int main()
//{
//	int numero, n1, n2, n3;
//	cout << "Insira um numero inteiro positivo de 3 digitos" << endl;
//	cin >> numero;
//	n1 = numero / 100;
//	n2 = (numero % 100) / 10;
//	n3 = numero % 10;
//	cout << n1 << " " << n2 << " " << n3;
//}



//9. Ler um número inteiro e que indicar se o número é par ou ímpar.
// Algoritmo que indica numero par ou impar
//int main()
//{
//	int numero;
//	cout << "Insira um numero inteiro" << endl;
//	cin >> numero;
//	if (numero % 2 == 0) {
//		cout << "Numero inserido = par.";
//	} else {
//		cout << "Numero inserido = impar.";
//	}
//}



//10. Dadas as notas do exame escrito e do oral de um aluno, verificar se este obteve aprovação(ExEscrito = 70 %,
//	ExOral = 30 %, aprovação ≥ 10).
//Alg.verifica aprovação teste
//
//int main()
//{
//	double exEscrito, exOral, media;
//	cout << "Insira a nota do exame escrito: " << endl;
//	cin >> exEscrito;
//	cout << "Insira a nota do exame oral: " << endl;
//	cin >> exOral;
//	media = (exEscrito * 0.7) + (exOral * 0.3);
//	if (media >= 10) {
//		cout << "Aluno foi aprovado com media: " << media;
//	}
//	else {
//		cout << "Aluno foi reprovado com media: " << media;
//	}
//}



//11. Calcular o salário semanal de um colaborador, que recebe à hora, a partir apenas do nº de horas que este trabalhou.
//Sabe - se que o número de horas semanais é 36 e que o preço à hora é de 7, 5€.Se o colaborador fizer horas extra(mais
//	de 36 horas) recebe 10€ por cada hora extra.
//	Note que não pode pedir ao utilizador para indicar as horas extra, pois é um dado que pode ser calculado.
//Algoritmo que calcula salário semanal
//
//int main()
//{
//	int horastrabalhadas, horasextras;
//	double valorhora, valorhoraextra, salariosemanal;
//	cout << "informe quantas horas foram trabalhadas essa semana: " << endl;
//	cin >> horastrabalhadas;
//	valorhora = 7.5;
//	horasextras = horastrabalhadas - 36;
//	valorhoraextra = 10;
//	if (horastrabalhadas > 36) {
//		salariosemanal = (horastrabalhadas - horasextras) * valorhora + (horasextras * valorhoraextra);
//		cout << "salario semanal = " << salariosemanal << endl;
//		cout << "salario semanal = " << horastrabalhadas - horasextras << " x " << valorhora << " + " << horasextras << " x " << valorhoraextra << endl;
//		cout << "salario semanal = 36 horas x valorhora(7.5) + horasextras x valorhoraextra(10)";
//	}
//	else {
//		salariosemanal = horastrabalhadas * valorhora;
//		cout << "salario semanal = " << salariosemanal << endl;
//		cout << "salario semanal = horastrabalhadas x valorhora(7.5)";
//	}
//}



//12. Uma empresa decidiu classificar os seus colaboradores em quatro grupos:
//Grupo 1 - Solteiros com menos de 25 anos
//Grupo 2 - Solteiros com 25 anos ou mais
//Grupo 3 - Casados com menos de 34 anos
//Grupo 4 - Casados com 34 anos ou mais
//Crie um algoritmo que determine a que grupo corresponde um dado colaborador lendo o estado civil(valor
//	inteiro : 0 para solteiro e 1 para casado) e a sua idade.
//Algoritmo que determina o grupo que pertence coloborador lendo estado civil e sua idade
//
//int main()
//{
//	int numero, estadoCivil, idade;
//	cout << "Insira 0 para solteiro e 1 para casado" << endl;
//	cin >> numero;
//	cout << "Insira sua idade" << endl;
//	cin >> idade;
//	estadoCivil = numero + 1;
//	switch (estadoCivil) {
//	case 1:
//		if (idade < 25) {
//			cout << "Grupo 1";
//		}
//		else {
//			cout << "Grupo 2";
//		}
//	case 2:
//		if (idade < 34) {
//			cout << "Grupo 3";
//		}
//		else {
//			cout << "Grupo 4";
//		}
//	}
//}



//13. Construa um programa que aceite números entre 1 e 7 e a cada um deles faça corresponder o dia da semana.Por
//exemplo, lendo o número 1 o programa deverá escrever “domingo” e lendo o número 7 devera escrever “sábado”.
// Algoritmo que informa o dia da semana mediante dia informado em numero.
//
//int main()
//{
//	int dia;
//	cout << "#####  DIA DA SEMANA  #####" << endl;
//	cout << "Insira um numero entre 1 e 7, podendo os considerar na mesma" << endl;
//	cin >> dia;
//	switch (dia) {
//	case 1: cout << "DIA : Domingo"; break;
//	case 2: cout << "DIA : Segunda Feira"; break;
//	case 3: cout << "DIA : Terca Feira"; break;
//	case 4: cout << "DIA : Quarta Feira"; break;
//	case 5: cout << "DIA : Quinta Feira"; break;
//	case 6: cout << "DIA : Sexta Feira"; break;
//	case 7: cout << "DIA : Sabado"; break;
//	default: cout << "#####  Foi pedido numero entre 1 e 7  #####"; break;
//	}
//}



//14. Um banco concede um crédito especial aos seus clientes, variável com o saldo médio no último ano.Construa um
//algoritmo que leia o saldo médio de um cliente e calcule o valor máximo de crédito de acordo com a tabela abaixo.
//Mostre uma mensagem para informar o saldo médio e o valor do crédito.
//• Abaixo de 200 – nenhum crédito
//• de 201 a 400 – até 20 % do valor do saldo médio
//• de 401 a 600 – até 30 % do valor do saldo médio
//• Acima de 600 – até 40 % do valor do saldo médio
//Alg para informar o valor de credito mediante saldo médio do cliente
//int main()
//{
//	int saldoMedio;
//	cout << "Por favor informe o saldo medio do cliente: " << endl;
//	cin >> saldoMedio;
//	if (saldoMedio < 200) {
//		cout << "Ola cliente, seu saldo medio foi de: " << saldoMedio << "logo nao tem direito a credito";
//	}
//	else if (saldoMedio > 201 && saldoMedio <= 400) {
//		cout << "Ola cliente, seu saldo medio foi de " << saldoMedio << ", logo voce tem direito a credito de " << saldoMedio * 0.2;
//	}
//	else if (saldoMedio > 401 && saldoMedio <= 600) {
//		cout << "Ola cliente, seu saldo medio foi de " << saldoMedio << ", logo voce tem direito a credito de " << saldoMedio * 0.3;
//	}
//	else {
//		cout << "Ola cliente, seu saldo medio foi de " << saldoMedio << ", logo voce tem direito a credito de " << saldoMedio * 0.4;
//	}
//}



//15. Uma empresa concede aumentos de salário aos seus funcionários, variáveis de acordo com o cargo.Construa um
//algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário.Se o cargo do funcionário não estiver
//na tabela, este deverá, então, receber 10 % de aumento.Mostre o salário antigo, o novo salário e a diferença.
//Os cargos considerados(e seus códigos) são:
//• 101 Gerente 25 %;
//• 102 Engenheiro 20 %;
//• 103 Técnico 15 %
//Algoritmo informa Aumento salário mediante cargo
//int main()
//{
//	double salarioAntigo, salarioNovo, dif;
//	int cargo;
//	cout << "Digite o salario atual: " << endl;
//	cin >> salarioAntigo;
//	cout << "Digite numericamente o cargo do funcionario: " << endl;
//	cout << "101 = Gerente" << endl;
//	cout << "102 = Engenheiro" << endl;
//	cout << "103 = Tecnico" << endl;
//	cin >> cargo;
//	if (cargo == 101) {
//		salarioNovo = salarioAntigo * 1.25;
//	}
//	else if (cargo == 102) {
//		salarioNovo = salarioAntigo * 1.20;
//	}
//	else if (cargo == 103) {
//		salarioNovo = salarioAntigo * 1.15;
//	}
//	else {
//		salarioNovo = salarioAntigo * 1.10;
//	}
//	dif = salarioNovo - salarioAntigo;
//	cout << "Salario antigo = " << salarioAntigo << endl;
//	cout << "Salario novo = " << salarioNovo << endl;
//	cout << "A diferenca ou o aumento foi de " << dif << " euros.";
//}



//16. Peça ao utilizador os comprimentos dos três lados de um triângulo. Verifique se os valores formam um triângulo
//válido.Caso seja válido, classifique o triângulo como equilátero, isósceles ou escaleno.
// Algoritmo que verifica tipo de triangulo.
//int main() {
//	float a, b, c;
//	cout << "Introduza o comprimento dos tres lados do triangulo: " << endl;
//	cout << "Lado 1: ";
//	cin >> a;
//	cout << "Lado 2: ";
//	cin >> b;
//	cout << "Lado 3: ";
//	cin >> c;
//	cout << "Verificacao se os valores informados formam um triangulo" << endl;
//	cout << "..........." << endl;
//	if ((a + b > c) && (a + c > b) && (b + c > a)) {
//		cout << "Os valores introduzidos formam um triangulo valido e seu triangulo e classificado como: ";
//
//		if (a == b && b == c) {
//			cout << "Triangulo Equilatero (todos os lados iguais).";
//		}
//		else if (a == b || a == c || b == c) {
//			cout << "Triangulo Isoceles (dois lados iguais).";
//		}
//		else {
//			cout << "Triangulo Escaleno (todos os lados sao diferentes).";
//		}
//	}
//	else {
//		cout << "Os valores introduzidos nao formam um triangulo valido.";
//	}
//}



//17. Peça ao utilizador uma nota entre 0 e 100. Classifique a nota em categorias(A, B, C, D ou F) usando a seguinte tabela :
//• A : 90 - 100
//• B : 80 - 89
//• C : 70 - 79
//• D : 60 - 69
//• F : < 60
//	Valide se a nota está no intervalo permitido.
// Algoritmo que classifica notas.
//int main() {
//	int nota;
//	do {
//		cout << "Introduza a nota do aluno (0 a 100): ";
//		cin >> nota;
//		if (nota < 0 || nota > 100) {
//			cout << "Nota invalida! Insira novamente." << endl;
//		}
//	} while (nota < 0 || nota > 100);
//	cout << "Nota validada com sucesso" << endl;
//	cout << "Categoria: ";
//	if (nota >= 90) {
//		cout << "A" << endl;
//	}
//	else if (nota >= 80) {
//		cout << "B" << endl;
//	}
//	else if (nota >= 70) {
//		cout << "c" << endl;
//	}
//	else if (nota >= 60) {
//		cout << "D" << endl;
//	}
//	else {
//		cout << "F" << endl;
//	}
//}



//18. Receba o salário bruto de um funcionário e deduza os impostos com base na tabela de IRS e Segurança social.
//18.1.Apresente o salário líquido, e soma dos impostos.
//Salario Liquido e soma dos impostos
// Algoritmo que calcula impostoso e salario liquido do usuario.
//int main() {
//	double segSoc, salBru, taxSegSoc, iRS, taxIRS, impTot;
//	taxSegSoc = 0.11;
//	cout << "Insira o Salario Bruto: ";
//	cin >> salBru;
//	segSoc = salBru * taxSegSoc;
//
//	if (salBru <= 870.00)
//		taxIRS = 0;
//	else if (salBru <= 992.00)
//		taxIRS = 0.13;
//	else if (salBru <= 1136.00)
//		taxIRS = 0.165;
//	else if (salBru <= 1187.00)
//		taxIRS = 0.22;
//	else if (salBru <= 1787.00)
//		taxIRS = 0.25;
//	else if (salBru <= 2078.00)
//		taxIRS = 0.32;
//	else if (salBru <= 2432.00)
//		taxIRS = 0.355;
//	else if (salBru <= 3233.00)
//		taxIRS = 0.3872;
//	else if (salBru <= 5547.00)
//		taxIRS = 0.4005;
//	else if (salBru <= 20221.00)
//		taxIRS = 0.4495;
//	else if (salBru > 20221.00)
//		taxIRS = 0.4717;
//	iRS = salBru * taxIRS;
//	impTot = segSoc + iRS;
//	cout << "O Salario Liquido e de " << salBru - impTot << " euros, a soma dos impostos e de " << impTot << " euros.";
//}



//19. Receba o consumo em kWh de um cliente e calcule o valor da fatura com base nas faixas de consumo :
//• Até 100 kWh : 0.5 € / kWh
//• 101 - 200 kWh : 0.7 € / kWh
//• Acima de 200 kWh : 1.0 € / kWh
//Adicione uma taxa fixa de €5 ao valor calculado.
// Algoritmo calcula consumo kwh;
//int main() {
//	float kwh, valorFinal;
//	int taxaFixa = 5;
//    do {
//        cout << "Introduza o consumo em kWh: ";
//        cin >> kwh;
//        if (kwh < 0) {
//            cout << "Erro: O consumo nao pode ser negativo. Tente novamente." << endl;
//        }
//    } while (kwh < 0);
//    if (kwh <= 100) {
//        valorFinal = (kwh * 0.5);
//    }
//    else if (kwh <= 200) {
//        valorFinal = (kwh * 0.7);
//    }
//    else {
//        valorFinal = (kwh * 1.0);
//    }
//    valorFinal = valorFinal + taxaFixa;
//    cout << "--- Detalhes da Fatura ---" << endl;
//    cout << "Consumo: " << kwh << " kWh" << endl;
//    cout << "Taxa Fixa: " << taxaFixa << " EUR" << endl;
//    cout << "Valor Total a Pagar: " << valorFinal << " EUR" << endl;
//}