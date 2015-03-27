#include <stdexcept>

class NonPositiveSideException : public std::logic_error {
	double side;

public :
	NonPositiveSideException(double side) : logic_error("Non-Positive Error") {
		this->side = side;
	}

	double getSide() { return side; }
};