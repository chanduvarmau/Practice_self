//HELLOWORLD
//FIBONACCI
//FIBONACCI_RECURSIVE

#ifdef HELLOWORLD
#include <stdio.h>

int main(){

    printf("Hello World\n");
    return 0;
}
#endif

#ifdef FIBONACCI
#include <stdio.h>

int main()
{
    printf("Hello World First Fibonaci series ");
    int x = 0;
    int y = 1, n = 0, z = 0;
    
    printf(" Please enter fibonacci numbers to print ");
    scanf("%d", &n);
    printf(" 0 1 ");
    for(int i=0; i<n; i++){
        z = x+y;
        x = y;
        y = z;
        printf("%d ",z);
    }

    return 0;
}
#endif

#ifdef FIBONACCI_RECURSIVE
#include <stdio.h>
void fibonacci(int n){
    static int n1 = 0, n2 = 1, n3 = 0;

    if(n>0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        fibonacci(n-1);
    }
}
int main(){

    int x = 0, y = 1;
    int n = 0;
    printf(" Enter the fibonaci series number ");
    scanf("%d", &n);
    printf(" 0 1 ");
    fibonacci(n-2);

    return 0;
}
#endif