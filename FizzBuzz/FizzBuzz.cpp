#include "FizzBuzz.h"
#include "pch.h"

using namespace std;
string fizzBuzz(int inputnumber) {
	if ((inputnumber % 3) == 0)
		return "FIZZ";
	else 
		return to_string(inputnumber);

}
