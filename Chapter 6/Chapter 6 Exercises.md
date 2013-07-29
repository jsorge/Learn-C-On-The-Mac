# Learn C on the Mac Exercises
## Chapter 6

1. Each of the following examples contains a syntax or logical error. What is it? 
	* if i                 i + +; 
		* If statement must be surrounded by parens (I missed this one)
	* for ( i = 0; i < 20; i + + )                 i--;
		* This will be an infinite loop 
	* while ( ) i + +; 
		* This will never evaluate true 
			* Missing expression - got wrong
	* do ( i + + )                 until ( i = = 20 ); 
		* C doesn't have do until, it has do while
			* Should read do statement while (expression)
	* switch ( i ) {                 case "hello":                 case "goodbye":                         printf( "Greetings." );                         break;                 case default:                         printf( "Boring." )                }
		* Swich statements always have to evaluate numeric constants
	* if ( i < 20 )                 if ( i = = 20 )                         printf( "Lonely..." ); 
		* The inner if statement will never be true because i will always be less than 20
	* while ( done = true )                 done = ! done; 
		* What does !done mean? That or the " " between ! and done is wrong
			* They are using the assignment = instead of the evaluating == operator
	* for ( i = 0; i < 20; i* 20 )                 printf( "Modification..." );
		* i will always evaluate to 0 because it is 0 being multiplied by 20