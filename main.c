/*
 * main.c
 *
 *  Created on: 2018/08/31
 *      Author: hp
 */


#include <stdio.h>
#include "header.h"

int main()
{
	void (*greed)();
	int (*count)(int,int);
	printf("void\n");
	greed = hello;
	count = add;
	printf("greedhello\n");
	greed();
	int answerbefore;
	answerbefore = add(100,200);
	printf("答えは%d\n",answerbefore);
	int answer;
	answer = count(1,5);
	printf("答えは%d\n",answer);
	return(0);
}
