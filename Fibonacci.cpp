# include<stdio.h>

int fibonacci(int n){
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int num, res;
    printf("Ingrese numero: ");
    scanf("%i",&num);
    for(int i=1;i<=num;i++){
        res = fibonacci(i);
        printf("%i  ", res);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}


