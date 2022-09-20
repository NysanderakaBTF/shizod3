#include <iostream>
#include <fstream>
#include <string>
#include "struct.h"
#include "hash.h"
#include "plikDaTabela.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string name;
	string s;
	string ss;
	int n, pos, q;
	ofstream out;
	ifstream in;
	fstream qqq;
	taxi t;

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

	HashTale rgerhgerhr("testHAsh.bin");
	rgerhgerhr.testHeshT();

	

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

	//cout << "Практическая работа №2   \"Внешние структуры данных: текстовый и двоичный файлы.\". Резников Григорий." << endl << endl;
	//cout << "Здание 1.1 (1): создание текстового файла кодировки ASCII, содержащего десятичные числа по несколько чисел на строке (all random) \n" <<
	//	"Здание 1.2 (2): вывод содержимого текстового файла.\n" <<
	//	"Здание 1.3 (3): добавление новой строки в конец файла.\n" <<
	//	"Здание 1.4 (4): прочитать значение числа, указав его порядковый номер в файле, и вернуть его значение\n" <<
	//	"Здание 1.5 (5): определить количество чисел в файле\n" <<
	//	"Здание 1.6 (6): Создать новый файл из значений исходного, размещая на строке значения: количество чисел до конца строки, сами числа через пробел.\n" <<
	//	"Здание 2.1 (7): преобразование тестовых данных из текстового файла в двоичный файл\n" <<
	//	"Здание 2.2 (8): преобразование данных из двоичного файла в текстовый\n" <<
	//	"Здание 2.3 (9): вывод всех записей двоичного файла\n" <<
	//	"Здание 2.4 (10): доступ к записи по ее порядковому номеру в файле, используя механизм прямого доступа к записи в двоичном файле (запист в переменную, для демонтрации они выводится)\n" <<
	//	"Здание 2.5 (11): удаление записи с заданным значением ключа, выполнить путем замены на последнюю запись\n" <<
	//	"Здание 2.6 (12): Сформировать список машин, находящихся в гараже. Полученные данные записать в двоичный файл с той же структурой\n" <<
	//	"Здание 2.7 (13): Обновить сведения о машине при выезде из гаража\n" <<
	//	endl;
	//cout << "Введите номер задания" << endl;
	//int ta;
	//cin >> ta;
	//switch (ta)
	//{
	//case 1:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	out.open(s);
	//	if (!out.bad())
	//		createRandomFile(out);
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!out.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		out.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; out.close();
	//	}
	//	break;
	//case 2:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	in.open(s);
	//	if (in.is_open())
	//		printFile(in);
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	break;
	//case 3:
	//	/*cin.clear();
	//	fflush(stdin);*/
	//	cout << "Enter string" << endl;
	//	getline(cin, ss);
	//	getline(cin, ss);
	//	cout << "Enter file name" << endl;
	//	cin >> s;

	//	out.open(s, ios::app);
	//	if (!out.bad()) {
	//		out.close();
	//		addAstrigToEnd(out, s, ss);
	//	}
	//	else
	//		cout << "Something went whong";
	//	if (!out.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		out.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; out.close();
	//	}
	//	break;
	//case 4:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	cout << "Enter number position" << endl;
	//	cin >> n;
	//	in.open(s);
	//	if (in.is_open()) {
	//		q = getValByNumber(in, n);
	//		if (q != NULL) {
	//			cout << q << endl;
	//		}
	//		else cout << "Wrong position" << endl;
	//	}
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	break;
	//case 5:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	in.open(s);
	//	if (in.is_open())
	//		cout << getTotalNumbers(in) << endl;
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	break;
	//case 6:
	//	cout << "Enter file name (read from)" << endl;
	//	cin >> s;
	//	in.open(s);
	//	if (in.is_open()) {
	//		cout << "Enter file name (write to)" << endl;
	//		cin >> s;
	//		out.open(s);
	//		if (!out.bad())
	//			task191(in, out);
	//		else {
	//			cout << "Something went whong" << endl;
	//		}
	//	}
	//	else {
	//		cout << "Something went whong" << endl;
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but input stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, input stream is closed" << endl; in.close();
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but output stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, output stream is closed" << endl; in.close();
	//	}
	//	break;
	//case 7:
	//	cout << "Enter file name (read from)" << endl;
	//	cin >> s;
	//	in.open(s);
	//	if (in.is_open()) {
	//		cout << "Enter file name (write to)" << endl;
	//		cin >> s;
	//		out.open(s, ios_base::binary);
	//		if (!out.bad())
	//			textToBin(in, out);
	//		else {
	//			cout << "Something went whong" << endl;
	//		}
	//	}
	//	else {
	//		cout << "Something went whong" << endl;
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but input stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, input stream is closed" << endl; in.close();
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but output stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, output stream is closed" << endl; in.close();
	//	}
	//	break;
	//case 8:
	//	cout << "Enter file name (read from)" << endl;
	//	cin >> s;
	//	in.open(s, ios_base::binary);
	//	if (in.is_open()) {
	//		cout << "Enter file name (write to)" << endl;
	//		cin >> s;
	//		out.open(s);
	//		if (!out.bad())
	//			binToText(in, out);
	//		else {
	//			cout << "Something went whong" << endl;
	//		}
	//	}
	//	else {
	//		cout << "Something went whong" << endl;
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but input stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, input stream is closed" << endl; in.close();
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but output stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, output stream is closed" << endl; in.close();
	//	}
	//	break;
	//case 9:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	in.open(s, ios_base::binary);
	//	if (in.is_open())
	//		printBin(in);
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	break;
	//case 10:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	cout << "Enter position" << endl;
	//	cin >> pos;
	//	in.open(s, ios_base::binary);
	//	if (in.is_open()) {
	//		t.id = -1;
	//		getDataBin(in, pos, t);
	//		if (t.id != -1) {
	//			cout << "Taxi info\n";
	//			cout << t.id << " " << t.isInGarage << " ";
	//			for (int i = 0; i < 40; i++) {
	//				cout << t.name[i];
	//			}
	//			for (int i = 0; i < 5; i++) {
	//				cout << t.time[i];
	//			}
	//			cout << endl;
	//		}
	//		else cout << "Wrong number\n";
	//	}
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	break;
	//case 11:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	cout << "Enter key" << endl;
	//	cin >> pos;
	//	in.open(s);
	//	if (in.is_open())
	//		delLineText(in, pos, s);
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	cout << "File after deletion" << endl;
	//	in.open(s);
	//	printFile(in);
	//	in.close();
	//	break;
	//case 12:
	//	cout << "Enter file name (read from)" << endl;
	//	cin >> s;
	//	in.open(s);
	//	if (in.is_open()) {
	//		cout << "Enter file name (write to)" << endl;
	//		cin >> ss;
	//		out.open(ss);
	//		if (!out.bad()) {
	//			out.close();
	//			getInGarageList(s, ss);
	//			cout << "\nResult\n";
	//			in.close();
	//			in.open(ss);
	//			printBin(in);
	//			in.close();
	//		}
	//		else {
	//			cout << "Something went whong" << endl;
	//		}
	//	}
	//	else {
	//		cout << "Something went whong" << endl;
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but input stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, input stream is closed" << endl; in.close();
	//	}
	//	if (!in.good()) {
	//		cout << "Something went whong again, but output stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong, output stream is closed" << endl; in.close();
	//	}
	//	break;
	//case 13:
	//	cout << "Enter file name" << endl;
	//	cin >> s;
	//	cout << "Enter ID" << endl;
	//	cin >> pos;
	//	in.open(s);
	//	if (in.is_open())
	//		LeaveGarage(pos, s);
	//	else
	//		cout << "Something went whong" << endl;
	//	if (!in.good()) {
	//		cout << "Something went whong again, but stream is closed" << endl;
	//		in.close();
	//	}
	//	else {
	//		cout << "Nothing went whong" << endl; in.close();
	//	}
	//	cout << "File after change" << endl;
	//	in.open(s);
	//	printFile(in);
	//	in.close();
	//	break;
	//default:
	//	break;
	//}

}


