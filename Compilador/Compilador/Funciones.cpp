#include "Funciones.h"

Palabras::Palabras() {
	num = 0, ind = 0, i = 0;
}

bool Palabras::ValidarCN(int NumeroARevisar) {
	if (NumeroARevisar > 64 && NumeroARevisar < 92) {
		return true;
	}
	else if (NumeroARevisar > 96 && NumeroARevisar < 123) {
		return true;
	}
	else if (NumeroARevisar > 47 && NumeroARevisar < 58) {
		return true;
	}
	else {
		return false;
	}
}

bool Palabras::ValidarN(int NumeroARevisar) {
	bool bdr = false;
	if (NumeroARevisar > 47 && NumeroARevisar < 58) {
		return true;
	}
	else if (NumeroARevisar == 46 && bdr == false) {
		bdr = true;
		return true;
	}
	else {
		return false;
	}
}

void Palabras::PruebaStr() {
	lkt.open("entrada.txt", std::ios::in);
	while (std::getline(lkt, let)) {
		std::cout << let;
		//lkt.
	}
}

void Palabras::Lector(int Iteraciones) {
	lkt.open("entrada.txt", std::ios::in);
	while (std::getline(lkt, let)) {
		std::cout << let;
		while (num < Iteraciones) {
			int ltr = let[ind];
			if (ltr > 64 && ltr < 91) {
				std::cout << "Impresion numero [" << num + 1 << "]: ";
				lct.push_back(let[ind]);
				while (ValidarCN(ltr) == true) {
					ind++;
					lct.push_back(let[ind]);
					ltr = let[ind];
				}
				for (i; i <= ind; i++) {
					if (ValidarCN(lct[i]) == true)
					{
						std::cout << lct[i];
					}

				}
				std::cout << std::endl;
				num++;
			}

			else if (ltr > 96 && ltr < 123) {
				std::cout << "Impresion numero [" << num + 1 << "]: ";
				lct.push_back(let[ind]);
				while (ValidarCN(ltr) == true) {
					ind++;
					lct.push_back(let[ind]);
					ltr = let[ind];
				}
				for (i; i <= ind; i++) {
					if (ValidarCN(lct[i]) == true) {
						std::cout << lct[i];
					}
				}
				std::cout << std::endl;
				num++;
			}
			else if (ltr > 47 && ltr < 58) {
				std::cout << "Impresion numero [" << num + 1 << "]: ";
				lct.push_back(let[ind]);
				while (ValidarN(ltr) == true) {
					ind++;
					lct.push_back(let[ind]);
					ltr = let[ind];
				}
				for (i; i <= ind; i++) {
					if (ValidarN(let[i]) == true) {
						std::cout << lct[i];
					}
				}
				std::cout << std::endl;
				num++;
			}
			else {
				std::cout << "Impresion numero [" << num + 1 << "]: ";
				std::cout << "";
				std::cout << std::endl;
				ind++;
				num++;
			}
		}
	}
}