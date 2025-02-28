#include<stdio.h>

int main(){

   int Maths,Phy,Chem,Total,TotalPhyMA;
   Total=Maths+Phy+Chem;
   TotalPhyMA= Maths+Phy;
   printf("Enter maths result");

   scanf("%d",&Maths);

  printf("Enter physucs result");

   scanf("%d",&Phy);

  printf("enter chem result:");

  scanf("%d",&Chem);



   if((Maths>=65&&Phy>=55&&Chem>=50&&Total>=190 )||( Maths>=65&&Phy>=5&&Chem>=50&&TotalPhyMA>=140))

      printf("eligible for admission:\n");

else

      printf("Not eligible for admission:\n");

return 0;

}