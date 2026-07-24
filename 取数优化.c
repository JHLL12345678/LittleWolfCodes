//读取每位数的优化
//n 是需要切割的数类型为int
if (n == 0) {
	sum = 0;
}
else {
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
}
