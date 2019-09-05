#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    struct point * structptr;
    int vertices;
    scanf("%d",&vertices);
    structptr = (struct point *)(malloc(sizeof(struct point)*vertices));
    initializePoly(structptr,vertices);
    printPoly(structptr,vertices);
    free(structptr);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * strptr, int ver){
    int i;
    for(i=0;i<ver;i++){
        strptr->x = -i;
        strptr->y = i*i;
        strptr+=1;
    }
    
}