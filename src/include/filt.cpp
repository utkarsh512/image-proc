#include "filt.h"

// filter declaration

// high pass

std::vector<double> HIGH_PASS = {
	-1, -1, -1,
	-1,  8, -1,
	-1, -1, -1
};

// /high pass

// mean

std::vector<double> MEAN_3 = {
	0.11111111, 0.11111111, 0.11111111,
	0.11111111, 0.11111111, 0.11111111,
	0.11111111, 0.11111111, 0.11111111
};

std::vector<double> MEAN_5 = {
	0.04000000, 0.04000000, 0.04000000, 0.04000000, 0.04000000,
	0.04000000, 0.04000000, 0.04000000, 0.04000000, 0.04000000,
	0.04000000, 0.04000000, 0.04000000, 0.04000000, 0.04000000,
	0.04000000, 0.04000000, 0.04000000, 0.04000000, 0.04000000,
	0.04000000, 0.04000000, 0.04000000, 0.04000000, 0.04000000
};

std::vector<double> MEAN_7 = {
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816,
	0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816, 0.02040816
};

std::vector<double> MEAN_9 = {
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568,
	0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568, 0.01234568
};

// /mean

// prewitt

std::vector<double> PREWITT_H_3 = {
	-1, 0, 1,
	-1, 0, 1,
	-1, 0, 1
};

std::vector<double> PREWITT_V_3 = {
	-1, -1, -1,
	0, 0, 0,
	1, 1, 1
};

std::vector<double> PREWITT_H_5 = {
	-2, -1, 0, 1, 2,
	-2, -1, 0, 1, 2,
	-2, -1, 0, 1, 2,
	-2, -1, 0, 1, 2,
	-2, -1, 0, 1, 2
};

std::vector<double> PREWITT_V_5 = {
	-2, -2, -2, -2, -2,
	-1, -1, -1, -1, -1,
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 1,
	2, 2, 2, 2, 2
};

std::vector<double> PREWITT_H_7 = {
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3,
	-3, -2, -1, 0, 1, 2, 3
};

std::vector<double> PREWITT_V_7 = {
	-3, -3, -3, -3, -3, -3, -3,
	-2, -2, -2, -2, -2, -2, -2,
	-1, -1, -1, -1, -1, -1, -1,
	0, 0, 0, 0, 0, 0, 0,
	1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3
};

std::vector<double> PREWITT_H_9 = {
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4,
	-4, -3, -2, -1, 0, 1, 2, 3, 4
};

std::vector<double> PREWITT_V_9 = {
	-4, -4, -4, -4, -4, -4, -4, -4, -4,
	-3, -3, -3, -3, -3, -3, -3, -3, -3,
	-2, -2, -2, -2, -2, -2, -2, -2, -2,
	-1, -1, -1, -1, -1, -1, -1, -1, -1,
	0, 0, 0, 0, 0, 0, 0, 0, 0,
	1, 1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4, 4, 4, 4, 4
};

// /prewitt

// sobel

std::vector<double> SOBEL_H_3 = {
	-0.50000000, 0.00000000, 0.50000000,
	-1.00000000, 0.00000000, 1.00000000,
	-0.50000000, 0.00000000, 0.50000000
};

std::vector<double> SOBEL_V_3 = {
	-0.50000000, -1.00000000, -0.50000000,
	0.00000000, 0.00000000, 0.00000000,
	0.50000000, 1.00000000, 0.50000000
};

std::vector<double> SOBEL_D_3 = {
	0.00000, -0.70711, -0.70711,
	0.70711, 0.00000, -0.70711,
	0.70711, 0.70711, 0.00000
};

std::vector<double> SOBEL_H_5 = {
	-0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000,
	-0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000,
	-0.50000000, -1.00000000, 0.00000000, 1.00000000, 0.50000000,
	-0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000,
	-0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000
};

