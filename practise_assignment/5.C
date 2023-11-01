#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	clrscr();

	printf("\n press 1 for english");
	printf("\n press 2 for hindi");
	printf("\n press 3 for gujarati");
	printf("\n enter your choice :");
	scanf("%d",&choice);

	switch(choice)
	{

case 1:
	printf("press 1 for internet recharge\n");
	printf("press 2 for top-ip recharge\n");
	printf("press 3 for special recharge\n");
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("you have successfully done internet recharge");
	break;

	case 2:
	printf("you have successfully done top-up recharge");
	break;

	case 3:
	printf("you have successfully done your special recharge");
	break;

	default:
	printf("invalid choice");
	break;
      }

case 2:
	printf("internet recharge ke liye 1 dabaye\n");
	printf("top-up recharge ke liye 2 dabaye\n");
	printf("special recbarge ke liye 3 dabaye\n");
	printf("enter your choice");
	switch(choice)
	{
		case 1:
		printf("aapne safaltapurvak internet recharge karvaya hai");
		break;

		case 2:
		printf("aapne safaltapurvak top-up recharge karvaya hai");
		break;

		case 3:
		printf("aapne safaltapuravak special reharge karvaya hai");
		break;

		default:
		printf("invalid choice");
		break;
	}
	case 3:
		printf("internet recharge mate 1 dabavo\n");
		printf("top-up recharge mate 2 dabavo\n");
		printf("special recharge mate 3 dabavo\n");
		printf("enter your choice");
		switch(choice)
		{
		case 1:
		printf("tame safaltapurvak internet recharge karyu che!!!");
		break;

		case 2:
		printf("tame safaltapuravak top-up recharge karyu che!!!");
		break;

		case 3:
		printf("tame safaltapuravak special recharge karyu che!!!");
		break;

		default:
		printf("invalid choice");
		break;
		}
		return 0;
		}


		getch();
}