int bSearch(int i, int j, int k){
  if(i > j) return -1;
  if(i == j){
    if(a[i]==k) return i; else return -1;
  }
  int m = (i+j)/2;
  if(a[m] == k) return m;
  if(a[m] < k) return bSearch(m+1,j,k);
  else return bSearch(i,m-1,k);
}
