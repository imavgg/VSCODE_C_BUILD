// recurrsion
// 1: 1
// 2: 1
// 3: 1+1
// 4: 1+2
// 5: 2+3
// 6: 3+5=8
int fibonic(int x, int y, int n){
    if (n == 1)
        return x;
    else if (n ==2)
        return y;
    else
        return(fibonic(x,y,n-1)+fibonic(x,y,n-2));    
}
int main(){
    int a = 1;
    int b = 1;
    int n = 6;
    int x;
    x =fibonic(a,b,n);

    printf("%i",x);

    return(0);
}