// https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <cmath>

using namespace std;

int floorSqrt(int n){
	int s = 0, e = n, m = s + (e-s)/2;
	int ans = -1;

	while(s<=e){
		int sq = m*m;

		if (sq == n) return m;
		else if (sq>n) e = m-1;
		else {
			ans = m;
			s = m+1;
		}
		m = s + (e-s)/2;
	}
	return ans;
}
float floorSqrtUpto1Decimal(int n){
	int floorSqrtInt = floorSqrt(n);

	float r = (float)floorSqrtInt;

	for(int i = 1; i <= 9; i++){
		 float t = floorSqrtInt + (0.1*i);

		 if(t*t > n) return r;
		 r = t;
	}
	return r;
}
float floorSqrtUpto2Decimal(int n){
	float upto1Decimal = floorSqrtUpto1Decimal(n);

	float r = upto1Decimal;

	for(int i = 1; i <= 9; i++){
		 float t = upto1Decimal + (0.01*i);

		 if(t*t > n) return r;
		 r = t;
	}
	return r;
}
float floorSqrtUpto3Decimal(int n){
	float upto2Decimal = floorSqrtUpto2Decimal(n);

	float r = upto2Decimal;

	for(int i = 1; i <= 9; i++){
		 float t = upto2Decimal + (0.001*i);

		 if(t*t > n) return r;
		 r = t;
	}
	return r;
}

double floorSqrt2(int n, int precision){
	double sqrtInteger = (double) floorSqrt(n);

	double ans = sqrtInteger;

	for(int i = 1; i <= precision; i++){

		double r = ans;	

		for(int j = 1; j <= 9; j++){
			double t = (pow(10, -1*i)*j) + ans;
			if(t*t > n) {ans = r; break;};
			r = t;
		}

	}

	return ans;
}

int main(int argc, char const *argv[])
{
	int n = 36;

	int r = floorSqrt(n);

	float r2 = floorSqrtUpto1Decimal(n);
	float r3 = floorSqrtUpto2Decimal(n);
	float r4 = floorSqrtUpto3Decimal(n);

	double r5 = floorSqrt2(n,10);

	cout << "floorSqrt of : " << n << " is : " << r5 << endl;

	// cout << "floorSqrt of in integer : " << n << " is : " << r << endl;
	// cout << "floorSqrt of in float1 : " << n << " is : " << r2 << endl;
	// cout << "floorSqrt of in float2 : " << n << " is : " << r3 << endl;
	// cout << "floorSqrt of in float3 : " << n << " is : " << r4 << endl;

	return 0;
}