# library for generating random values
import random


def prime0(n, l):
    q = n - 1
    for i in range(1, l):
        m = q
        y = 1
        # selecting a random number between 1 and n-1
        a = random.randint(1, n-1)
        z = a

        # Computing a^(n-1) mod n
        while m > 0:
            while m % 2 == 0:
                z = (z**2) % n
                m = m/2

            m = m - 1
            y = (y * z) % n

        # If a^(n-1) mod n is not 1, then n is not prime
        if y != 1:
            return False
    # If a^(n-1) mod n is 1, then n is a prime
    return True


# ...User input...
n = int(input())
l = int(input())
print(prime0(n, l))
