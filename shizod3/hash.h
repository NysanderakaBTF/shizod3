#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <list>
#include <random>
#include <ctime>
#include <algorithm>
#include "struct.h"
class HashTale {
public:
	int filled;
	int size;
	string file;
	vector<vector<pair< int, int> > > tabl;
	HashTale(string f,int s = 10) {
		tabl.resize(s);
		size = s;
		filled = 0;
		file = f;
		ifstream fff(f, ios_base::binary);
		fff.close();
	}

	void addAndWrite(taxi& t) {
		if (float(filled) / float(size) > 0.75) {
			rehash();
		}
		int place_t = hF(t.id);
		int place_in_file = filled++;
		tabl[place_t].push_back(make_pair(t.id, place_in_file));
		writeTonPlace(file, place_in_file, t);
	}
	void add(int id, int place) {
		if (float(filled) / float(size) > 0.75) {
			rehash_dontWrite();
		}
		filled++;
		int place_t = hF(id);
		tabl[place_t].push_back(make_pair(id, place));
	}
	void rehash() {
		vector <taxi> ddd(filled);
		tabl.clear();
		for (int i = 0; i < filled; i++) {
			getDataBin(file, i, ddd[i]);
		}
		size *= 2;
		tabl.resize(size);
		filled = 0;
		for (int i = 0; i < ddd.size(); i++) {
			if (ddd[i].id != -1) {
				addAndWrite(ddd[i]);
			}
		}
	}
	void rehash_dontWrite() {
		vector <pair< int, int>> ddd;
		for (int i = 0; i < tabl.size(); i++) {
			for (int j = 0; j < tabl[i].size(); j++) {
				ddd.push_back(tabl[i][j]);
			}
		}
		tabl.clear();
		size *= 2;
		tabl.resize(size);
		filled = 0;
		for (int i = 0; i < ddd.size(); i++) {
			add(ddd[i].first, ddd[i].second);
		}
	}
	int hF(int id) {
		return id % size;
	}

	void delIDTabl(int id) {
		int place = hF(id);
		for (int i = 0; i < tabl[place].size(); i++) {
			if (tabl[place].at(i).first == id) {
				tabl[place].erase(tabl[place].begin() + i);
			}
		}
	}
	pair<int, int> getelemT(int id) {
		int place = hF(id);
		for (int i = 0; i < tabl[place].size(); i++) {
			if (tabl[place].at(i).first == id) {
				return tabl[place].at(i);
			}
		}
	}

	void PrintTable() {
		for (int i = 0; i < tabl.size(); i++) {
			cout << "Hash num " << i << endl;
			for (int j = 0; j < tabl[i].size(); j++) {
				cout << "Id " << tabl[i][j].first << " pos" << tabl[i][j].second << " ";
			}
			cout << endl;
		}
	}
	void testHeshT() {
		cout << "Enter ID" << endl;
		int i;
		cin >> i;
		cout << "Size = " << size << " Got hash " << hF(i)<<endl;
		int ids[] = { 1 ,2 ,3 ,5 , 8 ,7 ,98, 9 ,45 ,23 ,100 };
		cout << "test ids: 1 ,2 ,3 ,5 , 8 ,7 ,98"  << endl;
		int q = 0;
		while (q < 7) {
			add(ids[q], q);
			q++;
		}
		cout << "Formed tadle: " << endl;
		PrintTable();
		cout << "Adding 9, 45 ,23 ,100" << endl;
		while (q < 10) {
			add(ids[q], q);
			q++;
		}
		cout << "Formed tadle: " << endl;
		PrintTable();

		cout <<"Deleting id 2";
		delIDTabl(2);
		cout << "Formed tadle: " << endl;
		PrintTable();
		cout << "Deleting id 98";
		delIDTabl(98);
		cout << "Formed tadle: " << endl;
		PrintTable();

		cout << "Searching id 23 in tabl" << endl;
		pair<int, int > aaaa = getelemT(23);
		cout << aaaa.first << " " << aaaa.second << endl;

	}


};