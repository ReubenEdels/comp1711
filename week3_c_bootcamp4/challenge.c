#include <stdio.h>
int function(int n, int max){
    if (n < max){
        printf("%d\n", n);
        n++;
        function(n, max);
    }
    else{
        return 0;
    }
}

int main(){
    function(1, 10);
    return 0;
}