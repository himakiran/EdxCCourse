#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

// Write your readDate() and printDate() functions here
void readDate(struct date *dateptr){
    scanf("%d",&(*dateptr).year);
    scanf("%d",&(*dateptr).month);
    scanf("%d",&(*dateptr).day);
}

void printDate(struct date datee){
    printf("%02d/%02d/%04d",datee.month,datee.day,datee.year);
}
