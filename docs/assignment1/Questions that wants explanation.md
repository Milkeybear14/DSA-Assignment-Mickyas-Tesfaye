```md
Author: Mickyas Tesfaye
ID_No:URC109/14
```


<h4>5. Combined Time Complexity</h4>

The combined time complexity of two nested loops is the product of their individual time complexities.
 In this case, the outer loop has a time complexity of O(n), and the inner loop has a time complexity of O(m).
 Therefore, the combined time complexity is O(n * m).

<h4>7.The given code defines a recursive method printOut that takes an integer n as input and prints out its individual digits in reverse order.
 The method achieves this by repeatedly dividing the input number by 10 to extract its digits, and then printing each digit using a helper function printDigit.</h4>

code's functionality and its execution steps:

1. The method printOut is called with an integer n as input.
2. It checks if the value of n is greater than or equal to 10.
3. If n is greater than or equal to 10, the method recursively calls itself with n divided by 10 (integer division). This effectively moves the decimal point of the number one position to the left, removing the last digit.
4. The method then calls the printDigit function with the remainder of n divided by 10. This extracts the last digit of the number.
5. The printDigit function is assumed to be responsible for printing the digit passed to it.

The recursive process continues until the input number becomes less than 10. At this point, the recursion stops and the method starts printing out the digits in reverse order as the recursion unwinds.
```md
For example, if n is 1234567:
- printOut(1234567) would call printOut(123456) and then print digit 6.
- printOut(12345) would call printOut(1234) and then print digit 4.
- printOut(1234) would call printOut(123) and then print digit 3.
- This pattern continues until printOut(12) and printOut(1) are called, and the digits 2 and 1 are printed.
```
```md
Regarding time complexity:
- The recursion occurs O(log n) times, where n is the input number, because in each recursive call, n is divided by 10.
- For each recursion step, the printDigit operation takes constant time (O(1)), as it's just printing a single digit.
- Therefore, the overall time complexity of the printOut method is O(log n).
```



