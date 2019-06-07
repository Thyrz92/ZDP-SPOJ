#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int ile;

int main()
{
	cin >> ile;
	for (int q = 0; q < ile; q++)
	{
		int liczba;
		cin >> liczba;
		string aa = to_string(liczba);
		int nowa_liczba = liczba;
		int w = 0;
		int i = 0;
		while (i < aa.size())
		{
			if (aa[i] == aa[aa.size() - 1 - i])
			{
				i++;
				continue;
			}

			else
			{
				i = 0;
				string odwrotny;
				for (int x = (aa.size() - 1); x >= 0; x--)
					odwrotny.push_back(aa[x]);
				int konwerter_a = stoi(aa);
				int konwerter_b = stoi(odwrotny);

				nowa_liczba = konwerter_a + konwerter_b;
				w++;
				aa = to_string(nowa_liczba);
			}
		}
		cout << nowa_liczba << " " << w << endl;
	}
	return 0;
}