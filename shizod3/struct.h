#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct taxi
{
	int id;
	char name[40];
	char time[5];
	bool isInGarage;
	taxi(int id) {
		this->id = id;
		isInGarage = 0;
		for (int i = 0; i < 40; i++) {
			name[i] = ' ';
		}
		for (int i = 0; i < 5; i++) {
			time[i] = ' ';
		}
	}
	taxi() {
		this->id = 0;
		isInGarage = 0;
		for (int i = 0; i < 40; i++) {
			name[i] = ' ';
		}
		for (int i = 0; i < 5; i++) {
			time[i] = ' ';
		}
	}

};


void printFile(ifstream& in) {
	string n;
	while (getline(in, n)) {
		cout << n << endl;
	}
}

void binToText(ifstream& in, ofstream& out) {
	taxi tt(1);
	//in.read(reinterpret_cast<char*>(&tt), sizeof(tt));
	while (!in.eof())
	{
		in.read(reinterpret_cast<char*>(&tt), sizeof(tt));
		//cout<< tt.id << " " << tt.isInGarage<<" " << tt.name << tt.time  << endl;
		if (!in.eof()) {
			out << tt.id << " " << tt.isInGarage << " ";
			for (int i = 0; i < 40; i++) {
				out << tt.name[i];
			}
			for (int i = 0; i < 5; i++) {
				out << tt.time[i];
			}
			out << endl;
		}
	}
}
void textToBin(ifstream& in, ofstream& out) {
	taxi tt(1);
	char k;
	while (in >> tt.id)
	{
		in >> tt.isInGarage;
		in.get(k);
		for (int i = 0; i < 40; i++) {
			in.get(tt.name[i]);
		}
		for (int i = 0; i < 5; i++) {
			in.get(tt.time[i]);
		}
		//cout<<tt.id << tt.isInGarage << tt.name << tt.time;
		out.write(reinterpret_cast<const char*>(&tt), sizeof(tt));
	}

}
void printBin(string  i) {
	ifstream in(i, ios_base::binary);
	taxi tt(1);
	while (!in.eof())
	{
		in.read(reinterpret_cast<char*>(&tt), sizeof(tt));
		if (!in.eof()) {
			cout << tt.id << " " << tt.isInGarage << " ";
			for (int i = 0; i < 40; i++) {
				cout << tt.name[i];
			}
			for (int i = 0; i < 5; i++) {
				cout << tt.time[i];
			}
			cout << endl;
		}
	}
	in.close();
}

//void getDataBin(ifstream& in, int n, taxi& t)
//{
//	in.seekg(0, ios::beg);
//	//cout << in.tellg() << endl;
//	//fstream fdirect(namefile, ios::binary | ios::out | ios::in);
//	in.seekg((n - 1) * sizeof(t), ios::beg);
//	//cout << in.tellg() << endl;
//	in.read((char*)&t, sizeof(t));
//}
void getDataBin(string& in, int n, taxi& t) {
	ifstream f(in, ios::binary);
	f.seekg(n * sizeof(taxi), ios::beg);
	f.read((char*)&t, sizeof(taxi) );
	f.close();
}


