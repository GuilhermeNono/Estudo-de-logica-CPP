#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

void ReturnHelloWorld() {
	std::cout << "Ola, mundo!\n";
}

void ReturnNumber() {
	int cinNumber = 0;
	std::cin >> cinNumber;
	std::cout << "O numero informado foi " << cinNumber << "\n";
}

void ReturnSum() {
	int x = 0;
	std::cout << "Informe o primeiro numero da soma: ";
	std::cin >> x;
	std::cout << "\n";
	int y = 0;
	std::cout << "Informe o segundo numero da soma: ";
	std::cin >> y;
	std::cout << "\n";

	std::cout << x + y << "\n";
}

void ReturnMedia() {
	float notaPrimBim;
	float notaSeguBim;
	float notaTercBim;
	float notaQuartBim;
	float mediaFinal;

	std::cout << "Informe sua nota do primeiro bimestre: ";
	std::cout << "\n";
	std::cin >> notaPrimBim;

	std::cout << "Informe sua nota do segundo bimestre: ";
	std::cout << "\n";
	std::cin >> notaSeguBim;

	std::cout << "Informe sua nota do terceiro bimestre: ";
	std::cout << "\n";
	std::cin >> notaTercBim;

	std::cout << "Informe sua nota do quarto bimestre: ";
	std::cout << "\n";
	std::cin >> notaQuartBim;

	mediaFinal = (notaPrimBim + notaSeguBim + notaTercBim + notaQuartBim) / 4;

	std::cout << "Sua media final eh de " << mediaFinal << "\n";

}

void ConvertMeterToCentimeter() {
	int metros;
	int centimetros;
	std::cout << "Informe quantos metros quer converter: ";
	std::cout << "\n";
	std::cin >> metros;

	centimetros = 100 * metros;
	std::cout << metros << " metros, eh igual a " << centimetros << " centimetros. \n";
}

void CircleRadius() {
	float radius;
	float area;
	std::cout << "Informe o raio do circulo: ";
	std::cin >> radius;
	std::cout << "\n";

	area = M_PI * pow(radius, 2);
	std::cout << "A area do circulo � igual a " << area << "m2\n";
}

void SquareArea() {
	float lados;
	float area;

	std::cout << "Informe o valor dos lados do quadrado: ";
	std::cin >> lados;
	std::cout << "\n";

	area = pow(lados, 2);

	std::cout << "O valor da area do quadrado eh de " << area << "cm2\n";
}

int main(int argc, char** argv) {

	//Exercicio 1 -> Fa�a um Programa que mostre a mensagem "Ol� Mundo" na tela.
	// 
	////ReturnHelloWorld();
	// 
	//Exercicio 2 -> Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].
	// 
	////ReturnNumber();
	// 
	//Exercicio 3 -> Fa�a um Programa que pe�a dois n�meros e imprima a soma.
	// 
	////ReturnSum();
	// 
	//Exercicio 4 -> Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia
	// 
	////ReturnMedia();
	// 
	//Exercicio 5 -> Fa�a um Programa que converta metros para cent�metros.
	// 
	////ConvertMeterToCentimeter();
	// 
	//Exercicio 6 -> Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
	// 
	////CircleRadius();
	// 
	//Exercicio 7 -> Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.
	//
	////SquareArea();
	//
	//Exercicio 8 -> Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.
	//



	system("pause");

	return 0;
}