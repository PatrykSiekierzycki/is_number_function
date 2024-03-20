/*
  Brief: function check is a string number. Accept minus at first place (index: 0) and one comma or dot character  (',' or '.').
  Param:
    - *str - is a string to check
    - size - is a number of characters in string
  Return:
    - 'N' - if string is not a number
    - 'T' - if string is a number. Can contain minus, dot and comma characters.
*/
char is_number(char *str, unsigned long long int size)
{
    unsigned long long int i;
    char is_number = 'T';  // Flag: change value only if character is not a digit or comma (',' or '.')

    for (i = 0; i < size-1; i++)
    {
        if(*(str+i) == '-' && i == 0) continue;  // If actual looped character was not a digit, then check is a minus ('-').
        if (isdigit(str[i]) == 0)  // Check is character a digit
        {
            if (*(str+i) != '.' && *(str+i) != ',') is_number = 'N';  // If character was neither a digit nor a minus ('-'), check is comma (',' or '.'). If is comma (',' or '.') flag "is_numebr" is not change. If it is not a comma (',' or '.') flag's value will be change to 'N'.
        }
    }
    return is_number;