std::vector<double> SOBEL_V_5 = {
	-0.25000000, -0.40000000, -0.50000000, -0.40000000, -0.25000000,
	-0.20000000, -0.50000000, -1.00000000, -0.50000000, -0.20000000,
	0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
	0.20000000, 0.50000000, 1.00000000, 0.50000000, 0.20000000,
	0.25000000, 0.40000000, 0.50000000, 0.40000000, 0.25000000
};

std::vector<double> SOBEL_D_5 = {
	0.00000, -0.14142, -0.35355, -0.42426, -0.35355,
	0.14142, 0.00000, -0.70711, -0.70711, -0.42426,
	0.35355, 0.70711, 0.00000, -0.70711, -0.35355,
	0.42426, 0.70711, 0.70711, 0.00000, -0.14142,
	0.35355, 0.42426, 0.35355, 0.14142, 0.00000
};

std::vector<double> SOBEL_H_7 = {
	-0.16666667, -0.15384615, -0.10000000, 0.00000000, 0.10000000, 0.15384615, 0.16666667,
	-0.23076923, -0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000, 0.23076923,
	-0.30000000, -0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000, 0.30000000,
	-0.33333333, -0.50000000, -1.00000000, 0.00000000, 1.00000000, 0.50000000, 0.33333333,
	-0.30000000, -0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000, 0.30000000,
	-0.23076923, -0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000, 0.23076923,
	-0.16666667, -0.15384615, -0.10000000, 0.00000000, 0.10000000, 0.15384615, 0.16666667
};

std::vector<double> SOBEL_V_7 = {
	-0.16666667, -0.23076923, -0.30000000, -0.33333333, -0.30000000, -0.23076923, -0.16666667,
	-0.15384615, -0.25000000, -0.40000000, -0.50000000, -0.40000000, -0.25000000, -0.15384615,
	-0.10000000, -0.20000000, -0.50000000, -1.00000000, -0.50000000, -0.20000000, -0.10000000,
	0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
	0.10000000, 0.20000000, 0.50000000, 1.00000000, 0.50000000, 0.20000000, 0.10000000,
	0.15384615, 0.25000000, 0.40000000, 0.50000000, 0.40000000, 0.25000000, 0.15384615,
	0.16666667, 0.23076923, 0.30000000, 0.33333333, 0.30000000, 0.23076923, 0.16666667
};

std::vector<double> SOBEL_D_7 = {
	0.00000, -0.05439, -0.14142, -0.23570, -0.28284, -0.27196, -0.23570,
	0.05439, 0.00000, -0.14142, -0.35355, -0.42426, -0.35355, -0.27196,
	0.14142, 0.14142, 0.00000, -0.70711, -0.70711, -0.42426, -0.28284,
	0.23570, 0.35355, 0.70711, 0.00000, -0.70711, -0.35355, -0.23570,
	0.28284, 0.42426, 0.70711, 0.70711, 0.00000, -0.14142, -0.14142,
	0.27196, 0.35355, 0.42426, 0.35355, 0.14142, 0.00000, -0.05439,
	0.23570, 0.27196, 0.28284, 0.23570, 0.14142, 0.05439, 0.00000
};

std::vector<double> SOBEL_H_9 = {
	-0.12500000, -0.12000000, -0.10000000, -0.05882353, 0.00000000, 0.05882353, 0.10000000, 0.12000000, 0.12500000,
	-0.16000000, -0.16666667, -0.15384615, -0.10000000, 0.00000000, 0.10000000, 0.15384615, 0.16666667, 0.16000000,
	-0.20000000, -0.23076923, -0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000, 0.23076923, 0.20000000,
	-0.23529412, -0.30000000, -0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000, 0.30000000, 0.23529412,
	-0.25000000, -0.33333333, -0.50000000, -1.00000000, 0.00000000, 1.00000000, 0.50000000, 0.33333333, 0.25000000,
	-0.23529412, -0.30000000, -0.40000000, -0.50000000, 0.00000000, 0.50000000, 0.40000000, 0.30000000, 0.23529412,
	-0.20000000, -0.23076923, -0.25000000, -0.20000000, 0.00000000, 0.20000000, 0.25000000, 0.23076923, 0.20000000,
	-0.16000000, -0.16666667, -0.15384615, -0.10000000, 0.00000000, 0.10000000, 0.15384615, 0.16666667, 0.16000000,
	-0.12500000, -0.12000000, -0.10000000, -0.05882353, 0.00000000, 0.05882353, 0.10000000, 0.12000000, 0.12500000
};

