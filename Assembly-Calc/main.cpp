#include <iostream>
#include <string>
#include <Windows.h>

int main() 
{
	std::cout << "Hello! Please enter in this format: <instruction> <operand1> <operand2>" << std::endl;
	std::cout << "NOTE: All operands should be entered in Hex" << std::endl;
	
	uintptr_t answer;
	
	while (true)
	{
		std::string instr, operand;
		uintptr_t operand1, operand2;

		/*NOTE: it is important that you keep convert both the input and the output to hex. Otherwise you will get different answers*/
		std::cin >> instr;
		std::cin >> std::hex >> operand1;
		std::cin >> std::hex >> operand2;

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
		else
		{
			//std::cout << "Invalid format or unsupported. Try again" << std::endl;
			return false;
		}
			

	}

	return 0;
}
