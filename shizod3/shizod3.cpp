#include <iostream>
#include <fstream>
#include <string>
#include "struct.h"
#include "hash.h"
#include "plikDaTabela.h"
#include <chrono>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string s;
	string ss;
	int n, pos, q;
	ofstream out;
	ifstream in;
	fstream qqq;
	taxi t;
	int i1, i2, i3, i4, i5, i6;

	srand(time(NULL));
	//in.open("testq.txt");
	//printFile(in);
	//in.close();
	//cout << "/////////////////////////////////" << endl;
	//in.open("testq.txt");
	//out.open("qqq.bin", ios_base::binary);
	//textToBin(in, out);
	//in.close();
	//out.close();
	//cout << "/////////////////////////////////" << endl;
	//in.open("qqq.bin", ios_base::binary);
	//printBin(in);
	//in.close();
	//cout << "/////////////////////////////////" << endl;
	//string bp = "qqq.bin";
	//delDataBin( bp, 3);
	//cout << "/////////////////////////////////" << endl;
	//in.open("qqq.bin", ios_base::binary);
	//printBin(in);
	//in.close();

	//HashTale rgerhgerhr("testHAsh.bin");
	//rgerhgerhr.testHeshT();

	//testBinF();


//	chrono::steady_clock sc;   // create an object of `steady_clock` class
	//auto start = sc.now();     // start timer

	//getelem(1, wefew, hhhh);
	//cout << reinterpret_cast<char*>(&wefew), sizeof(taxi);

	//auto end = sc.now();       // end timer (starting & ending is done by measuring the time at the moment the process started & ended respectively)
	//auto time_span = chrono::microseconds(end - start);   // measure time span between start & end
	//
	//auto start = std::chrono::steady_clock::now();
	//getelem(1, wefew, hhhh);
	//auto end = std::chrono::steady_clock::now();
	//auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
	//std::cout << "Time = " << elapsed.count() << endl;


	// start = std::chrono::steady_clock::now();
	//getelem(150000, wefew, hhhh);
	// end = std::chrono::steady_clock::now();
	// elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
	//std::cout << "Time = " << elapsed.count() << endl;


	// start = std::chrono::steady_clock::now();
	//getelem(490000, wefew, hhhh);
	// end = std::chrono::steady_clock::now();
	// elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
	//std::cout << "Time = " << elapsed.count() << endl;

	//in.open("testq.txt");
	//HashTale ta("testHAsh.bin");
	//formTAbleFromFile(ta, "testHAsh.bin");
	//ta.PrintTable();

	//printBin("testHAsh.bin");

	//pair<int, int> aaaaaaaa = ta.getelemT(100);
	//cout << aaaaaaaa.first << " " << aaaaaaaa.second << endl;

	//taxi ergv;
	//ta.getelem(45, ergv);
	//cout << ergv.id << " " << ergv.name << endl;

	//ta.delID(45);
	//printBin("testHAsh.bin");
	//ta.PrintTable();

	cout << "Практическая работа №3 \"Применение хеш-таблицы для поиска данных в двоичном файле с записями фиксированной длины.\". Резников Григорий." << endl << endl;
	cout << " (1): тестирование получения хеша \n" <<
		" (2): вставить в таблицу ключ\n" <<
		" (3): удалить ключ из таблицы\n" <<
		" (4): найти ключ в таблице\n" <<
		" (5): рехешировать таблицу\n" <<
		" (6): тестирование операций управления хеш-таблицей\n" <<
		" (7): вывод таблицы\n" <<

		" (8): создание двоичного файла из текстового\n" <<
		" (9): вывод всех записей двоичного файла\n" <<
		" (10): доступ к записи по ее порядковому номеру в файле, используя механизм прямого доступа к записи в двоичном файле (запист в переменную, для демонтрации они выводится)\n" <<
		" (11): удаление записи с заданным значением ключа (замена на спец значение тк это оптимально для таблице)\n" <<
		" (12): добавить запись в двоичный файл (запись на вводимую позицию)\n" <<
		" (13): Тестирование функций двоичного файла\n" <<

		" (14): Прочитать запись из файла (по номеру) и вставить элемент в таблицу \n" <<
		" (15): Удалить запись из таблицы при заданном значении ключа и соответственно из файла.\n" <<
		" (16): Найти запись в файле по значению ключа (найти ключ в хеш-таблице, получить номер записи с этим ключом в файле, выполнить прямой доступ к записи по ее номеру).\n" <<
		" (17): Тестирование времени доступа (0, 150 000 и 490 000 позиции из полумиллиона)\n" <<
		endl;
	cout << "Введите номер задания" << endl;
	int ta;
	cout << "For some tests you are working with that file" << endl;
	ifstream innn("testq.txt");
	ofstream oooo("testq.bin", ios_base::binary);

	textToBin(innn, oooo);
	innn.close();
	oooo.close();
	printBin("testq.bin");
	//ifstream innn("degrodation_test.txt");
	//ofstream oooo("NewBin.bin", ios_base::binary);

	//textToBin(innn, oooo);
	//innn.close();
	//oooo.close();

	HashTale* hhhh = new HashTale("NewBin.bin");

	HashTale* aaa = new HashTale("bbbbb.bin", 20);

