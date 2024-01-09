#include"header.hpp"
void linear_regression(float *input,float *output)
{
	#pragma HLS INTERFACE s_axilite port=return
	#pragma HLS INTERFACE m_axi depth=194 port=input offset=slave
	#pragma HLS INTERFACE m_axi depth=2 port=output offset=slave
	float x_input[194]={};
	memcpy(x_input,(const float*)input,194*sizeof(float));
	int iterations = 1500;
	float alpha = 0.01;
	float theta[2]={};
	float data[97][2]={};
	float data1[2][97]={};
	float y[97]={};
	for(int i=0; i<97; i++)
	{
		data[i][0]=1.0;
		data[i][1]=x_input[i];
		y[i]=x_input[i+97];
		data1[0][i]=1.0;
		data1[1][i]=x_input[i];
	}
	float h[97]={};
	float s=0;
	for(int i=0; i<97; i++)
	{
		h[i]=data[i][0]*theta[0]+data[i][1]*theta[1];
		s+= (h[i]-y[i])*(h[i]-y[i]);
	}
	float j = 1/(2*97)*s;
	float j_data[1500]={};
	for(int i=0; i<iterations; i++)
	{
		float suf[2]={};
		for(int i=0; i<97; i++)
		{
			suf[0]+=data1[0][i]*y[i];
			suf[1]+=data1[1][i]*y[i];
		}
		float xi[2][2]={};
		for(int i=0; i<97; i++)
		{
			xi[0][0]+=data1[0][i]*data[i][0];
			xi[0][1]+=data1[0][i]*data[i][1];
			xi[1][0]+=data1[1][i]*data[i][0];
			xi[1][1]+=data1[1][i]*data[i][1];
		}
		float suf1[2]={};
		suf1[0] = xi[0][0]*theta[0]+xi[0][1]*theta[1];
		suf1[1] = xi[1][0]*theta[0]+xi[1][1]*theta[1];
		float delta[2]={};
		delta[0]=(1/97)*(suf1[0]-suf[0]);
		delta[1]=(1/97)*(suf1[1]-suf[1]);
		theta[0] = theta[0] - alpha*delta[0];
		theta[1] = theta[1] - alpha*delta[1];
		s=0;
		for(int i=0; i<97; i++)
		{
			h[i]=0;
			h[i]=data[i][0]*theta[0]+data[i][1]*theta[1];
			s+= (h[i]-y[i])*(h[i]-y[i]);
		}
		j_data[i] = 1/(2*97)*s;
	}
	memcpy((float*)output,theta,2*sizeof(float));
}