std::vector<double> SOBEL_V_9 = {
	-0.12500000, -0.16000000, -0.20000000, -0.23529412, -0.25000000, -0.23529412, -0.20000000, -0.16000000, -0.12500000,
	-0.12000000, -0.16666667, -0.23076923, -0.30000000, -0.33333333, -0.30000000, -0.23076923, -0.16666667, -0.12000000,
	-0.10000000, -0.15384615, -0.25000000, -0.40000000, -0.50000000, -0.40000000, -0.25000000, -0.15384615, -0.10000000,
	-0.05882353, -0.10000000, -0.20000000, -0.50000000, -1.00000000, -0.50000000, -0.20000000, -0.10000000, -0.05882353,
	0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000,
	0.05882353, 0.10000000, 0.20000000, 0.50000000, 1.00000000, 0.50000000, 0.20000000, 0.10000000, 0.05882353,
	0.10000000, 0.15384615, 0.25000000, 0.40000000, 0.50000000, 0.40000000, 0.25000000, 0.15384615, 0.10000000,
	0.12000000, 0.16666667, 0.23076923, 0.30000000, 0.33333333, 0.30000000, 0.23076923, 0.16666667, 0.12000000,
	0.12500000, 0.16000000, 0.20000000, 0.23529412, 0.25000000, 0.23529412, 0.20000000, 0.16000000, 0.12500000
};

std::vector<double> SOBEL_D_9 = {
	0.00000, -0.02828, -0.07071, -0.12478, -0.17678, -0.20797, -0.21213, -0.19799, -0.17678,
	0.02828, 0.00000, -0.05439, -0.14142, -0.23570, -0.28284, -0.27196, -0.23570, -0.19799,
	0.07071, 0.05439, 0.00000, -0.14142, -0.35355, -0.42426, -0.35355, -0.27196, -0.21213,
	0.12478, 0.14142, 0.14142, 0.00000, -0.70711, -0.70711, -0.42426, -0.28284, -0.20797,
	0.17678, 0.23570, 0.35355, 0.70711, 0.00000, -0.70711, -0.35355, -0.23570, -0.17678,
	0.20797, 0.28284, 0.42426, 0.70711, 0.70711, 0.00000, -0.14142, -0.14142, -0.12478,
	0.21213, 0.27196, 0.35355, 0.42426, 0.35355, 0.14142, 0.00000, -0.05439, -0.07071,
	0.19799, 0.23570, 0.27196, 0.28284, 0.23570, 0.14142, 0.05439, 0.00000, -0.02828,
	0.17678, 0.19799, 0.21213, 0.20797, 0.17678, 0.12478, 0.07071, 0.02828, 0.00000
};

// /sobel

// laplacian

std::vector<double> LAPLACIAN_3 = {
	-0.11111111, -0.11111111, -0.11111111,
	-0.11111111, 0.88888889, -0.11111111,
	-0.11111111, -0.11111111, -0.11111111
};

std::vector<double> LAPLACIAN_5 = {
	-0.04000000, -0.04000000, -0.04000000, -0.04000000, -0.04000000,
	-0.04000000, -0.04000000, -0.04000000, -0.04000000, -0.04000000,
	-0.04000000, -0.04000000, 0.96000000, -0.04000000, -0.04000000,
	-0.04000000, -0.04000000, -0.04000000, -0.04000000, -0.04000000,
	-0.04000000, -0.04000000, -0.04000000, -0.04000000, -0.04000000
};

