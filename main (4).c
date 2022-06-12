#include <stdio.h>
#include<string.h>
//void removing(char * str, const char toRemove, int index);
void removing(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        if(str[index] == toRemove)
        {
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
    
}
int main()
{
    char str[30];
    char temp;
    printf("Enter any string: ");
    gets(str);
    int i = 0;
    while(str[i] != '\0')
    {
        removing(str, str[i], i + 1);
        i++;
    }
    int j;
    int n = strlen(str);
    for (i = 0; i < n-1; i++) 
    {
      for (j = i+1; j < n; j++) 
      {
         if (str[i] > str[j]) 
         {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
    }  
    printf("String after removing duplicates&print in ascending: %s\n", str);
    //return 0;
}




