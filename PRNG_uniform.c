//
// Created by yrohanizadegan on 18/07/17.
//

#include <stdlib.h>
#include "N-p_PRNG.h"

/* This function uses the built-in rand() function to produce a random number in
 * the unit interval [0,1].*/
double PRNG_uniform() {
    return rand()/(double)(RAND_MAX);
}