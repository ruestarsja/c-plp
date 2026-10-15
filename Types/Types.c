#include <stdbool.h>

int main(void)
{

    /* There's not a ton of consensus on naming conventions in C, but it seems
     * like snake_case is a common choice for local variables.
     * https://www.w3schools.com/c/c_variables_names.php
     */

    /* INTEGERS
     * There's a lot of variants, but let's stick to this for now.
     * https://www.w3schools.com/c/c_data_types_numbers.php
     * https://www.w3schools.com/c/c_data_types_extended.php
     */
    
    int my_integer = -123456;
    long long my_big_integer = 1234567890123456789;

    /* CHARACTERS AND STRINGS
     * C doesn't have an explicit string type; instead, strings are stored as
     * character arrays. Note that 'single quotes' are used for character
     * literals, while "double quotes" are used for string literals.
     * https://www.w3schools.com/c/c_data_types_characters.php
     * https://www.w3schools.com/c/c_strings.php
     */
    
    char my_character = '!';
    char my_string[] = "This is my string!";

    /* FLOATS
     * There's a couple different float types, but the only difference is how
     * precise they can be. We'll stick with these two for now.
     * https://www.w3schools.com/c/c_data_types_numbers.php
     */

    float my_float = 3.141592e-28;
    double my_double = 3.141592653589793e54;

    /* BOOLEANS
     * Every bool is really just a 0 or 1 under the hood. Also, you need to
     * include stdbool.h for them to work.
     * https://www.w3schools.com/c/c_booleans.php
     */

    bool my_bool = true;

    /* ARRAYS
     * You can make an array of any data type. The size of the array must be
     * specified in its declaration, either explicitly or implicitly.
     * https://www.w3schools.com/c/c_arrays.php
     * https://stackoverflow.com/a/10828333
     */

    // implicit sizing via instantiation
    int my_array[] = {1, 2, 3, 4, 5};
    // explicit sizing without instantiation
    int my_array_2[5];
    // explicit sizing with instantiation (the "missing" values are set to 0)
    int my_array_3[10] = {1, 2, 3, 4, 5};
    // this wouldn't work because it doesn't know the size
    // int my_array_4[];

    /* POINTERS
     * You can make a pointer to any data type.
     * https://www.w3schools.com/c/c_pointers.php
     */

    int* my_pointer = &my_integer;
    float* my_pointer_2 = &my_float;
    bool* my_pointer_3 = &my_bool;

    /*
     * It's worth noting that C does not come with an implementation of a
     * dictionary- or hashmap-style data structure.
     * https://stackoverflow.com/questions/6118539/why-are-there-no-hashtables-in-the-c-standard-library
     */
}