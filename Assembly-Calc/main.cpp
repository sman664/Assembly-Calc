#include <iostream>
#include <string>
#include <Windows.h>

int main() 
{
	std::cout << "Hello! Please enter in this format: <instruction> <operand1> <operand2>" << std::endl;
	std::cout << "NOTE: All operands should be entered in Hex" << std::endl;
	std::cout << "The format also operates exactly like assembly code" << std::endl;
	
	uintptr_t answer;
	
	while (true)
	{
		std::string instr, operand;
		int strLength;
		uintptr_t operand1, operand2;

		/*NOTE: it is important that you keep convert both the input and the output to hex. Otherwise you will get different answers*/
		std::cin >> instr;
		//std::cin >> operand;
		std::cin >> std::hex >> operand1;
		std::cin >> std::hex >> operand2;

		//strLength = operand.length();
		//char char_array[strLength + 1];



		//if (operand == "ans")
		//{
		//	operand1 = answer;
		//}
		//else
		//{
		//	std::cout << std::hex << operand;
		//	operand1 = stoi(operand);
		//}

		if (instr == "rol")
		{
			uintptr_t num;
			num = _rotl64(operand1, operand2);
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else if (instr == "ror")
		{
			uintptr_t num;
			num = _rotr64(operand1, operand2);
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		//shift instructions not fully tested but are assumed to work correctly on 64 bit integers
		else if (instr == "shl")
		{
			uintptr_t num;
			num = operand1<<operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else if (instr == "shr")
		{
			uintptr_t num;
			num = operand1>>operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else if (instr == "add")
		{
			uintptr_t num;
			num = operand1 + operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else if (instr == "sub")
		{
			uintptr_t num;
			num = operand1 - operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		//AND and OR instructions not fully tested but are assumed to work correctly on 64 bit integers
		else if (instr == "or")
		{
			uintptr_t num;
			num = operand1 | operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else if (instr == "and")
		{
			uintptr_t num;
			num = operand1 & operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		//This has been tested with 64 bit hex values
		else if (instr == "xor")
		{
			uintptr_t num;
			num = operand1 ^ operand2;
			std::cout << std::hex << num << std::endl;

			answer = num;
		}
		else
		{
			//std::cout << "Invalid format or unsupported. Try again" << std::endl;
			return false;
		}
			

	}

	return 0;
}

