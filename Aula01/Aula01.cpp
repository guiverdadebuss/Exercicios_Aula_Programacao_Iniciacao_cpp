#include <iostream>
#include <iomanip>
using namespace std;


//int main()
//{
//    std::cout << "Hello World!\n";
//}

//1. Apresentar o produto de dois números inteiros inseridos pelo utilizador.
//
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
//
//int main()
//{
//	int num1, num2, num3;
//	cout << "Inserir tres numeros: ";
//	cin >> num1 >> num2 >> num3;
//	cout << "A media dos numeros inseridos: " << (num1 + num2 + num3) / 3;
//}

//3. Mostrar o resultado da divisão inteira entre dois números inseridos pelo utilizador.
//
//int main()
//{
//	int num1, num2;
//	cout << "Inserir dois numeros: ";
//	cin >> num1 >> num2;
//	cout << "A divisao inteira dos dois numeros: " << num1 / num2;
//}

//4. Ler um número inteiro e apresentar o seu antecedente (número anterior) e o seu sucessor (posterior).
//
//int main()
//{
//	int num;
//	cout << "Inserir um numero: ";
//	cin >> num;
//	cout << "O antecedente do numero inserido: " << num - 1 << ". " << "O sucessor do numero inserido: " << num + 1 << ".";
//}

//5. Obter a área de um triângulo. area = (base * altura) / 2
//
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
//
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
//
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
//
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
//
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
//	int horasTrabalhadas, horasExtras;
//	double valorHora, valorHoraExtra, salarioSemanal;
//	cout << "Informe quantas horas foram trabalhadas essa semana: " << endl;
//	cin >> horasTrabalhadas;
//	valorHora = 7.5;
//	horasExtras = horasTrabalhadas - 36;
//	valorHoraExtra = 10;
//	if (horasTrabalhadas > 36) {
//		salarioSemanal = (horasTrabalhadas - horasExtras) * valorHora + (horasExtras * valorHoraExtra);
//		cout << "Salario semanal = " << salarioSemanal << endl;
//		cout << "Salario semanal = " << horasTrabalhadas - horasExtras << " X " << valorHora << " + " << horasExtras << " X " << valorHoraExtra << endl;
//		cout << "Salario semanal = 36 horas X ValorHora(7.5) + HorasExtras X ValorHoraExtra(10)";
//	}
//	else {
//		salarioSemanal = horasTrabalhadas * valorHora;
//		cout << "Salario semanal = " << salarioSemanal << endl;
//		cout << "Salario semanal = HorasTrabalhadas X ValorHora(7.5)";
//	}
//}
