# value_iteration
N × Mのグラフ環境をエージェントが移動する際の
各ノードの価値を求める価値反復を行うコード

N，Mは任意の自然数(デフォルトではN=M=3)

隣接ノードへの移動コストは-1

初期値にはゴールの価値は0，それ以外は-100としている

#実行結果

  ```
  $ ./value_iteration
  
  -100 -100 -100 
  -100 -100 -100 
  -100 -100 0 
  Initialized!
  -100 -100 -100 
  -100 -100 -1 
  -100 -1 0 
  
  -100 -100 -2 
  -100 -2 -1 
  -2 -1 0 
  
  -100 -3 -2 
  -3 -2 -1 
  -2 -1 0 
  
  -4 -3 -2 
  -3 -2 -1 
  -2 -1 0 
  
  -4 -3 -2 
  -3 -2 -1 
  -2 -1 0 
  
  finish!
  ```