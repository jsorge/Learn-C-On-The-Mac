# Learn C on the Mac Exercises
## Chapter 4

1. Find the error in each of the following code fragments
	* printf( Hello, world );
		* Missing quotes
	* int         myInt     myOtherInt;
		* Missing comma between variables
	* myInt =+ 3;
		* The =+ should be +=
	* printf( "myInt = %d" );
		* There's no integer to fill in the %d
	* printf( "myInt = ", myInt );
		* There's nothing for myInt to fill in
	* printf( "myInt = %d\", myInt );
		* the \ should be \n
	* myInt + 3 = myInt;
		* Should read myInt += 3
	*     int main (int argc, const char * argv[]) {
		    int     myInt;
    		myInt = 3;
    		anotherInt = myInt;

    		return 0;
			}
		* anotherInt wasn't declared.

2. Compute the value of myInt after each code fragment is executed
	* myInt = 5; myInt *= (3+4) * 2;
		* 70
	* myInt = 2; myInt *= ( (3* 4) / 2 ) - 9; 
		* -6
	* myInt = 2; myInt /= 5; myInt--;
		* -1
	* myInt = 25; myInt /= 3 * 2; 
		* 4
	* myInt = (3* 4* 5) / 9; myInt -= (3 + 4) * 2; 
		* -8
	* myInt = 5; printf( “myInt = %d”, myInt = 2 ); 
		* 2
	* myInt = 5; myInt = (3 + 4) * 2;
		* 14
	* myInt = 1; myInt /= (3 + 4) / 6;
		* 1