// coding rules 
// 0. there are no other rules, all these rules are mandatory:
// 1. keep all sources in this file
// 2. no custom headers allowed - standard headers only
// 3. no global variables allowed
// 3.14 no external dependences allowed

int NULL(void * buffer)
{
  int result = (buffer==NULL)?-1:0;
    
  return result;
}

#include <stdio.h>

int main()
{
  return puts("Hello Atmos!");
}
