//Colin Hosking
//Work 01
//Systems pd05
//2018-09-12

#include <stdio.h> 
#include <stdlib.h>

int problem_one(){ 
    int sum = 0; 

    for(int x = 3; x<1000; x+=3){ //add all multiples 3 to sum
        sum += x;
    }

    for(int x = 5; x<1000; x+=5){ //add all multiples 5 to sum
        sum += x;
    }
    return sum;
}

int problem_six(){
    int sum_of_squares = 0;     //sum of squares of ints 1-100
    int sum = 0;                //sum of ints 1-100
    
    for (int x = 1; x < 101; x++){   //adds square of each int to sum_of_squares
        sum_of_squares += x*x;
    }
    
    for (int x = 1; x < 101; x++){
        sum += x;
    } 
    int square_of_sum = sum*sum;
    
    return square_of_sum - sum_of_squares;  
}

int problem_five(){  //because of factors, we only need to test 7,9,10,11,13,16,17,19
    int x = 2520; //given that this # is divisible by 1,2,3,4,5,6,7,8,9,10
    while (x % 7 != 0 || x % 9 != 0 || x % 10 != 0 || x % 11 != 0 || x % 13 != 0 || x % 16 != 0 || x % 17 != 0 || x % 19 != 0){ 
        x+=10; 
    }
    return x;
}

int main(){
    //printf("%d",problem_one()); //answer: 266333
    //printf("%d",problem_six()); //answer: 25164150
    //printf("%d",problem_five()); //answer: 232792560
}