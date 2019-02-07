//
//  functions.c
//  Tutorial
//
//  Created by Lionell Loh on 7/2/19.
//  Copyright © 2019 Lionell Loh. All rights reserved.
//

#include <stdio.h>

int sayHi(char name[]) {
    
    printf("Hi! %s \n", name);
    return 0;
}


double cubeNumber(double number){
//    double result =  number * number * number;
    double result = pow(number, 3.0);
    return result;
}

int main(){
    //If a function is called before it is define, it will assume that the return value of the function is int
    sayHi("lionell");
    printf("%f \n", cubeNumber(3));
    return 0;
}




//void sayHiToUser(char user[]){
//
//    printf("Hi %s", user);
//}
