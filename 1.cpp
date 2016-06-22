#include <stdio.h>

void main()
{
	int taste_gedrueckt = 0;
	int alter = 0;
	printf("Wie alt bist du/sie?");
	printf("\nHier eingeben: ");
	scanf_s("%i", &alter);

	if (alter < 16)
	{
		printf("Du kannst keinen Alkohol kaufen!");
		printf("Du bist noch zu Jung...)=");
	}
	else
	{
		if (alter < 18)
		{
			printf("Du hast kannst Bier kaufen, nichts hochprozentiges.");
		}
		else
		{
				printf("Du kannst Rauchen, Alkohol trinken und alles, was das Herz begaehrt!");
		}
	}
	printf("\n\n");
	scanf_s("%i", &taste_gedrueckt);
}