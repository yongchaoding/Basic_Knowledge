#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	if( 3 != argc )
	{
		cout << "Please input src file and dest file!" << endl;
		return -1;
	}
	cout << "argv[1] is " << argv[1] << endl;
	cout << "argv[2] is " << argv[2] << endl;
	ifstream src;
	ofstream dest;		//write into file
	src.open( argv[1]);
	dest.open( argv[2]);

	if( !src )
	{
		cerr << "Open file " << argv[1] << " faiture!" << endl;
		return 0;
	}
	if( !dest )
	{
		cerr << "Open file " << argv[2] << " faiture!" << endl;
		return 0;
	}
	
	char str[100];
	char ch;
	string line;
	//src.seekg(ios::beg);
	while(1)
	{
		if( src.peek() == EOF)
		{
			cout << "File end!" << endl;
			break;
		}
		/*****
		src >> str;
		cout << str << endl;	
		dest << str;
		******/
		//src.get(ch);
		//dest << ch;

		getline(src, line);
		dest << line << "\n";
	}
	src.close();
	dest.close();
	return 0;
}
