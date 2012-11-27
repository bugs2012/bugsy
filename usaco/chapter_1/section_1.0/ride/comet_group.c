/*
 * =====================================================================================
 *
PROG: ride
LANG: C
 *       Filename:  comet_group.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/26/12 14:23:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sahithi Singam (), sahithi.cse@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
	char comet[20];
	char group[20];
	
	FILE *in, *out;

	int i;
	int cmt_len = 1, grp_len = 1;

	in = fopen("ride.in", "r");
	out = fopen("ride.out", "w"); 
	fscanf(in, "%s", comet);
	fscanf(in, "%s", group); 
	//scanf("%s", comet);
	//scanf("%s", group);
/*  	fgets(comet, sizeof(comet), stdin);
	fgets(group, sizeof(group), stdin); */


	for (i = 0; i <strlen(comet) && isalpha(comet[i]); i++) 
		cmt_len *= (int)comet[i] - 64;
	
	for (i = 0; i <strlen(group) && isalpha(group[i]); i++) 
		grp_len *= (int)group[i] - 64;

	//printf("strlen(comet): %d , strlen(group): %d \n", strlen(comet), strlen(group));
	//printf("cmt_len = %d grp_len = %d \n", cmt_len, grp_len);
	if ((cmt_len % 47) == (grp_len % 47)) 
		fprintf(out,"GO\n");
	else 
		fprintf(out,"STAY\n");
	
	exit(0);
}
