#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int DD, MM, yy, YY;
	cout<< "Enter your birthdate as DD-MM-yy-YY: \n";
	cin>> DD >> MM >> yy >> YY;
	cout<< "Your Magic Square is: \n";
	cout<< DD << setw(5) << MM << setw(5) << yy << setw(5) << YY << endl;
	cout<< YY + 1 << setw(5) << yy - 1 << setw(5) << MM - 3 << setw(5) << DD + 3 << endl;
	cout<< MM - 2 << setw(5) << DD + 2 << setw(5) << YY + 2 << setw(5) << yy - 2 << endl;
	cout<< yy + 1 << setw(5) << YY - 1 << setw(5) << DD + 1 << setw(5) << MM - 1 << endl;
	return 0;
}