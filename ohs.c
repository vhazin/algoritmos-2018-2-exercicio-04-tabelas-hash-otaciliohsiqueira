int main()
{
    int n;
    scanf("%d", &d);
    bool x=false;
    while(n--)
    {
        if(x)
        {
            printf("\n";
        }
        else
            x=true;
        int a,b;
        scanf("%d %d", &a, &b;
        int c[b],i=0;
        for(int j=0;j<b;j++)
            scanf("%d", c[j]);
        for(i=0;i<a;i++)
        {
            printf("%d", i, " -> ");
            for(int j=0;j<b;j++){
            //cout<<i<<" ->";
            if(c[j]%a==i)
            printf("%d", c[j], " -> ");
            printf("\n");
        }
    }
    return 0;
}
