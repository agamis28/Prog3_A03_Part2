#include "phone_number.h"

namespace phone_number {
	// Setting a private phone num variable with phone number function
	phone_number::phone_number(std::string num) : num{ num } {

		int digitCount = 0;
		std::string newNumber = "";

		for (std::string::size_type i = 0; i < phone_number::num.length(); i++)
		{
			// Check if digit
			if (std::isdigit(phone_number::num[i])) {

				// Check if first number is 1
				if (digitCount == 0 && phone_number::num[i] == '1') {
					// Dont do anything, just dont add the number
				}
				else {
					// Add to digit count and add string to new number
					digitCount++;
					newNumber += phone_number::num[i];
				}
			}
		}

		// Debug
		// std::cout << "Digit Count: " << digitCount << "\n";


		// Throw exception error if number has invalid numbers in position index 0 and 3 of number
		if (newNumber[0] == '0' || newNumber[0] == '1' || newNumber[3] == '0' || newNumber[3] == '1') {
			throw std::domain_error("Invalid phone number");
		}

		// Throw exception error if number has incorrect number of digits
		if (digitCount != 10) {
			throw std::domain_error("Invalid phone number");
		}

	};

	// Outputting cleaned up a phone number if haven't thrown a exception error
	std::string phone_number::number() const {
		int digitCount = 0;
		std::string newNumber = "";

		// Loop through original number to find all digits and to check first is 1, if it is then ignore the first number 1
		for (std::string::size_type i = 0; i < phone_number::num.length(); i++)
		{
			// Check if digit
			if (std::isdigit(phone_number::num[i])) {
				// Check if first number is 1
				if (digitCount == 0 && phone_number::num[i] == '1') {
					// Dont do anything, just dont add the number
				}
				else {
					digitCount++;
					newNumber += phone_number::num[i];
				}
			}
		}

		// Output new number
		std::cout << newNumber << "\n";
		return newNumber;
	};

}  // namespace phone_number
