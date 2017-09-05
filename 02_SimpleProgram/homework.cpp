#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i;
	int sum;
	cout << "Please input something:" << endl;
	// example 1: cin.ignore and cin.getline
	/***
	char buff[20];
	cin.ignore(7);
	cin.getline(buff, 10);	
	cout << buff << endl;
	// example 2: cin.peek
	char p;
	while( cin.peek() != '\n')
	{
		p = cin.get();
		cout << p;
	}
	cout << endl;

	//example 3: cin.read and cin.gcount
	const int SIZE = 50;
	char buf[SIZE];
	cout << "Please input something : " << endl;
	cin.read(buf, 20);
	cout << "The number of char is " << cin.gcount() << endl;
	cout << "The char information is ";
	cout.write(buf, 20);
	cout << endl;
	*********/
	//example 4: cout.precision() 
	float q = sqrt(3.0);
	int j;
	for(j=0; j<9; j++)
	{
		cout.precision(j);
		cout << q << endl;
	}

	//example 5: cout.width()
	int WIDTH = 4;
	char str[20];
	cout << "Please input txt: " << endl;
	cin.width(5);

	while( cin >> str)
	{
		cout.width(WIDTH++);
		cout << str << endl;
		cin.width(WIDTH);
	}

	/***
	while(cin >> i)
	{
		cout << "The input is " << i << endl;
		//cout << "Receive something" << endl;
		sum += i;
		while(cin.peek() == ' ')
		{
			cin.get();
		}
		if( cin.peek() == '\n')
		{
			break;
		}
	} 
	cout << "The sum is " << sum << endl;
	*****/
	return 0;
}
