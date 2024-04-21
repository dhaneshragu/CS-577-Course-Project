/**
k2c_normalization_layers.c
This file is part of keras2c
Copyright 2020 Rory Conlin
Licensed under MIT License
https://github.com/f0uriest/keras2c
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include "k2c_include.h"


/**
 * Batch normalization layer.
 * applies a transformation that maintains the mean activation close to 0 and the activation standard deviation close to 1.
 *
 * :param outputs: output tensor.
 * :param inputs: input tensor.
 * :param mean: tensor of mean values.
 * :param stdev: tensor of standard deviation values.
 * :param gamma: tensor of gamma (scale) values.
 * :param beta: tensor of beta (offset) values.
 * :param axis: axis to be normalized.
 */
void k2c_batch_norm(k2c_tensor2* outputs, const k2c_tensor2* inputs, const k2c_tensor2* mean,
                    const k2c_tensor2* stdev, const k2c_tensor2* gamma, const k2c_tensor2* beta,
                    const size_t axis) {
//#pragma HLS ARRAY_PARTITION variable=inputs->array block factor=5 dim=1

    size_t offset = 1;
    size_t i;
//   for ( i=axis+1; i<inputs->ndim; ++i) {
//#pragma HLS LOOP_TRIPCOUNT avg=1
//#pragma HLS UNROLL
//        offset *= inputs->shape[i];
//    }
    const size_t step = inputs->shape[axis];

    for ( i=0; i<inputs->numel; ++i) {
#pragma HLS PIPELINE
#pragma HLS LOOP_TRIPCOUNT min=10 max=100 avg=10

    	//        size_t idx = (i/offset)%step;
        outputs->array[i] = (inputs->array[i] - mean->array[i]) /
                            stdev->array[i] *
                            gamma->array[i] +
                            beta->array[i];
    }
}
