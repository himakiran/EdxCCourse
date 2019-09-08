#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

// This structure is filled in from a while loop in the function countRedun
struct redunStruct {
    int digit;
    int repetitions;
    struct redunStruct * next;
};

// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void); 
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
int countRedun(struct digit *);
// this function takes  a digit and start pointer of list of redunStruct and returns the ptr of the node that holds the digit
struct redunStruct * isDigitPresent(int, struct redunStruct *); 
// this function takes the start pointer of list of redunStruct and returns the sum of repetitions
int countRepetitions(struct redunStruct *);

// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

// Write your countRedun() function here


int countRedun(struct digit * start){
    int result=0;
    struct digit * tmp;
    struct redunStruct * rstart = NULL;
    struct redunStruct * rend = NULL;
    struct redunStruct * index = NULL;  // the index where the digit is present id returned by the function isDigitPresent
    struct redunStruct * rtemp = NULL; 
    tmp = start;
    while(tmp!= NULL){
        index = isDigitPresent(tmp->num, rstart);
        if(index==NULL){
            if(rstart==NULL){
                rstart = (struct redunStruct *)malloc(sizeof(struct redunStruct));
                rstart->digit = tmp->num;
                rstart->repetitions = 0;
                rstart->next=NULL;
                rend=rstart;
            }
            else{
                rtemp = (struct redunStruct *)malloc(sizeof(struct redunStruct));
                rtemp->digit = tmp->num;
                rtemp->repetitions = 0;
                rend->next = rtemp;
                rtemp->next = NULL;
                rend = rtemp;

            }
        }
        else{
            index->repetitions = (index->repetitions)+1;
        }
        tmp=tmp->next;
    }
    
    result = countRepetitions(rstart);
    free(rstart);
    return result;

}

struct redunStruct * isDigitPresent(int digit, struct redunStruct * start){
    
    struct redunStruct * tmp;
    tmp = start;
    while(tmp!=NULL){
        if((tmp->digit) == digit)
        return tmp;
        else
        tmp=tmp->next;
    }
    return NULL;
}

int countRepetitions(struct redunStruct * rstart){
struct redunStruct * temp;
int result=0;
temp = rstart;
while(temp!=NULL){

result+=temp->repetitions;
temp=temp->next;

}
return result;
}   