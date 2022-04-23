#include "Header.h"

using std::swap;

float N1(float a, float b) {
	float n = cbrt(a - b);
	return n;
}

float N2(float a, float b) {
	float n = pow(a, 2) + ((a - b) / (sin(a * b)));
	return n;
}

float findN(float a, float b) {
	if (a >= b) {
		return (N1(a, b));
	}
	else {
		return (N2(a, b));
	}
}

float M1(float a, float b, float n) {
	float m = ((n + a) / (-b)) * sqrt(pow(sin(a), 2) - cos(n));
	return m;
}

float M2(float a, float b, float n) {
	float m = pow(b, 2) + ((sin(n * a)) / (cos(n * a)));
	return m;
}

float M3(float a, float b, float n) {
	float m = pow(b, 3) + n * pow(n, 2);
	return m;
}

float findM(float a, float b, float n) {
	if (n < b) {
		return (M1(a, b, n));
	}
	else if (n == b) {
		return (M2(a, b, n));
	}
	else if (n > b) {
		return (M3(a, b, n));
	}
}