int hn(int n){
    if (n==1){
        return(1);
    }else{
        return(2*hn(n-1)+1);
    }
}

int f91(int N){
    
        if (N<=100)
            {
                return(f91(N+11));
                if (N==0)
                break;
                }
        else
            return(N-10);
    
}
int main()

{
    hn(5);

    int ans =f91(0);

    printf("%i",ans);
   
}