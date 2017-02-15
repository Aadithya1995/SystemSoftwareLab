#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	string a;
	char ch;
	int count=0;
	ofstream myfile;
	myfile.open("first.dat");
	myfile<<"first data into the file\n";
	myfile<<"good boy";
	myfile.close();

	ifstream myfile1;
	myfile1.open("first.dat");
	int c=myfile1.tellg();
	cout<<"initial seek position"<<c<<endl;
	//myfile1.seekg(0,ios::end);
	//int b=myfile1.tellg();
	//cout<<b;
	while(getline(myfile1,a))
	{
	cout<<a<<endl;
	count++;
	}
	cout<<"total number of lines is "<<count<<endl;
	
	myfile1.clear();
	myfile1.seekg(0,ios::beg);
	int b=myfile1.tellg();
	cout<<b;
	   


	while(!myfile1.eof())
    	{
        cout<<"At position : "<<myfile1.tellg();   //current position
        myfile1>>a;   //read character from file
        cout<<" Character \""<<a<<"\""<<endl;
    	}
 
	//cout<<b;
	
	
	return 0;
}
