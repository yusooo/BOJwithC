#include<stdio.h>
int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(x<=w-x){
        if(x<=y || x<=h-y) printf("%d", x);
        else if(y<=h-y) printf("%d", y);
        else printf("%d", h-y); 
    }
    else{
        if(w-x<=y || w-x<=h-y) printf("%d", w-x);
        else if(y<=h-y) printf("%d", y);
        else printf("%d", h-y);
    }
    return 0;
}

//사각형 위의 점 A에 대해 가장자리까지 가는 가장 짧은 거리를 구하는 문제