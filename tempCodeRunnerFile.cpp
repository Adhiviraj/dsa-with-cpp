int left=0, right = n-1;
        while(left<right){
            while(arr[left]==0&& left<right){
                left++;
            }
            while(arr[right]==1 && left<right){
                right--;
            }
            //if we reached here
            //that mean arr[left]=1 and arr[right]=0;
            if(arr[left<right]){
            swap(arr[left],arr[right]);
            right--;
            left++; 
            }
        }
    }