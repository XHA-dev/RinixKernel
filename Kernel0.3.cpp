#include <iostream>

using namespace std;

int main() 
{
	float ver = 0.2;
	bool uptodate = true;
	string KernelConnection;
	cout << "Please enter a command: ";
	cin >> KernelConnection;

	if(KernelConnection == "Help")
	{
		cout << "Help - Prints out a list of commands\n";
		cout << "Apps - Opens the app menu\n";
		cout << "KernelVersion - Displays the Kernel Version";
		cout << "Insipre - Shows you what inspired me to make this project";
		main();

	}


	if(KernelConnection == "KernelVersion")
	{
		cout << "Version of the kernel ";
		cout << ver;
		cout << "\n";
		main();

	}

	if(KernelConnection == "Apps")
	{
		string appselect;
		cout << "Please enter a app name: \n";
		cout << "Uptodate - checks the kernel to check if the product are uptodate\n";
		cout << "Notes - Open a notes program\n";
		cin  >> appselect;

		if(appselect != "Uptodate")
		{
			if(appselect != "Notes")
			{
				main();
			}
		}

		if(appselect == "Uptodate")
		{
			cout << "Checking kernel!\n";
			cout << "If 0 the kernel is not uptodate\n";
			cout << "If 1 the kernel is uptodate\n";
			cout << uptodate;
			main();
		}	

		if(appselect == "Notes")
		{	
			string noteline1;
			cout << "Welcome to notes\n";
			cout << "\n";
			cin >> noteline1;
			main();
		}
	}	
		if(KernelConnection == "Inspire")
		{
			cout << "Debi os ";
			cout << "https://github.com/debios/debios\n";
			main();
		}

	// Invalid command system
	if(KernelConnection != "Help")
	{
		if(KernelConnection != "KernelVersion")
		{
			if(KernelConnection != "Apps")
			{
				if(KernelConnection != "Inspire")
				{
				cout << "Invalid Command\n";
				main();	
				}			   
			}	
		
		}

	}

}

