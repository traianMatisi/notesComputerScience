int fat(int n) {
    int f;
	if (n == 0){
		return 1;
	}
	else{
		return n*fat(n-1);
	}
	return f;
}

int comb(int n, int p){
    int c;
    c = fat(n) / fat (p) * fat(n-p);
	return c;
}