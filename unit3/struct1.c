#include<stdio.h>
int main()
{
    struct ideal
    {
       char name[6];
       char class[6];
       int strength;
    };
  
      struct ideal em1 ={"ideal","cse",60};
      struct ideal em2 ={"ideal","ece",60};
      struct ideal em3 ={"ideal","civil",60};
      printf("college\tbranch\tstrength\t\n");
      printf("%s\t%s\t%d\t\n",em1.name,em1.class,em1.strength);
      printf("%s\t%s\t%d\t\n",em2.name,em2.class,em2.strength);
      printf("%s\t%s\t%d\t\n",em3.name,em3.class,em3.strength);
return 0;
}

