#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "struct.h"
#include "hash.h"

void readBinAddTab1(HashTale& hh, int pos, string filename) {
	taxi t(-1);
	getDataBin(filename, pos, t);
	if (t.id == 0 || t.id == -1)
		return;
	hh.add(t.id, pos);
}

void formTAbleFromFile(HashTale& hh, string filename) {
	taxi tt(1);
	ifstream in(filename, ios::binary);
	int n = getCountLineBin(in);
	in.close();
	for (int i = 0; i < n; i++) {
		readBinAddTab1(hh, i, filename);
	}
}

void delTAbleDelPlikID(int id, HashTale& ht, string filename) {
	ht.delIDTabl(id);
	delDataBinOnID(filename, id);
}
void getelem(int id, taxi& t, HashTale& ht) {
	pair<int, int> a = ht.getelemT(id);
	getDataBin(ht.file, a.second, t);
}