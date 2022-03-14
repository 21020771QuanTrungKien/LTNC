long long int factorial(int n)
{
    long long int result=1; 
    if (n==1) return result;
    else for (int i =2; i<=n;i++) {
        result= result *i;
    }
    return result;
}

