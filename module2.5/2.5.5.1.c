#include <stdio.h>
#include  <stdlib.h>

int Det(int **matr, int l) 
{
  int i,g,K,r,n;
  int **p;
  p = (int**)malloc(sizeof(int*)*l);
  for(i=0;i<l;i++)
    p[i] = (int*)malloc(sizeof(int)*l);
    g=0; K=0;
    r=1;
    n=l-1;
  if (l<1)  
  {
  return K;
	}
  if (l==1) {
    K = matr[0][0];
    return(K);
  }
  if (l==2) {
    K=matr[0][0]*matr[1][1]-(matr[1][0]*matr[0][1]);
    return(K);
  }
  if (l>2){
    for (i=0;i<l;i++) {
      printf("%d ", matr[i][g]);
      K = K + r * matr[i][0] * Det(p,n);
      r=-r;
    }
  }
  return(K);
}