std::vector<double> LAPLACIAN_7 = {
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, 0.97959184, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816,
	-0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816, -0.02040816
};

std::vector<double> LAPLACIAN_9 = {
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, 0.98765432, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568,
	-0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568, -0.01234568
};

// /laplacian

// gaussian

std::vector<double> GAUSSIAN_3 = {
	0.01166010, 0.08615712, 0.01166010,
	0.08615712, 0.63661977, 0.08615712,
	0.01166010, 0.08615712, 0.01166010
};

std::vector<double> GAUSSIAN_5 = {
	0.00072218, 0.00626214, 0.01286514, 0.00626214, 0.00072218,
	0.00626214, 0.05429984, 0.11155540, 0.05429984, 0.00626214,
	0.01286514, 0.11155540, 0.22918312, 0.11155540, 0.01286514,
	0.00626214, 0.05429984, 0.11155540, 0.05429984, 0.00626214,
	0.00072218, 0.00626214, 0.01286514, 0.00626214, 0.00072218
};

std::vector<double> GAUSSIAN_7 = {
	0.00015713, 0.00098616, 0.00296865, 0.00428643, 0.00296865, 0.00098616, 0.00015713,
	0.00098616, 0.00618917, 0.01863129, 0.02690169, 0.01863129, 0.00618917, 0.00098616,
	0.00296865, 0.01863129, 0.05608582, 0.08098224, 0.05608582, 0.01863129, 0.00296865,
	0.00428643, 0.02690169, 0.08098224, 0.11693016, 0.08098224, 0.02690169, 0.00428643,
	0.00296865, 0.01863129, 0.05608582, 0.08098224, 0.05608582, 0.01863129, 0.00296865,
	0.00098616, 0.00618917, 0.01863129, 0.02690169, 0.01863129, 0.00618917, 0.00098616,
	0.00015713, 0.00098616, 0.00296865, 0.00428643, 0.00296865, 0.00098616, 0.00015713
};

std::vector<double> GAUSSIAN_9 = {
	0.00005772, 0.00027346, 0.00083069, 0.00161797, 0.00202060, 0.00161797, 0.00083069, 0.00027346, 0.00005772,
	0.00027346, 0.00129557, 0.00393558, 0.00766547, 0.00957301, 0.00766547, 0.00393558, 0.00129557, 0.00027346,
	0.00083069, 0.00393558, 0.01195525, 0.02328564, 0.02908025, 0.02328564, 0.01195525, 0.00393558, 0.00083069,
	0.00161797, 0.00766547, 0.02328564, 0.04535423, 0.05664058, 0.04535423, 0.02328564, 0.00766547, 0.00161797,
	0.00202060, 0.00957301, 0.02908025, 0.05664058, 0.07073553, 0.05664058, 0.02908025, 0.00957301, 0.00202060,
	0.00161797, 0.00766547, 0.02328564, 0.04535423, 0.05664058, 0.04535423, 0.02328564, 0.00766547, 0.00161797,
	0.00083069, 0.00393558, 0.01195525, 0.02328564, 0.02908025, 0.02328564, 0.01195525, 0.00393558, 0.00083069,
	0.00027346, 0.00129557, 0.00393558, 0.00766547, 0.00957301, 0.00766547, 0.00393558, 0.00129557, 0.00027346,
	0.00005772, 0.00027346, 0.00083069, 0.00161797, 0.00202060, 0.00161797, 0.00083069, 0.00027346, 0.00005772
};

// /gaussian

// LAPLACIAN_OF_GAUSSIAN

std::vector<double> LAPLACIAN_OF_GAUSSIAN_3 = {
	0.27984235, 0.68925694, 0.27984235,
	0.68925694, -5.09295818, 0.68925694,
	0.27984235, 0.68925694, 0.27984235
};

