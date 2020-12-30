int getMax(int arr[]) {
    
    int maior;
    
    for(int i = 0; i < 1; i++) {
        if(arr[i] > arr[i + 1]) {
            maior = arr[i];
        } else {
            maior = arr[i+1];
        }
    }
    
}

int getMin(int arr[]) {
    
    int maior;
    
    for(int i = 0; i < 1; i++) {
        if(arr[i] > arr[i + 1]) {
            maior = arr[i + 1];
        } else {
            maior = arr[i];
        }
    }
    
}