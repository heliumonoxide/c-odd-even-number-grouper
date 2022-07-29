int penjumlahanArray(int urutan, int array[urutan]){
	int i;
	int total = 0;
	
	for(i = 0; i < urutan; i++){
		total += array[i];
	}
	
	return total;
}
