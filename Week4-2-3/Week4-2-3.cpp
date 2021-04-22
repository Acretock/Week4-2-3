#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	//vector<vector<int>> table;
	ifstream fin("text.txt");
	ofstream fout("out.txt");
	fin >> n >> m;
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fin >> tmp;
			fin.ignore(1);
			if (j != (m - 1))
				cout<< setiosflags(ios_base::left) << setw(10) << setfill(' ' ) << tmp;
			else cout << tmp;
		}
		if (i != (n - 1))
			cout << endl;
	}
	return 0;
}