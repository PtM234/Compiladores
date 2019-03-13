#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#pragma once


class Palabras {
public:
	Palabras();
	bool ValidarCN(int NumeroARevisar);		//Validar cadena iniciando con letra
	bool ValidarN(int NumeroARevisar);		//Validar cadena iniciando con numero
	void PruebaStr();						//Prueba
	void Lector(int Iteraciones);			//Leer todo
	//~Palabras();

private:
	std::ifstream lkt;						//Leer el stream
	std::string let;						//String para insertar el stream
	std::vector<char> lct;					//Vector para ir insertando contenidos del string
	int num, ind, i;
};

