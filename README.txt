fast_atan is realization of the atan2 approximations faster than standard function. 

Performance atan2 approximations on 200 000 random values

name            | time [us]| mean error [deg] | max. error [deg] |

cmath atan2     |   16324  |       –          |       –          |
atan2LUT[256]   |    4534  |     0.083        |     0.224        |
atan2LUTif[256] |    4710  |     0.083        |     0.224        |
atan2PI_4       |    3826  |     2.640        |     4.074        |
atan2approx     |    3949  |     0.135        |     0.215        |