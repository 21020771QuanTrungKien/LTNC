bool isPrime (int number)
{
    int dem=0;
    if (number<2 ) return false;
    else {
        for(int i=1;i<=number;i++){
            if (number %i==0) dem++; 
        }
        if (dem ==2 ) return true; 
        else return false  ;
    }
}