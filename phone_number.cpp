#include "phone_number.h"

namespace phone_number {
	// Setting a private phone num variable with phone number function
	phone_number::phone_number(std::string num) : num{ num } {};

	// Cleaning up a phone number
	std::string phone_number::number() const {
		bool validNumber = true;
		int digitCount = 0;
		std::string newNumber = "";

		for (int i = 0; i < phone_number::num.length(); i++)
		{
			// Check if digit
			if (std::isdigit(phone_number::num[i])) {
				digitCount++;
				// Check if first number is 1
				if (digitCount == 1 && phone_number::num[i] == '1') {
					// Dont do anything, just dont add the number
				}
				else {
					newNumber += phone_number::num[i];
				}
			}
		}

		std::cout << "Digit Count: " << digitCount << "\n";

		if (digitCount != 10) {
			throw std::domain_error("Invalid phone number");
			validNumber = false;
		}

		std::cout << newNumber << "\n";
		return newNumber;
	};

}  // namespace phone_number
