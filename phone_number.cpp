#include "phone_number.h"

namespace phone_number {
	// Setting a private phone num variable with phone number function
	phone_number::phone_number(std::string num) : num{ num } {};

	// Cleaning up a phone number
	long phone_number::number() const {
		for each (char letter in phone_number::num)
		{
			if (letter == ' ') {
				phone_number::num.erase(std::remove(phone_number::num.begin(), phone_number::num.end(), letter), phone_number::num.end());

			}
		}
	};

}  // namespace phone_number
