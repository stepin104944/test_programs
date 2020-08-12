#include<stdio.h>
#include<string.h>
int main()
{
   char string[100]="This_is_in_Github_repo";
   char* token = strtok(string, "_");
   while(token != NULL)
   {
   printf("%s,",token);
   token = strtok(NULL, "_");
   }
    return 0;
}
