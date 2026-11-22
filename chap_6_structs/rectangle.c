#include<stdio.h>

struct point {
    int x ;
    int y ;
};

struct rect {
    struct point p1 ;
    struct point p2 ;
};

struct point makepoint(int x , int y){
    struct point temp ;
    temp.x = x ;
    temp.y = y ;

    return temp ;
}

struct rect canonrect(struct point p1 , struct point p2){
    struct rect rec ;
    rec.p1.x = (p1.x < p2.x) ? p1.x : p2.x ;
    rec.p1.y = (p1.y < p2.y) ? p1.y : p2.y ;
    rec.p2.x = (p2.x > p1.x) ? p2.x : p1.x ;
    rec.p2.y = (p2.y > p1.y) ? p2.y : p1.y ;

    return rec ;
}

int ptinrect(struct point p , struct rect r){
    return (p.x >= r.p1.x && p.x < r.p2.x ) && (p.y >= r.p1.y && p.y < r.p2.y);
}

void translate(int dx,int dy, struct rect* r){
    r->p1.x += dx;
    r->p2.x += dx;
    r->p1.y += dy;
    r->p2.y += dy;
}

int main(){
    struct point p1 , p2 ;
    p1 = makepoint(10,20);
    p2 = makepoint(100,200);
    
    struct rect rec , *recPtr ;
    rec = canonrect(p1,p2);

    recPtr = &rec ;
    translate(5,5,recPtr);

    printf("the value of p1 are %d %d\n", recPtr->p1.x , recPtr->p1.y);
    printf("the value of p2 are %d %d\n", recPtr->p2.x , recPtr->p2.y);
    
    return 0;
}