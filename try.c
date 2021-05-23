#include <stdio.h>


int main(){

    int i = 12.25f;
    int j = 5;
    printf("i is %d \n", i++);
    int k = j * 2 + i;
    printf("k is %d \n", k);


    printf("2: %d  %d \n", 10/4, 10%4);

    i = 5; j =3;
    k = ++i * j++;
    printf("3: i is %d j is %d k is %d \n", i, j, k);

    i = 5; j =3;
    j+=i++ * 2;
    printf("4: i is %d  j is %d \n", i, j);

    i = 2;
    i = i + i;
    i = i+ i;
    printf("e : i is %d  \n", i);

    i = 3;
    j = 1;
    j *= --i * 2 + 3;
    printf("f: i is %d, j is %d\n", i, j);

    int a = 3;
    float b = 5.5f;
    int c = b * 3 + a;
    printf("c is %d  \n", c);


    a = 8; 
    int x = 10;

    //c = a > x ? (a+x) : (a-x);
    if(a > x){
        c = a + x;
    } else{
        c = a - x;
    }

    printf("c is %d \n", c);


    i = 3;
    j = 4;
    k = 5;

    if(!(i < j)) printf("HERE 1 true\n");


    if((!i) < j) printf("HERE 2 true\n");


    if(i < j || ++j < k) printf("HERE 3 true\n");

    if(!(i % j + i < k)) printf("HERE 4 true\n");

    int grades = 20;
    if(grades >= 90){
        printf("A\n");

    } else if(grades >= 80){
        printf("B\n");
    } else if(grades >= 70){
        printf("C\n");

    } else if(grades >= 60){
        printf("D\n");

    } else{
        printf("E\n");
    }


    int action;
    printf("plese enter a number: ");
    scanf("%d", &action);
    switch(action){
        case 1:
            printf("Addition\n");
        case 2:
            printf("Sub\n");
            break;
        case 3:
            printf("MULTI\n");
        case 4:
            printf("DIV\n");
        case 5:
            printf("quit\n");
            break;
        default:
        printf("invalid data\n");
    }



    return 0;
}