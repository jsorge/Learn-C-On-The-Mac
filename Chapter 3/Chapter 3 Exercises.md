# Learn C on the Mac

## Chapter 3 Exercises

1. Compiler error that says "expected expression". This is because the compiler is looking for a method call when it sees the (. The program will not compile.
2. The compiler gave no error before compiling, but there was a linker error that prevented a successful build. This is because C is case sensitive and is looking for main and not MAIN
3. A bunch of parse errors come up. The compiler sees the function declaration and expects the body opening { to show up but it doesn't. Instead it sees the function call of SayHello().
4. There is an error in the main function where SayHello is called because that function was not declared. There is an error on the definition of SayHello that says conflicting types. This again because it was not declared.