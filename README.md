# is_number_function

Function wrote in C.
It can be use to check that the string contain characters that together build a number.
It is not providing a the same option of check as a function isdigit(). Function is digit only check that the string is build only by digits characters, like for example: '1', '7'.
Function is_number gives you opportunity to check is string a number at all. For example: "156", "-124", "145.34", "-12,44". All that stirngs function consider as number.

Function return two kind of value: 'T' or 'N'. It is caused functions less memory usage.

How to use function in your project:
1. Above main() function in your project add a function is_number() header: char is_number(char *str, unsigned long long int size);
   Code example after first step:
     #include <stdio.h>
     #include <string.h>

     char is_number(char *str, unsigned long long int size);

     int main()
     {
        // Some code.
       return 0;
     }
3. Add a whole function's code from is_number.c beneath your main function (you can keep or remove comments, at the example above comments was reomoved):
  Code example after first step:
     #include <stdio.h>
     #include <string.h>

     char is_number(char *str, unsigned long long int size);

     int main()
     {
        // Some code.
       return 0;
     }

     char is_number(char *str, unsigned long long int size)
      {
          unsigned long long int i;
          char is_number = 'T';
      
          for (i = 0; i < size-1; i++)
          {
              if(*(str+i) == '-' && i == 0) continue;
              if (isdigit(str[i]) == 0)
              {
                  if (*(str+i) != '.' && *(str+i) != ',') is_number = 'N';
              }
          }
          return is_number;
      }
3. Call a function is_number() to check is string a number (inside a function's bracket pass a string variable name that you want to check and after comma, a size of that string):
   Code example after first step:
     #include <stdio.h>
     #include <string.h>

     char is_number(char *str, unsigned long long int size);

     int main()
     {
        // Some code.
       char *some_string = "-456,5";  // Creat string.
       unsigned long long int string_size = (unsigned long long int)strlen(some_string);  // Check how many characters that string contains and cast that value from size_t type into unsigned long long int type.
       char response = is_number(some_string, string_size);  // Call is_number() function and provide the proper arguments.
       return 0;
     }

     char is_number(char *str, unsigned long long int size)
      {
          unsigned long long int i;
          char is_number = 'T';
      
          for (i = 0; i < size-1; i++)
          {
              if(*(str+i) == '-' && i == 0) continue;
              if (isdigit(str[i]) == 0)
              {
                  if (*(str+i) != '.' && *(str+i) != ',') is_number = 'N';
              }
          }
          return is_number;
      }
4. After that when program run the char type variable call response will contain 'T' or 'N' value. At the code example from above the value will be 'T', what means that the string is a proper number.

For more interested:
  - function accept three signs that are not a numbers '-', ',' and '.'.
  - minus is accepted because the number can be negative.
  - comma and dot are accepted because genaral in matematic people use commas but computers instead of commas use dots. To avoid any possible problems function accept both characters.
