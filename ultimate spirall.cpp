   #include <iostream>
   using namespace std;
   
   
   void printmatrix(int A){
   int value=A;
   int t=0;
   int b=2*A-2;
   int l=0;
   int r=2*A-2;
   int matrix[b+1][r+1];
   int dir=0;
   while(l<=r&&t<=b)
   {
   {if(dir==0)
   for(int i=l;i<=r;i++)
    {  matrix[t][i]=A;
        dir=1;
   }t++;}
   if(dir==1){
   for(int i=t;i<=b;i++)
   {    matrix[i][r]=A;
   dir=2;
   }r--;}
    if(dir==2){
   for(int i=r;i>=l;i--)
   {    matrix[b][i]=A;
   dir=3;
   }b--;}
   if(dir==3){
   for(int i=b;i>=t;i--)
   {    matrix[i][l]=A;
   dir=0;
   }l++;}
   A--;
   }
   for(int i=0;i<2*value-1;i++)
   {
   	for(int j=0;j<2*value-1;j++)
   	{
   		cout<<matrix[i][j]<<"  ";
	   }
	   cout<<endl;
   }
}

int main()
   {
   	int A;
   	cin>>A;
   	printmatrix(A);
   }
