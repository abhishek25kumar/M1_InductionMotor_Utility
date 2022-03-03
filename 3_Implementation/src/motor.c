#include "motor.h"
int main()
{
	int ph,po,ns;
	
	double p,v,f,bav,q,kw,pf,eff,iron,qs,currentdensity,d1,sf,B,dcd,h,lip,wedge,Ns,Co,Q,L,D,pp,Li,pspeed,flux,Tp,ss,yss,sp,sc,zss,alpha,kp,kd,Is,IsL,A,density,S,As,wts,Lmts,Bmst,fluxstator,Asc,dcs,dss,Do, le3;
	int as, Db, cs,kws;
	
	printf("INPUT THE SPECIATIONS OF THE INDUCTION MOTOR\n");
	
	printf("Enter the values in the following order seperated by a space (\"no of phases\" \"power in KW\" \"voltage in volts\" \"frequency in Hz\" \"no of poles\" \"bav in Wb/m2\" \"ac in a/m\" \"winding factor\" \"power factor\" \"eff of m/c\" \"iron factor\" \"no of stator slots per phase\" \"current density corresponding to stator line current\" \"bare diameter in m\" \"diameter of enamelled conductor CORRESPONDING TO DENSITY in meters\" \"space factor for the slots\" \"flux density of the stator core in wb/m2\" \"core depthin meters\" \"height of the core in m\" \"lip in meters\" \"nwedge in meters\")\n");

	scanf("%d %lf %lf %lf %d %lf %lf %lf %lf %lf %lf %lf %lf %d %lf %lf %lf %lf %lf %lf %lf ",&ph,&p,&v,&f,&po,&bav,&q,&kw,&pf,&eff,&iron,&qs,&currentdensity,&Db,&d1,&sf,&B,&dcd,&h,&lip,&wedge);
	
	Ns = (120*f)/po;
	
	ns = (2*f)/po;
	
	Co = 11*kw*bav*q*0.01;
	
	Q = p/(eff*pf);
	
	D = pow(((Q/(Co*ns))/1.18),(1/3));
	
	L = 1.18*D;
	
	pp = (pi*D)/po;
	
	Li = (L-2*0.01)*iron;
	
	pspeed = (pi*D*ns);
	
	flux = bav*(pi*D*L)/po;
	
	Tp=v/(4.44*f*flux*kw);
	
	ss=ph*po*qs;
	
	yss=(pi*D)/ss;
	
	sp=ss/ph;
	
	sc=6*Tp;
	
	zss=sc/ss;
	
    cs=ss/po;

    if(cs % 2 == 0)

	{
		alpha = (1/cs)*180;
		
		kp = cos((alpha/2)*(pi/180));
		
		kd = (sin((qs*alpha)/2)*(pi/180))/(qs*(sin((qs*alpha/4)*(pi/180))));
		
		kws = kp*kd;
	}

	Is=(p*le3)/(3*v*eff*pf);
	
	IsL=sqrt(3)*Is;
	
	A=Is/4;
	
    as=pi/(4*Db^2);
	
	density=Is/as;
	
	S=zss*as;
	
	As=S/sf;
	
	wts=flux/(1.7*(ss/po)*Li);
	
	Lmts=(2*L)+(2.3*((pi*D)/4))+ss;
	
	Bmst=flux/((ss/p)*wts*Li);
	
	fluxstator=flux/2;
	
	Asc=fluxstator/B;
	
	dcs=Asc/Li;
	
	dss=h+lip+wedge;
	
	Do=D+2*dss+2*dcs;

    printf("\n\n\n DIAMETER AND NET LENGTH OF THE INDUCTION MOTOR");
	
	printf("\n THE DIAMETER OF THE INDUCTION MOTOR=%.6f METERS \n",D);
	
	printf("\n THE NET LENGTH OF THE INDUCTION MOTOR=%.6f METERS\n",Li);
	
	printf("\n THE COIL SPAN OF THE INDUCTION MOTOR=%.4d \n",cs);
	
	printf("\n THE STATOR LINE CURRENT OF THE INDUCTION MOTOR=%.4f AMPS \n",IsL);
	
	printf("\n THE DENSITY OF STATOR CONDUCTOR OF THE INDUCTION MOTOR=%.10f A/M2 \n",density);
	
	printf("\n########################################################################## \n");
	
	printf("\n OUTPUT OF THE STATOR DESIGN OF INDUCTION MOTOR \n");
	
	printf("\n########################################################################## \n");
	
	printf("\n THE FLUX PER POLE OF THE INDUCTION MOTOR=%.4f WB \n",flux);
	
	printf("\n THE STATOR TURNS PER POLE OF THE INDUCTION MOTOR=%.4f TURNS \n",Tp);
	
	printf("\n THE STATOR WINDING FACTOR OF THE INDUCTION MOTOR=%d \n ",kws);
	
	printf("\n THE STATOR CURRENT OF THE INDUCTION MOTOR=%.4f AMPS \n",Is);
	
	printf("\n THE WIDTH OF THE STATOR TEETH OF THE INDUCTION MOTOR=%.4f METERS \n",wts);
	
	printf("\n THE LENGTH OF MEAN TURN OF THE INDUCTION MOTOR=%.4f METERS \n",Lmts);
	
	printf("\n THE FLUX DENSITY IN STATOR TEETH OF THE INDUCTION MOTOR=%.4f WB \n",Bmst);
	
	printf("\n THE DEPTH OF STATOR CORE OF THE INDUCTION MOTOR=%.4f METERS \n",dcs);
	
	printf("\n THE OUTER DIAMETER OF STATOR LAMINATIONS OF THE INDUCTION MOTOR=%.4f METERS \n",Do);
	
	printf("\n########################################################################## \n");
	
	return 0;
}