//	formTAbleFromFile(*hhhh, "NewBin.bin");
	taxi wefew;
//	printBin("NewBin.bin");

	pair<int, int> ppppp = make_pair(-1,-1);
	taxi bbbub(37);
	bbbub.isInGarage = 0;
	string name = "wefwefwewefwf";
	bbbub.name;
	for (int i = 0; i < name.size(); i++) {
		bbbub.name[i] = name[i];
	}
	cin >> ta;
	auto start = std::chrono::steady_clock::now();
	///getelem(1, wefew, hhhh);
	auto end = std::chrono::steady_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
	switch (ta)
	{
	case 1:
		cout << "Enter test key value" << endl;
		cin >> i1;
		cout << "Got hash: " << aaa->hF(i1)<<" for size "<<aaa->tabl.size()<<endl;
		delete aaa;
		aaa = new HashTale("bbbbb.bin", 10);
		cout << "Got hash: " << aaa->hF(i1) << " for size " << aaa->tabl.size() << endl;
		delete aaa;

		break;

	case 2:
		aaa = new HashTale("bbbbb.bin", 10);

		cout << "Your table" << endl;
		aaa->PrintTable();

		cout << "Enter key" << endl;
		cin >> i1;
		aaa->add(i1, i1);
	
		aaa->PrintTable();

		delete aaa;

		break;

	case 3:
		cout << "Working with test file" << endl;
		in.open("testq.txt");
		out.open("77.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		hhhh = new HashTale("77.bin");

		formTAbleFromFile(*hhhh, "77.bin");

		cout << "Your table" << endl;
		hhhh->PrintTable();

		cout << "Enter key to delete " << endl;
		cin >> i1;

		hhhh->delIDTabl(i1);
		cout << "Your table" << endl;
		hhhh->PrintTable();
		delete hhhh;
		break;
	case 4:
		cout << "Working with test file" << endl;
		in.open("testq.txt");
		out.open("77.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		hhhh = new HashTale("77.bin");

		formTAbleFromFile(*hhhh, "77.bin");

		cout << "Enter key to find " << endl;
		cin >> i1;
		ppppp = hhhh->getelemT(i1);
		if (ppppp.first != -1)
			cout << "ID" << ppppp.first << " position in file " << ppppp.second + 1 << endl;
		else
			cout << "No such id" << endl;
		delete hhhh;
		break;
	case 5:
		cout << "Working with test file" << endl;
		in.open("testq.txt");
		out.open("77.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		hhhh = new HashTale("77.bin");

		formTAbleFromFile(*hhhh, "77.bin");

		cout << "Your table before rehashing" << endl;
		hhhh->PrintTable();

		hhhh->rehash_dontWrite();

		cout << "Your table after rehashing" << endl;
		hhhh->PrintTable();

		delete hhhh;
		break;

	case 6:
		cout << "Full test table" << endl;
		hhhh = new HashTale("NewBin.bin");
		hhhh->testHeshT();
		break;
		
	case 7:
		cout << "Working with test file" << endl;
		in.open("testq.txt");
		out.open("77.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		hhhh = new HashTale("77.bin");

		formTAbleFromFile(*hhhh, "77.bin");

		cout << "Your table" << endl;
		hhhh->PrintTable();

		break;
	case 8:
		cout << "Enter file name (read from)" << endl;
		cin >> s;
		in.open(s);
		if (in.is_open()) {
			cout << "Enter file name (write to)" << endl;
			cin >> s;
			out.open(s, ios_base::binary);
			textToBin(in, out);
		}
		in.close();
		out.close();
		cout << "Your binary file" << endl;
		printBin(s);

		break;
	case 9:
		cout << "Enter file name" << endl;
		cin >> s;
		printBin(s);
		break;

	case 10:
		in.close();
		out.close();
		cout << "Enter file name" << endl;
		cin >> s;
		cout << "Enter position" << endl;
		cin >> pos;
		in.open(s, ios_base::binary);
		t.id = -1;
		getDataBin(s, pos, t);
		if (t.id != -1) {
			cout << "Taxi info\n";
			cout << t.id << " " << t.isInGarage << " ";
			for (int i = 0; i < 40; i++) {
				cout << t.name[i];
			}
			for (int i = 0; i < 5; i++) {
				cout << t.time[i];
			}
			cout << endl;
		}
		else cout << "Wrong number\n";
		break;
	case 11:
		in.open("testq.txt");
		out.open("testq.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		cout << "Enter file name" << endl;
		cin >> s;
		cout << "Enter key" << endl;
		cin >> pos;
		delDataBinOnID(s, pos);
		cout << "File after deletion" << endl;
		printBin(s);
		break;
	case 12:
		in.open("testq.txt");
		out.open("testq.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		cout << "Working with test file" << endl;
		cout << "Enter file name" << endl;
		cin >> s;
		cout << "Enter positiom write to" << endl;
		cin >> i1;

		cout << "Writing this taxi" << endl;
		cout << bbbub.id << " " << bbbub.isInGarage << " ";
		for (int i = 0; i < 40; i++)
			cout << bbbub.name[i];
		for (int i = 0; i < 5; i++)
			cout << bbbub.time[i];
		cout << endl;

		writeTonPlace(s, i1, bbbub);

		cout << "File after writing" << endl;
		printBin(s);

		break;
	case 13:
		cout << "Testing bin file functions" << endl;
		testBinF();
		break;

	case 14:
		cout << "Working with test file:" << endl;
		in.open("testq.txt");
		out.open("testq.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		printBin("testq.bin");

		hhhh = new HashTale("testq.bin");

		cout << "Enter potition in file to write it in table " << endl;
		cin >> i1;

		readBinAddTab1(*hhhh, i1, "testq.bin");
		
		cout << "Your table" << endl;
		hhhh->PrintTable();

		delete hhhh;
		break;
	case 15:
		in.open("testq.txt");
		out.open("testq.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		cout << "Working with test file" << endl;
		hhhh = new HashTale("testq.bin");

		formTAbleFromFile(*hhhh, "testq.bin");

		cout << "Enter key to delete " << endl;
		cin >> i1;

		delTAbleDelPlikID(i1, *hhhh, "testq.bin");
		cout << "Your file after deletion" << endl;
		printBin("testq.bin");
		cout << "Your table after deletion" << endl;
		hhhh->PrintTable();
		delete hhhh;
		break;
	case 16:
		in.open("testq.txt");
		out.open("ffffffff.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();
		cout << "Working with test file" << endl;
		hhhh = new HashTale("ffffffff.bin");

		formTAbleFromFile(*hhhh, "ffffffff.bin");

		cout << "Enter key to find " << endl;
		cin >> i1;
		t.id = -1;
		getelem(i1,t,*hhhh);

		if (t.id != -1) {
			cout << t.id << " " << t.isInGarage << " ";
			for (int i = 0; i < 40; i++) {
				cout << t.name[i];
			}
			for (int i = 0; i < 5; i++) {
				cout << t.time[i];
			}
			cout << endl;
		}
		else {
			cout << "No such ID";
		}
		delete hhhh;
		break;
	case 17:
		in.open("degrodation_test.txt");
		out.open("1212.bin", ios_base::binary);
		textToBin(in, out);
		in.close();
		out.close();

		cout << "Working with big test file" << endl;
		hhhh = new HashTale("1212.bin");

		formTAbleFromFile(*hhhh, "1212.bin");

		cout << "Testing time" << endl;
		start = std::chrono::steady_clock::now();
		getelem(1, wefew, *hhhh);
		end = std::chrono::steady_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
		std::cout << "Time = " << elapsed.count() << endl;


		 start = std::chrono::steady_clock::now();
		getelem(150000, wefew, *hhhh);
		 end = std::chrono::steady_clock::now();
		 elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
		std::cout << "Time = " << elapsed.count() << endl;


		 start = std::chrono::steady_clock::now();
		getelem(490000, wefew, *hhhh);
		 end = std::chrono::steady_clock::now();
		 elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start) / 1000.0;
		std::cout << "Time = " << elapsed.count() << endl;
		break;
	default:
		break;
	}

}


