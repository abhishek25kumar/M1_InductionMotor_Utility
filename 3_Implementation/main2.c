#include <stdio.h>

int main()
{
    int Ns, ns, f, pole;
    
    scanf("%d %d", &pole, &f);
    
    Ns = (f*120)/pole;
    
    ns = (2*f)/pole;
    
    printf("%d\n", Ns);
    printf("%d\n", ns);
    
    return 0;
}