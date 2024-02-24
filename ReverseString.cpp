#include "ReverseString.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <list>

using namespace std;

int main() {

	ifstream inputHolder("Input.txt");
	ofstream outHolder("Output.txt");
	string strInput;
	

	while (inputHolder >> strInput)
	{
		int count = 1;
		int strInputLength = strInput.length();
		
			for (int i = strInputLength - 1; i >= 0; i--) {
				
				char strHolder = strInput[i];
				list<char> strHolderList = { strHolder };
				
				list<char>::iterator itr = strHolderList.begin();
				if (count == strInputLength) {
					
					cout << *itr << " ";
					outHolder << *itr << " ";
					
				}
				else
				{
					cout << *itr;
					outHolder << *itr;
				
				}
				
				

				
				count += 1;
			}
			
		
	}
	return 0;
};