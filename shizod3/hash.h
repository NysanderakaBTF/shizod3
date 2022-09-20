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
	int filled;
	int size;
	string file;
	vector<vector<pair< int, int> > > tabl;
public:
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
	void add(taxi& t, int place) {
		if (float(filled) / float(size) > 0.75) {
			rehash();
		}
		int place_t = hF(t.id);
		tabl[place_t].push_back(make_pair(t.id, place));
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
	int hF(int id) {
		return id % size;
	}
	void delID(int id) {
		int place = hF(id);
		for (int i = 0; i < tabl[place].size(); i++) {
			if (tabl[place].at(i).first == id) {
				delDataBin(file, tabl[place].at(i).second);
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
	void getelem(int id, taxi& t) {
		int place = hF(id);
		int pp = 0;
		for (int i = 0; i < tabl[place].size(); i++) {
			if (tabl[place].at(i).first == id) {
				pp = tabl[place].at(i).second;
			}
		}
		getDataBin(file, pp, t);
	}


};