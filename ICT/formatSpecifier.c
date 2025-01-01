#include <stdio.h>
/*
%c- For character type.
%d- For signed integer type.
%f- For float type.
%g or %G- For float type with the current precision.
%ld or %li- Long
%lf- Double
%Lf- Long double
%lu- Unsigned int or unsigned long
%lli or %lld- Long long
%llu- Unsigned long long
%o- Octal representation
%p- Pointer
%s- String
%u- Unsigned int
%x or %X- Hexadecimal representation
%n- Prints nothing
%%- Prints % character
*/

int main()
{
    // Integer types
    int i = 42;
    unsigned int ui = 300;
    long int li = 1234567890L;
    unsigned long int uli = 1234567890UL;
    short int si = 32000;
    unsigned short int usi = 65000;

    printf("Integer types:\n");
    printf("Decimal int: %%d -> %d\n", i);
    printf("Unsigned decimal int: %%u -> %u\n", ui);
    printf("Short int: %%hd -> %hd\n", si);
    printf("Unsigned short int: %%hu -> %hu\n", usi);
    printf("Long int: %%ld -> %ld\n", li);
    printf("Unsigned long int: %%lu -> %lu\n", uli);

    // Hexadecimal and Octal
    printf("\nHexadecimal and Octal:\n");
    printf("Hexadecimal int (lowercase): %%x -> %x\n", i);
    printf("Hexadecimal int (uppercase): %%X -> %X\n", i);
    printf("Octal int: %%o -> %o\n", i);

    // Character
    char ch = 'A';
    printf("\nCharacter:\n");
    printf("Character: %%c -> %c\n", ch);

    // Floating-point types
    float f = 3.14159f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238462643L;

    printf("\nFloating-point types:\n");
    printf("Float: %%f -> %f\n", f);
    printf("Double: %%lf -> %lf\n", d);
    printf("Long double: %%Lf -> %Lf\n", ld);

    printf("\nScientific notation:\n");
    printf("Double (scientific notation, lowercase): %%e -> %e\n", d);
    printf("Double (scientific notation, uppercase): %%E -> %E\n", d);

    printf("\nShortest representation:\n");
    printf("Double (shortest representation, lowercase): %%g -> %g\n", d);
    printf("Double (shortest representation, uppercase): %%G -> %G\n", d);

    // Pointers
    int *p = &i;
    printf("\nPointer:\n");
    printf("Pointer address: %%p -> %p\n", (void *)p);

    // Strings
    char str[] = "Hello, world!";
    printf("\nString:\n");
    printf("String: %%s -> %s\n", str);

    // Percentage sign
    printf("\nSpecial characters:\n");
    printf("Percentage sign: %% -> %%\n");

    // Signed and unsigned char
    signed char sc = -127;
    unsigned char uc = 255;
    printf("\nSigned and unsigned char:\n");
    printf("Signed char: %%hhd -> %hhd\n", sc);
    printf("Unsigned char: %%hhu -> %hhu\n", uc);

    // Alternative forms
    printf("\nAlternative forms:\n");
    printf("Octal with prefix: %%#o -> %#o\n", i);
    printf("Hexadecimal with prefix: %%#x -> %#x\n", i);

    // Width and precision
    printf("\nWidth and Precision:\n");
    printf("Width 10, Precision 2: %%10.2f -> %10.2f\n", d);
    printf("Width 10, Left-justified: %%-10.2f -> %-10.2f\n", d);

    return 0;
}
