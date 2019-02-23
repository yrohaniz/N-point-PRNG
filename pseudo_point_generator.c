//
// Created by yrohanizadegan on 18/07/17.
//

#include <stdio.h>
#include <stdlib.h>
#include "N-p_PRNG.h"

/* This function generates a given number of points which is sampled from a
 * point-valued random variable. The possible values and their probabilities
 * are input as pointers. Also the size of these pointers is input seperately.
 * The number of points to be generated is determined by totnumpns. */

double *n_point_generator(double *points, double *probs, int size, int totnumpns) {
    int i, j;
    double *pseudo_nums, num, sum_probs=0.0;
    if ((pseudo_nums = (double *) malloc(totnumpns*sizeof(double))) == NULL) {
        fprintf(stderr,"malloc failed\n");
        exit(1);
    } // Initialize the pointer *pseudo_nums to the size determined by totnumpns
    srand(10); //Initialize the seed for the uniform_PRNG
    for (i=0; i<totnumpns; i++){
        num = PRNG_uniform(); //Use the PRNG_uniform function to initialize num
        for (j=0; j<size; j++){
            sum_probs += probs[j]; //Add the jth entry of probs array to sum_probs
            if (num > sum_probs-probs[j] && num <= sum_probs){
                pseudo_nums[i] = points[j]; // If the value of num falls between the old sum_probs and the new one-
                break;                      //-break the loop and assign the jth entry of points array to the output.
            }
        }
        sum_probs = 0.0;
    }
    return pseudo_nums;
}