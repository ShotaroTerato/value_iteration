#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define N 3
#define M 3

int main()
{
  int i, j;
  char node[N][M];
  char pre_node[N][M];
  const int row_max = N - 1;
  const int col_max = M - 1;
  const int neutral_cost = -1;
  bool loop = true;
  
  //node initialize
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      node[i][j] = -100;
      if(i==row_max && j==col_max)
        node[i][j] = 0;//goal
      printf("%d ", node[i][j]);
    }
    printf("\n");
  }
  printf("Initialized!\n");
  
  //value iteration
  while(loop==true){
    for(i=0; i<N; i++){
      for(j=0; j<M; j++){
        pre_node[i][j] = node[i][j];
      }
    }
    
    for(i=0; i<N; i++){
      for(j=0; j<M; j++){
        if(!(i==row_max)){
          if(node[i][j]<node[i+1][j])
            node[i][j] = node[i+1][j] + neutral_cost;
        }
        if(!(i==0)){
          if(node[i][j]<node[i-1][j])
            node[i][j] = node[i-1][j] + neutral_cost;
        }
        if(!(j==col_max)){
          if(node[i][j]<node[i][j+1])
            node[i][j] = node[i][j+1] + neutral_cost;
        }
        if(!(j==0)){
          if(node[i][j]<node[i][j-1])
            node[i][j] = node[i][j-1] + neutral_cost;
        }
        printf("%d ", node[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    
    loop = false;
    for(i=0; i<N; i++){
      for(j=0; j<M; j++){
        if(!(pre_node[i][j] == node[i][j]))
          loop = true;
      }
    }
  }
  printf("finish!\n");
  return 0;
}
