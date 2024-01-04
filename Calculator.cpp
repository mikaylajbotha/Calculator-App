/*
 * Calculator.cpp
 *  Date: 01/03/23
 *  Author: Mikayla-Joy Botha
 */

#include <iostream>

using namespace std;

int main() // BUG 1: Switched void main() to int main() for the main function
{
	char statement[100];
	int op1, op2;
	char operation;
	
	char answer='y'; // BUG 2: Removed the double quotes and added single quotes: "Y"-> 'Y'
	while (answer=='y' || answer == 'Y') // BUG 3: Added the condition incase the user enters 'Y'
	{
		cout << "Enter expression" <<endl;
		cin >> op2 >> operation >> op1;
		
		if (operation == '+')       // BUG 4: Removed the semicolon, and changed double quotes to single quotes
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;   // BUG 5: Changed >> to << for correct output
	
	
		 else if (operation == '-')   // BUG 6: Changed "if" to "else if", removed the semicolon
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;    // BUG 7: Changed >> to << for correct output
			
			
		else if (operation == '*')     // BUG 8: Changed "if" to "else if"
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;     // BUG 9: Switched / to * for correct output
			
			
		else if (operation == '/')       // BUG 10: Changed "if" to "else if"
			cout << op1 << " / " << op2 << " = " << static_cast<double>(op1) / static_cast<double>(op2) << endl; ;    // BUG 11: Switched * to / for correct output, changed "op1/op2" to "static_cast<double>(op1) / static_cast<double>(op2)" which casts op1 & op2 to doubles before dividing to allow decimal results

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
	
	cout << "Program Finished" << endl; 
	return 0;
}

/*                Bug Fixes and Rationale
BUG 1:  Using "void main()" was incorrect, beccause C++ standard requires that a main function should have the an int return type. The return is used to show exit status, if the return value is 0 then the program execution is successful, if not zero value then there is an error

BUG 2:  In C++ single quotes '' are for individual characters and double quotes " " are for strings. Since "answer" is a single character the correct notation to aviod a syntax error is to use single quotes

BUG 3:  The condition 'Y' was added, so that when the user is prompted that the loop would accept both upper and lower case y as valid input to continue. This makes the program more user friendly

BUG 4:  The semicolon after the if statement would cause the cout line to excute regardless of if the condition for the operation is true or false, which defeats the purpose of the if statement thats why it was incorrect.

BUG 5:  The << is the correct output operator not >>

BUG 6:  Changing if to else if makes sure that only 1 block of code is excuted based on their given conditions. By removing the semicolon, it allows the condition to operate only when the condition is true

BUG 7:  The << is the correct output operator not >>

BUG 8:  Changing if to else if makes sure that only 1 block of code is excuted based on their given conditions. It stops possible errors of  multiple blocks bieng executed when multiple conditions are true

BUG 9:  Switching / to * allows the correct output for the mulitiplication * operator

BUG 10: Changing if to else if makes sure that only 1 block of code is excuted based on their given conditions. It stops possible errors of  multiple blocks bieng executed when multiple conditions are true

BUG 11: Switching * to / allows the correct output for the division / operator, the static_cast is used t
*/





