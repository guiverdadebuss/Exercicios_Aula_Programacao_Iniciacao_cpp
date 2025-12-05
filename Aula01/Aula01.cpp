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

//int main()
//{
//	int num1, num2;
//	cout << "Inserir dois numeros: ";
//	cin >> num1 >> num2;
//	cout << "A divisao inteira dos dois numeros: " << num1 / num2;
//}

//4. Ler um número inteiro e apresentar o seu antecedente (número anterior) e o seu sucessor (posterior).

//int main()
//{
//	int num;
//	cout << "Inserir um numero: ";
//	cin >> num;
//	cout << "O antecedente do numero inserido: " << num - 1 << ". " << "O sucessor do numero inserido: " << num + 1 << ".";
//}

//5. Obter a área de um triângulo. area = (base * altura) / 2

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

int main()
{
	double valorPagar, valorDado, trocoEfetivo, trocoInicial, gorjeta;
	cout << "### CALCULADOR DE GORJETA E TROCO ###" << endl;
	cout << "Quanto que deu o jantar? ";
	cin >> valorPagar;
	cout << "O cliente entregou quanto? ";
	cin >> valorDado;
	trocoInicial = valorDado - valorPagar;
	gorjeta = trocoInicial * 0.1;
	trocoEfetivo = trocoInicial - gorjeta;
	cout << "A gorjeta dada pelo cliente foi de " << gorjeta << endl;
	cout << "O troco devolvido ao cliente foi de " << trocoEfetivo << endl;
	cout << "Obrigado pela gorjeta!";
}

