question - Write C statements to carry out the following steps.

(a) If item is nonzero, then multiply product by item and save the result in product ; other-
wise, skip the multiplication. In either case, print the value of product.

(b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or
(y - x ), whichever is positive. Do not use the abs or fabs function in your solution.
(c) If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 ,
add x to plus sum.

explanation -

a.) initialized item and product.
    since item is non-zero, multiplied it with product and saved result in product.

b.) used ternary operator through statement- "y = (x > y) ? (x - y) : (y - x);"
    if x>y is true then x-y will be evaluated and stored in y, else y-x will be evaluated and stored in y

c.) initialized zero_count, minus_sum, plus_sum.
    if x is 0 we have to increment zero_count by 1
    else if x is less than 0 we have to put that value in minus_sum
    else we have to put value in plus_sum