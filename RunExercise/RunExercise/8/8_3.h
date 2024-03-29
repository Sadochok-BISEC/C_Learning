// Overloaded operation '+' summations
// two 'time'

#include "..\stdafx.h"

#pragma once

namespace EightThree {

	class Time
	{
	public:

		Time() : mHours(0), mMinutes(0), mSeconds(0) {}
		Time(unsigned int hours, unsigned int minutes, unsigned int seconds) :
			mHours(hours), mMinutes(minutes), mSeconds(seconds)
		{
		}

		void displayTime() const
		{
			std::cout << mHours << ":" << mMinutes << ":" << mSeconds << "\n";
		}

		Time operator +(const Time &time) const;

	private:

		unsigned int mHours, mMinutes, mSeconds;

	};
}