std::vector<double> LAPLACIAN_OF_GAUSSIAN_5 = {
	0.00990024, 0.04689087, 0.06965701, 0.04689087, 0.00990024,
	0.04689087, 0.06880876, -0.08995827, 0.06880876, 0.04689087,
	0.06965701, -0.08995827, -0.66004738, -0.08995827, 0.06965701,
	0.04689087, 0.06880876, -0.08995827, 0.06880876, 0.04689087,
	0.00990024, 0.04689087, 0.06965701, 0.04689087, 0.00990024
};

std::vector<double> LAPLACIAN_OF_GAUSSIAN_7 = {
	0.00129580, 0.00547093, 0.01166194, 0.01452495, 0.01166194, 0.00547093, 0.00129580,
	0.00547093, 0.01763179, 0.02290694, 0.01855443, 0.02290694, 0.01763179, 0.00547093,
	0.01166194, 0.02290694, -0.02186436, -0.07528212, -0.02186436, 0.02290694, 0.01166194,
	0.01452495, 0.01855443, -0.07528212, -0.17181575, -0.07528212, 0.01855443, 0.01452495,
	0.01166194, 0.02290694, -0.02186436, -0.07528212, -0.02186436, 0.02290694, 0.01166194,
	0.00547093, 0.01763179, 0.02290694, 0.01855443, 0.02290694, 0.01763179, 0.00547093,
	0.00129580, 0.00547093, 0.01166194, 0.01452495, 0.01166194, 0.00547093, 0.00129580
};

std::vector<double> LAPLACIAN_OF_GAUSSIAN_9 = {
	0.00031354, 0.00110734, 0.00254335, 0.00399498, 0.00459000, 0.00399498, 0.00254335, 0.00110734, 0.00031354,
	0.00110734, 0.00345484, 0.00660789, 0.00832792, 0.00850934, 0.00832792, 0.00660789, 0.00345484, 0.00110734,
	0.00254335, 0.00660789, 0.00826536, 0.00229982, -0.00287212, 0.00229982, 0.00826536, 0.00660789, 0.00254335,
	0.00399498, 0.00832792, 0.00229982, -0.02239715, -0.03915892, -0.02239715, 0.00229982, 0.00832792, 0.00399498,
	0.00459000, 0.00850934, -0.00287212, -0.03915892, -0.06287603, -0.03915892, -0.00287212, 0.00850934, 0.00459000,
	0.00399498, 0.00832792, 0.00229982, -0.02239715, -0.03915892, -0.02239715, 0.00229982, 0.00832792, 0.00399498,
	0.00254335, 0.00660789, 0.00826536, 0.00229982, -0.00287212, 0.00229982, 0.00826536, 0.00660789, 0.00254335,
	0.00110734, 0.00345484, 0.00660789, 0.00832792, 0.00850934, 0.00832792, 0.00660789, 0.00345484, 0.00110734,
	0.00031354, 0.00110734, 0.00254335, 0.00399498, 0.00459000, 0.00399498, 0.00254335, 0.00110734, 0.00031354,
};

const char* FILTER_NAME[11] = {
	"NONE", "MEAN", "MEDIAN", "PREWITT_H", "PREWITT_V", "SOBEL_H", "SOBEL_V", "SOBEL_D",
	"LAPLACIAN", "GAUSSIAN", "LAPLACIAN_OF_GAUSSIAN"
};

Vec2d MEAN = { MEAN_3, MEAN_5, MEAN_7, MEAN_9 };
Vec2d PREWITT_H = { PREWITT_H_3, PREWITT_H_5, PREWITT_H_7, PREWITT_H_9 };
Vec2d PREWITT_V = { PREWITT_V_3, PREWITT_V_5, PREWITT_V_7, PREWITT_V_9 };
Vec2d SOBEL_H = { SOBEL_H_3, SOBEL_H_5, SOBEL_H_7, SOBEL_H_9 };
Vec2d SOBEL_V = { SOBEL_V_3, SOBEL_V_5, SOBEL_V_7, SOBEL_V_9 };
Vec2d SOBEL_D = { SOBEL_D_3, SOBEL_D_5, SOBEL_D_7, SOBEL_D_9 };
Vec2d LAPLACIAN = { LAPLACIAN_3, LAPLACIAN_5, LAPLACIAN_7, LAPLACIAN_9 };
Vec2d GAUSSIAN = { GAUSSIAN_3, GAUSSIAN_5, GAUSSIAN_7, GAUSSIAN_9 };
Vec2d LAPLACIAN_OF_GAUSSIAN = { LAPLACIAN_OF_GAUSSIAN_3, LAPLACIAN_OF_GAUSSIAN_5, LAPLACIAN_OF_GAUSSIAN_7, LAPLACIAN_OF_GAUSSIAN_9 };

