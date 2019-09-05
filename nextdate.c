#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here
void readDate(struct date *dateptr){
    scanf("%d",&(*dateptr).year);
    scanf("%d",&(*dateptr).month);
    scanf("%d",&(*dateptr).day);
}

void printDate(struct date datee){
    printf("%02d/%02d/%04d\n",datee.month,datee.day,datee.year);
}

struct date advanceDay(struct date today){
    struct date nextday;
    if(today.month==12){
        if(today.day==31){
            nextday.year=today.year+1;
            nextday.month=01;
            nextday.day=01;
        }
        else{
            nextday.year=today.year;
            nextday.month=today.month;
            nextday.day=today.day+1;
        }
    }
    else if(today.month==2){
        if(today.day==29){
            nextday.year=today.year;
            nextday.month=03;
            nextday.day=01;
        }
        else{
            nextday.year=today.year;
            nextday.month=today.month;
            nextday.day=today.day+1;
        }
    }
    else if(today.month==1 ||today.month==3 || today.month==5 || today.month==7 || today.month==8 || today.month==10 ){
        
        if(today.day==31){
            nextday.year=today.year;
            nextday.month=today.month+1;
            nextday.day=01;
        }
        else{
            nextday.year=today.year;
            nextday.month=today.month;
            nextday.day=today.day+1;
        }
    }
    else {
        if(today.day==30){
            nextday.year=today.year;
            nextday.month=today.month+1;
            nextday.day=01;
        }
        else{
            nextday.year=today.year;
            nextday.month=today.month;
            nextday.day=today.day+1;
        }
    }
    return nextday;
}