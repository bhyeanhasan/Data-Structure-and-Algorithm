#### GCD

```
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
```

#### LCM

```
def lcm(a, b):
    return abs(a * b) // gcd(a, b)
```

#### Fibonacci

```angular2html
def fibonacci(n):
    series = [0, 1]
    for i in range(2, n + 1):
        series.append(series[i - 1] + series[i - 2])
    return series
```

#### Factorial
```angular2html
def factorial(n):
    dp = [1] * (n + 1)
    for i in range(1, n + 1):
        dp[i] = dp[i - 1] * i
    return dp[n]
```

#### Prime Sieve
```angular2html
def prime_sieve(n):
    prime = [True for i in range(n + 1)]
    prime[0] = prime[1] = False
    for i in range(2, int(n ** 0.5) + 1):
        if prime[i]:
            for j in range(i * i, n + 1, i):
                prime[j] = False
    return prime

```

#### Number of Divisors
```
def number_of_divisors(n):
    cnt = 0
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            cnt += 1
            if i != n//i:
                cnt += 1
    return cnt

print(number_of_divisors(5))
```
