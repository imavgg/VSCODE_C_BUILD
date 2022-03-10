// //GCD最大公因數
// 輾轉相除法
// max 因數
int gcd(int x,int y){

    if (x%y==0|| y%x==0)
        // 10
        // 1:10
        // 2:5

        // 30:
        // 1:30
        // 2:15
         return (x<y?x:y);
    else
        // int ans;
        // 30 25
        // 5
        return( gcd(y,x%y) );
}
int main(){
    // if x%a==0 1 2 3
    // 1 3 5 7
    // for i =a_n:-1:0
    // for j= b_n:-1:0
    // if n(i) ==n(j)
    int ans;
    int x = 30;
    int y = 12;
    ans= gcd(x,y);
    printf("%i",ans);
    return(ans);
}