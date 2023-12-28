#include<stdio.h>
#include<conio.h>

main()
{
       int c;
      clrscr();
      printf("Press 1 for English\n");
      printf("Press 2 for Hindi\n");
      printf("Press 3 for Gujarati\n");
      printf("Enter your choice : ");
      scanf("%d",&c);
      switch (c)
      {
	case 1:
	  printf("Press 1 for Internet Recharge\n");
	  printf("Press 2 for Top-up Recharge\n");
	  printf("Press 3 for Special Recharge\n");
	  printf("Enter your choice : ");
	  scanf("%d",&c);
	   switch (c)
	   {
	     case 1:
	       printf("You have successfully done internet recharge\n");
	       break;
	     case 2:
	       printf("You have successfully done top-up recharge\n");
	       break;
	     case 3:
	       printf("You have successfully done special recharge\n");
	       break;
	     default:
	       printf("Invalid choice\n");
	       break;
	   }
	   break;
	case 2:
	  printf("Internet Recharge ke liye 1 dabaiye\n");
	  printf("Top-up Recharge ke liye 2 dabaiye\n");
	  printf("Special Recharge ke liye 3 dabaiye\n");
	  printf("Enter your choice : ");
	  scanf("%d",&c);
	   switch (c)
	   {
	     case 1:
	       printf("Aapne safaltapurvak internet recharge kar liya hain\n");
	       break;
	     case 2:
	       printf("Aapne safaltapurvak top-up reacharge kar liya hain\n");
	       break;
	     case 3:
	       printf("Aapne safaltapurvak special recharge kar liya hain\n");
	       break;
	     default:
	       printf("Invalid choice\n");
	       break;
	   }
	   break;
	case 3:
	  printf("Internet reacharge mate 1 dabavo\n");
	  printf("Top-up recharge mate 2 dabavo\n");
	  printf("Special recharge mate 3 dabavo\n");
	  printf("Enter your choice : ");
	  scanf("%d",&c);
	   switch (c)
	   {
	     case 1:
	       printf("Tame safaltapurvak internet recharge karyu che\n");
	       break;
	     case 2:
	       printf("Tame safaltapurvak top-up recharge karyu che\n");
	       break;
	     case 3:
	       printf("Tame safaltapurvak special recharge karyu che\n");
	       break;
	     default:
	       printf("Invalid choice\n");
	       break;
	   }
	   break;
      }
      getch();
}
