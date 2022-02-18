/*
*************************************************************
* Author  : Dangar Dhruvan                                  *
* Written in Sublime Text                                   *
* Code    : Binary tree                                     *
* Date    : 28/12/2021                                      *
* time    : 10:32                                           *
*                                                           *
* you can modify this code as per your need                 *
*************************************************************
*/
#include <stdio.h>
 
void main()
{
    const volatile int initial = 10;      //Due to volatile keyword const will not affect.
    int *p = (int *) &initial;            //Type cast the pointer to int type   
 
    printf("Initial value : %d \n", initial);
 
    *p = 100;                            //Changing value of initial via pointer.
 
    printf("After changing the value via pointer: %d \n", initial);
}