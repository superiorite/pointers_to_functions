#include <iostream>
#include <string>

using namespace std;

string GetDataFromBD()
{
	return "Data from BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

void ShowInfo(string (*foo)())
{
	cout << foo() << endl;
} 

int main()
{
	ShowInfo(GetDataFromWebServer);
}	
