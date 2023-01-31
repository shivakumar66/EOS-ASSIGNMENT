char str_rev(char *k)
{
    char p;
    int i,n;
    for(i = 0; *(k+i) != '\0';i++);
    i--;
    n=i;
    for(;i>n/2;)
    {
        p = *(k+i);
        *(k+i) = *(k+(n-i));
        *(k+(n-i)) = p;
        i--;
    }
}