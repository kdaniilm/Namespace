#include "pch.h"
#include "stdafx.h"

namespace PC {
	class Pc {
	public:
		const int size = 20;
		char* CPU = new char[20];
		char* GPU = new char[20];
		char* RAMType = new char[20];
		float HHz;
		float RAMSize;
		float VRAMSize;
		void print() {
			cout << "CPU: " << CPU << endl;
			cout << "GPU: " << GPU << endl;
			cout << "RAMType: " << RAMType << endl;
			cout << "HHz = " << HHz << endl;
			cout << "RAMSize = " << RAMSize << "GB" << endl;
			cout << "VRAMSize = " << VRAMSize << "GB" << endl;
			cout << endl << endl;
		}
		void Clean() {
			CPU = NULL;
			GPU = NULL;
			RAMType = NULL;
		}
		void change() {
			cin.ignore();
			cout << "CPU: " << endl;
			cin.getline(CPU, 100);
			cout << "GPU: " << endl;
			cin.getline(GPU, 100);
			cout << "RAMType: " << endl;
			cin.getline(RAMType, 100);
			cout << "HHz: " << endl;
			cin >> HHz;
			cout << "RAMSize: " << endl;
			cin >> RAMSize;
			cout << "VRAMSize: " << endl;
			cin >> VRAMSize;
		}
	};
}
namespace NOUT {
	class Nout {
	public:
		const int size = 20;
		char* CPU = new char[20];
		char* GPU = new char[20];
		char* RAMType = new char[20];
		float HHz;
		float RAMSize;
		float VRAMSize;
		void print() {
			cout << "CPU: " << CPU << endl;
			cout << "GPU: " << GPU << endl;
			cout << "RAMType: " << RAMType << endl;
			cout << "HHz = " << HHz << endl;
			cout << "RAMSize = " << RAMSize << "GB" << endl;
			cout << "VRAMSize = " << VRAMSize << "GB" << endl;
			cout << endl << endl;
		}
		void Clean() {
		}
		void change() {
			cin.ignore();
			cout << "CPU: " << endl;
			cin.getline(CPU, 100);
			cout << "GPU: " << endl;
			cin.getline(GPU, 100);
			cout << "RAMType: " << endl;
			cin.getline(RAMType, 100);
			cout << "HHz: " << endl;
			cin >> HHz;
			cout << "RAMSize: " << endl;
			cin >> RAMSize;
			cout << "VRAMSize: " << endl;
			cin >> VRAMSize;
		}
	};
}
void main()
{
	setlocale(LC_ALL, "rus");

	PC::Pc pc;
	NOUT::Nout nout;
	char a, b;

	while (true)
	{
		cout << "Выберите действие: " << endl;
		cout << "[1]Изменить данные ПК; " << endl;
		cout << "[2]Изменить данные ноутбука;" << endl;
		cout << "[3]Просмотреть данные ПК;" << endl;
		cout << "[4]Просмотреть данные ноутбука;" << endl;
		cout << "[5]Просмотреть данные ПК и ноутбука;" << endl;
		cout << "[6]Выход." << endl;
		cin >> a;

		if (a == '1') {
			pc.change();
		}
		else if (a == '2') {
			nout.change();
		}
		else if (a == '3') {
			system("cls");
			pc.print();
		}
		else if (a == '4') {
			system("cls");
			nout.print();
		}
		else if (a == '5') {
			system("cls");
			pc.print();
			cout << endl << endl;
			nout.print();
		}
		else if (a == '6') {
			break;
		}
		else {
			cout << "Введите число от [1] до [4]!!! " << endl;
		}
	}
}