int getCountLineBin(ifstream& in) {
	taxi tt(1);
	int q = 0;
	while (!in.eof())
	{
		in.seekg(q * (int)sizeof(tt), ios::beg);
		in.read((char*)&tt, sizeof(tt));
		q++;
	}
	return q - 1;
}
int getCountLines(ifstream& in) {
	string s;
	int q = 0;
	while (!in.eof()) {
		if (!in.eof()) {
			getline(in, s);
			q++;
		}
	}
	return q - 1;
}
void delLineText(ifstream & in, int key, string name){
	int q = getCountLines(in) + 1;
	in.close();
	in.open(name);
	bool found = 0;
	string* arr = new string[q];
	for (size_t i = 0; i < q; i++)
	{
		getline(in, arr[i]);
	}
	for (int i = 0; i < q; i++) {
		int p = arr[i].find_first_of(" ");
		string s;
		s = arr[i].substr(0, p);
		int iddd = stoi(s);
		if (iddd == key) {
			arr[i] = arr[q - 1];
			found = 1;
			break;
		}
	}
	in.close();
	ofstream o(name);
	if (found) q--;
	for (int i = 0; i < q; i++) {
		if (i != 0) o << endl;
		o << arr[i];
	}
	o.close();
	delete[] arr;
}
//void LeaveGarage(int id, string file) {
//	taxi tt;
//	char k;
//	ifstream in(file);
//	taxi* t = new taxi[getCountLines(in)];
//	in.close();
//	in.open(file);
//	int n = 0;
//	while (in >> t[n].id)
//	{
//		in >> t[n].isInGarage;
//		in.get(k);
//		for (int k = 0; k < 40; k++) {
//			in.get(t[n].name[k]);
//		}
//		for (int k = 0; k < 5; k++) {
//			in.get(t[n].time[k]);
//		}
//		n++;
//	}
//	in.close();
//	ofstream out(file);
//	out.flush();
//	for (int j = 0; j <= n - 1; j++) {
//		if (t[j].id == id) {
//			t[j].isInGarage = 0;
//			out << t[j].id << " " << t[j].isInGarage << " ";
//			for (int i = 0; i < 40; i++) {
//				out << t[j].name[i];
//			}
//			for (int i = 0; i < 5; i++) {
//				out << t[j].time[i];
//			}
//			out << endl;
//		}
//		else {
//			out << t[j].id << " " << t[j].isInGarage << " ";
//			for (int i = 0; i < 40; i++) {
//				out << t[j].name[i];
//			}
//			for (int i = 0; i < 5; i++) {
//				out << t[j].time[i];
//			}
//			out << endl;
//		}
//	}
//	out.close();
//}
//void getInGarageList(string name, string nameEx) {
//	taxi* t;
//	char k;
//	ifstream in(name);
//	int ff = getCountLines(in);
//	in.close();
//	t = new taxi[ff];
//	in.open(name);
//	for (int i = 0; i < ff; i++) {
//		in >> t[i].id;
//		in >> t[i].isInGarage;
//		in.get(k);
//		for (int j = 0; j < 40; j++) {
//			in.get(t[i].name[j]);
//		}
//		for (int j = 0; j < 5; j++) {
//			in.get(t[i].time[j]);
//		}
//	}
//	in.close();
//	ofstream out(nameEx, ios_base::binary);
//	for (int i = 0; i < ff; i++) {
//		if (t[i].isInGarage == 1) {
//			out.write((char*)&t[i], sizeof(taxi));
//		}
//	}
//	delete[] t;
//	out.close();
//}
////void delDataBin(FILE* in, int key) {
////	
////	taxi last(1), t(1), l(NULL);
////	int q=getCountLineBin(in);
////	fseek(in, sizeof(taxi), SEEK_SET);
////	last = getDataBin(in, q);
////	fseek(in, sizeof(taxi), SEEK_SET);
////	if (last.id == key) {
////		fwrite(&l, sizeof(last), 1, in);
////		return;
////	}
////	for(int i=0;i<q;i++){
////		fseek(in, sizeof(last) * i, SEEK_SET);
////		fread(&t, sizeof(taxi), 1, in);
////		if (t.id == key) {
////			fseek(in, sizeof(last) *i, SEEK_SET);
////			fwrite(&last, sizeof(last) * 1, 1, in);
////			fseek(in, sizeof(last) * (q-1), SEEK_SET);
////			fwrite(&l, sizeof(last), 1, in);
////			return;
////		}
////	}
////}
//void delDataBin(ifstream& in, int key, string name, int numinHash) {
//
//	taxi last(1), t(1), l(0);
//	int q = getCountLineBin(in);
//	in.close();
//	in.open(name, ios_base::binary | ios::in);
//	taxi* arr = new taxi[q];
//	for (size_t i = 0; i < q; i++)
//	{
//		getDataBin(in, i, arr[i]);
//	}
//	in.close();
//	ofstream out;
//	
//	
//	cout << endl << endl<< last.id << last.name << endl << endl;
//	/*fseek(in, sizeof(taxi), SEEK_SET);*/
//	in.open(name, ios_base::binary);
//	//out.open(name, ios_base::binary);
//	if (last.id == key) {
//		//fwrite(&l, sizeof(last), 1, in);
//		out.seekp((q - 1) * sizeof(t), ios::beg);
//		out.write((char*)&l, sizeof(l));
//		out.close();
//		return;
//	}
//	for (int i = 0; i < q; i++) {
//		//fseek(in, sizeof(last) * i, SEEK_SET);
//		in.seekg((i) * sizeof(taxi), ios::beg);
//		//fread(&t, sizeof(taxi), 1, in);
//		in.read((char*)&t, sizeof(t));
//		if (t.id == key) {
//			/*fseek(in, sizeof(last) * i, SEEK_SET);
//			fwrite(&last, sizeof(last) * 1, 1, in);
//			fseek(in, sizeof(last) * (q - 1), SEEK_SET);
//			fwrite(&l, sizeof(last), 1, in);*/
//			in.close();
//			out.open(name, ios_base::binary|ios::app);
//			out.seekp((i) * sizeof(last), ios::beg);
//			cout << out.tellp() << endl;
//			out.write((char*)&last, (int)sizeof(last));
//			out.seekp((q) * sizeof(last), ios::beg);
//			cout << out.tellp() << endl;
//			out.write((char*)&l, (int)sizeof(last));
//			out.close();
//			return;
//		}
//	}
//	out.close();
//}
void delDataBin(string& fi, int numinHash) {
	fstream file(fi, ios::binary | ios::out|ios::in);
	taxi deleted(-1);
	
	file.seekg((numinHash) * sizeof(deleted), ios::beg);
	file.write((char*)&deleted, sizeof(taxi));
	file.close();
}
void delDataBinOnID(string& f, int id) {
	fstream file(f, ios::binary | ios::in);
	vector<taxi> t;
	taxi buf;
	while (file.read((char*)&buf, sizeof(taxi))) {
		t.push_back(buf);
	}
	taxi deleted(-1);
	file.close();
	file.open(f, ios::binary | ios::out);

	for (int q = 0; q < t.size(); q++)
		if (t[q].id != id) {
			file.write((char*)&t[q], sizeof(taxi));
		}
		else {
			file.write((char*)&deleted, sizeof(taxi));
		}

	file.close();
}
void writeTonPlace(string& f, int place, taxi& t) {
	fstream file(f, ios::binary | ios::out | ios::in);
	file.seekg((place) * sizeof(taxi), ios::beg);
	file.write((char*)&t, sizeof(taxi));
	file.close();
}


void testBinF() {
	string s="testq.txt", ss="testqQQQQ.bin";
	ifstream in;
	ofstream out;
	cout << "reading from testq.txt" << endl;
	in.open("testq.txt");
	cout << "Got Text:" << endl;
	printFile(in);
	in.close();
	in.open(s);

	cout << "writing to "+ss << endl;
	out.open(ss, ios_base::binary);
	textToBin(in, out);
	cout << "Got Bin" << endl;
	out.close();
	in.close();
	printBin(ss);

	delDataBinOnID(ss, 45);
	cout << "Deleted id 45 ( special value for hash table)" << endl;
	printBin(ss);

	in.close(); out.close();
	string t = "157 1                                              ";
	cout << "Adding taxi: 157 1                                               to 9th pos" << endl;
	taxi wrfwfe;
	wrfwfe.id = 157;
	wrfwfe.isInGarage = 1;
	writeTonPlace(ss, 8, wrfwfe);
	printBin(ss);
}
