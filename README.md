# Fermat's Little Theorem (Primality Test)

Fermat’s little theorem states that if 'p' is a prime number, then for any integer 'a', the number a <sup> p </sup> – a is an integer multiple of 'p'. 
### Special Case:

If 'a' is not divisible by 'p', Fermat’s little theorem is equivalent to the statement that a <sup> p-1 </sup> -1 is an integer multiple of p. 

---
> a <sup> p-1 </sup> ≡ 1 (mod p) 
---
or
---
> a <sup> p-1 </sup> % p = 1 
---
Here 'a' is not divisible by p. 

### Use of Fermat’s little theorem:

If we know 'm' is prime, then we can also use Fermats’s little theorem to find the inverse.

---
> a <sup> m-1 </sup> ≡ 1 (mod m) 
---
If we multiply both sides with a<sup>-1</sup>, we get
> a<sup>-1</sup> ≡ a <sup> m-2 </sup> (mod m) 

## In this repository there are both Python and C++ implementation of Fermat's Primality test

