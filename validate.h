
#ifndef SICT_VALIDATE_H_
#define SICT_VALIDATE_H_
#include <cstring>

namespace sict {
	template <class tp>
	bool validate(const tp& minimum, const tp& maximum, const tp* testValue, int number, bool* result) 
	{
		int  i= 0;
		bool rtn = true;
		int count = 0;
		for (i = 0; i < number;i++) {
			result[i] = (minimum <= testValue[i] && maximum >= testValue[i]);
			if (result[i])
				count++;
		}	
		rtn=count== number;
		return rtn;
	}
}
#endif