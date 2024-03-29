#include "8_4.h"

int main8_4()
{
	Int iX(7);
	Int iY(11);
	Int iZ;


	iZ = iX + iY;
	std::cout << "Summation ressult: "; iZ.displayInt(); // 18

	iZ = iY - iX;
	std::cout << "Substraction ressult: "; iZ.displayInt(); // 4

	iZ = iX / iY;
	std::cout << "Divisiom ressult: "; iZ.displayInt(); // 0

	iZ = iY * iX;
	std::cout << "Increase ressult: "; iZ.displayInt(); // 77

	return 0;
}



void Int::checkOverflow(long double valueOverflow) const
{
	// int size
	if (valueOverflow > 2147483648 && valueOverflow < -2147483648)
	{
		std::cout << "Overflow!\n";
		std::cout << "Your value size: " << valueOverflow;
		exit(1);
	}
}


Int Int::operator+(const Int &temp) const
{
	long double returnValue = m_temp + temp.m_temp;

	checkOverflow(returnValue);
	
	return returnValue;
}

Int Int::operator-(const Int &temp) const
{
	long double returnValue = m_temp - temp.m_temp;

	checkOverflow(returnValue);

	return returnValue;
}

Int Int::operator/(const Int &temp) const
{
	long double returnValue = m_temp / temp.m_temp;

	checkOverflow(returnValue);

	return returnValue;
}

Int Int::operator*(const Int &temp) const
{
	long double returnValue = m_temp * temp.m_temp;

	checkOverflow(returnValue);

	return returnValue;
}
