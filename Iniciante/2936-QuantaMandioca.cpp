#include <iostream>
using namespace std;

int main(void)
{
	const int curu = 300, boit = 1500, boto = 600, mapi = 1000, iara = 150, chica = 225;
	int qtcuru, qtboit, qtboto, qtmapi, qtiara;
	cin >> qtcuru >> qtboit >> qtboto >> qtmapi >> qtiara;
	cout << ((curu * qtcuru) + (boit * qtboit) + (boto * qtboto) + (mapi * qtmapi) + (iara * qtiara)) + chica << endl;
	return 0;
}