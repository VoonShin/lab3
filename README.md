# lab3

# lab3.A g++ lab3.cpp   ./a.exe

# lab3.B :

# For n <= 1000, time used of both of the type of sorting is the same, that is 0 second.

# For n <= 10000, the time of function sort() used is 0 second, while the insertion sort is 0.656 second.

# For n >= 100000, the time of fuction sort() used is 0.046, while the insertion sort can't work.

# For n >= 1000000, the time of fuction sort() used is 0.422, while the insertion sort still can't work.

# From the above result, we know that function sort() can work for more number and also faster than insertion sort, and insertion can't work for higher number as we seen from the result above.

# This situation formed is because of the Big-O-notation algorithm, function sort() is O(n logn) and insertion sort is O(n^2).

# We can prove that the efficiency of these two sorting types by using limit calculation:

#        n log(n)        log(n)   (Hôpital)       1/n          1
#   lim --------- = lim --------      =     lim ------- = lim --- = 0
#          n^2             n                       1           n

# From the above, we can see that n^2 is grow faster than n log n, however, when n approach to infinite, the limit will become 0, so n^2 is not suitable for smaller number but not for a larger number.
# On the other side, we can see that n log n grow slower but when n approach to infinite, it won't affect the limit.
# Therefore, we can state that n log n is efficiently working for the larger number.

# In conclusion, n^2 can be efficiency when using a small number but not for a large number while n log n is suitable for using all number, this is the difference of two types of sorting.
