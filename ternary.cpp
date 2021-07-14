int ternary_search(int left, int right){
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(check(mid) <= check(mid + 1)){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
  return left;
