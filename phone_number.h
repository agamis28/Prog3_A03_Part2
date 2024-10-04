#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H
#include <string>
#include <algorithm>
#include <iostream>

namespace phone_number {
	class phone_number {
		std::string num;
	public:
		phone_number(std::string);

		std::string number() const;
	};
}  // namespace phone_number

#endif // PHONE_NUMBER_H