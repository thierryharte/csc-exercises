#include <vector>
#include <iostream>

bool isPrime(int m, std::vector<int> primes){
    switch(m){
        case 1:
	    return 0;
	case 2:
 	    return 1;
	default:
    	    for (int i : primes){
	        if(m%i == 0){
	    	    return 0;
	        }
	    }
	    return 1;
    }
}

int sumPrimes(int n) {
    int sum = 0;
    std::vector<int> primes{};
    for ( int i=1; i < n+1; i++ ) {  // loop over possible primes
        if(isPrime(i, primes)){
	    primes.push_back(i);
	    sum+=i;
	}
    }
    return sum;
}
