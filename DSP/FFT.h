#ifndef FFT_H_
#define FFT_H_

#include "stdlib.h"
#include "math.h"

typedef struct
{
	double real;
	double imag;
} Complex;

void Sin_table(int N);//���ұ�����
unsigned char FFT(Complex *x,int m);	//����ԭ��FFT����������������ʱ��������
void AmpSpectrum(Complex *pData,int m,float* pDCAmp,float* pDistortion);	//pDataΪFFT�任������飬m=log2N��pDCAmpΪֱ������ֵ��pDistortionΪʧ����
void kfft(double *pr,double *pi,int n,int k,double *fr,double *fi);

#endif /* FFT_H_ */
