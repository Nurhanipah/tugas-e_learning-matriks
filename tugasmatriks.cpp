#include<iostream>
using namespace std;

int main(){
	int m[5][5];
	int m1[5][5];
	int m2[5][5];
	
	cout << " M1 " << endl;
	cout << "========" << endl;
	for (int i=0; i<5; i++)
	{
		cout << "========================================" << endl;
		for (int j=0; j<5; j++)
		{
			
			cout << " Masukan baris ke - " << i << "  kolom ke - " << j << " : ";
			cin >> m1[i][j];
		}
	}
	
	cout << endl;
	cout << endl;
	cout <<"==================================="<< endl;
	cout << "                M1                "<< endl;
	cout <<"==================================="<< endl;
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout << m1[i][j] << " \t ";
			
		}
		cout << endl;
		cout << endl;
	}
		
		cout << endl;
		cout << " M2 " << endl;
		cout << "========" << endl;
		for (int i=0; i<5; i++)
	{
		cout << "========================================" << endl;
		for (int j=0; j<5; j++)
		{
			
			cout << " Masukan baris ke - " << i << "  kolom ke - " << j << " : ";
			cin >> m2[i][j];
		}
	}
	
	cout << endl;
	cout << endl;
	cout <<"==================================="<< endl;
	cout << "                M2                "<< endl;
	cout <<"==================================="<< endl;
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout << m2[i][j] << " \t ";
		}
		cout << endl;
		cout << endl;
	}
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			m[i][j] = m1[i][j] + m2[i][j];
		}
	}
	

	cout << endl;
	cout << endl;
	cout << "Hasil Penjumlahan dari M1 + M2"<< endl;
	cout <<"==================================="<< endl;
	cout << "                M                 "<< endl;
	cout <<"==================================="<< endl;
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout << m[i][j] << " \t ";
		}
		cout << endl;
		cout << endl;
	}
	return 0;
	
	
}