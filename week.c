#include<stdio.h>
int main()
{
	int w;
	printf("Enter A week Number(1-7): ");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
			printf("Monday");
			break;
			case 2:
				printf("Tuesday");
				break;
				case 3:
					printf("Wednesday");
					break;
					case 4:
						printf("Thursday");
						break;
						case 5:
							printf("Friday");
							break;
							case 6:
								printf("Saturday");
								break;
								case 7:
									printf("Sunday");
									break;
									default:
										printf("BSDK dekhiki week day Enter kar,Saptahaku 7 dina tora calender re kan adhika achhi na kan.Chup chap 1 ru 7 bhitare number de BOKACHODA");
	}
	return 0;
}
