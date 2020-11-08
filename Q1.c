#include <stdio.h>
#include <string.h>
#include <ctype.h> //include it in APAS
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50], *p;
    int totVowels, totDigits;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str, '\n')) *p='\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
  int i, j;
  int localVowels=0;
  int localDigits=0;
  for(i=0; i<=strlen(str); i++)
  {
      if (isdigit(*(str+i))>0){
          localDigits++;
      }
      else
        switch(*(str+i)){
            case 'a':
            case 'A':
                localVowels++;
                break;
            case 'e':
            case 'E':
                localVowels++;
                break;
            case 'i':
            case 'I':
                localVowels++;
                break;
            case 'o':
            case 'O':
                localVowels++;
                break;
            case 'u':
            case 'U':
                localVowels++;
                break;
            default:
                localVowels = localVowels;
                break;
        }
  }
  *totDigits = localDigits;
  *totVowels = localVowels;
}