Vec3d FILTERS = {
	Vec2d(), MEAN, Vec2d(), PREWITT_H, PREWITT_V, SOBEL_H, SOBEL_V, SOBEL_D,
	LAPLACIAN, GAUSSIAN, LAPLACIAN_OF_GAUSSIAN
};

// default constructor for Kernel
Kernel::Kernel() : size(0) {}

// parametrized constructor for Kernel
Kernel::Kernel(int filterType, int filterSize) : size(filterSize * 2 + 3) {
	matrix = FILTERS[filterType][filterSize];
}

Kernel::Kernel(int size_, std::vector<double>& matrix_) : size(size_), matrix(matrix_) {}

// Get value at any given position in Kernel
double Kernel::at(int i, int j) {
	i += size / 2;
	j += size / 2;
	return matrix[size * i + j];
}

// performs convolution with cv::Mat object
cv::Mat Kernel::conv(cv::Mat& image) {
	cv::Mat result = image.clone();
	int size2 = size / 2;

	for (int i = 0; i < result.rows; i++) {
		for (int j = 0; j < result.cols; j++) {
			double pixel = 0;
			for (int dx = -size2; dx <= size2; dx++) {
				for (int dy = -size2; dy <= size2; dy++) {
					int nx = i + dx;
					int ny = j + dy;
					if (nx >= 0 && nx < result.rows && ny >= 0 && ny < result.cols) {
						pixel += at(dx, dy) * static_cast<int>(image.at<uchar>(nx, ny));
					}
				}
			}
			if (pixel > 255) pixel = 255;
			else if (pixel < 0) pixel = 0;
			result.at<uchar>(i, j) = static_cast<uchar>(pixel);
		}
	}
	return result;
}

// performs median filtering
cv::Mat median(cv::Mat& image, int size) {
	cv::Mat result = image.clone();
	int size2 = size / 2;

	for (int i = 0; i < result.rows; i++) {
		for (int j = 0; j < result.cols; j++) {
			std::vector<uchar> pixels;
			for (int dx = -size2; dx <= size2; dx++) {
				for (int dy = -size2; dy <= size2; dy++) {
					int nx = i + dx;
					int ny = j + dy;
					if (nx >= 0 && nx < result.rows && ny >= 0 && ny < result.cols) {
						pixels.push_back(image.at<uchar>(nx, ny));
					}
				}
			}
			std::sort(pixels.begin(), pixels.end());
			result.at<uchar>(i, j) = pixels[size2];
		}
	}
	return result;
}

// Performs Adaptive High Boost filtering
cv::Mat adaptiveHighBoost(cv::Mat& image, double b, double s) {
	Kernel kernel(3, HIGH_PASS);
	cv::Mat imageHP = kernel.conv(image);
	cv::Mat result = imageHP.clone();
	for (int i = 0; i < result.rows; i++) {
		for (int j = 0; j < result.cols; j++) {
			double val = abs(static_cast<double>(imageHP.at<uchar>(i, j)));
			val /= s * s * (-2);
			val = 1.0 - exp(val);
			int newVal = static_cast<int>(b * val * imageHP.at<uchar>(i, j));
			if (newVal < 0) newVal = 0;
			else if (newVal > 255) newVal = 255;
			result.at<uchar>(i, j) = static_cast<uchar>(newVal);
		}
	}
	result += image;
	return result;
}
