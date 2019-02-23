/* This program takes as its input the values of a random variable e.g. X, and
 * also the probability for each of those values and gives as its output a random
 * sample generated for this specific random variable. The sample population number
 * and the number of possible values must be provided at the outset.
 * In the process of generating the random sample, the uniform pseudo random-
 * number generator is used as well.*/

#include <stdio.h>
#include "N-p_PRNG.h"

int main() {
    /*x[] here represents the possible values of the random sample and y[]
     * corresponding probabilities.*/
    double x[11] = {-5.0,-4.0,-3.0,-2.0,-1.0,0.0,1.0,2.0,3.0,4.0,5.0};
    double y[11] = {10.0/11.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0,1.0/110.0};
    double *array;
    int i, n=10000;  //n is the number of points to be generated.
    array = n_point_generator(x, y, 11, n); //the third input here determines the size of x and y.
    for (i=0; i<n; i++) {
        fprintf(stderr, "%f\n", *(array + i));
    } //print the components of array which is the generated sample.
    fprintf(stderr, "\nsample mean is: %f\n", sample_mean(array, n)); //calculate the sample mean.
    return 0;
}
