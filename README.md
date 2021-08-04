# Learning Center

This is my playground for learning new programming languages. Since my focus is solely on learning the languages I will give my best effort on exercises but will use outside resources if I get stuck. Any resources used for a specific exercise will be included in the References at the bottom of this file. Exercises are sourced from [this](https://www.jamesbaum.co.uk/blether/projects-to-learn-programming-language/) blog post by James Baum.

#### Current languages:

- C++
- Julia

## Enumerated Exercises:

Note: I do not expect to complete all tasks with all languages. Some exercises, like graphics, will likely never be done.

#### Beginner

1. Write a program which finds the factorial of a number entered by the user. (check for all conditions).
2. Develop a program to convert currency X to currency Y and vice versa.
3. Write a program that prins out a triangle from largest to smallest; user inputs the largest number. e.g.:
```
*****
****
***
**
*
```
4. Write a program that prints out a triangle from smallest to largest; user inputs bottom number. e.g.:
```
*
**
***
****
******
```
5. Print out a triangle from smallest to largest, skipping even rows. User inputs largest number. e.g.:
```
*
***
*****
*******
```
6. Develop a program that uses a randomly generated number to select 1 of 3 (or more) functions to show the user.
7. Guessing game. ask the user to guess a number between 1 and a 100. If you guessed correctly, it will say you win. If you're too high or too low it will also let you know.
8. Create a program which generates Fibonacci series til a number 'n', where 'n' is entered by the user. Eg if the user enters 10 then the output would be: 1 1 2 3 5 8
9. Given a string, determine how many of the characters are vowels and how many are consonants. Terminate the string when the input character encountered is non-alphabetic.
10. Find the Fifth root of the sum of the squares of the first 100 ODD numbers only.
11. List all possible combinations of letters in a 4-letter word. Eg 'TEST' can be unscrambled as TEST, TETS, TSET, TSTE, TTSE, TTES, etc.
12. Make a program that allows the user to input either the radius, diameter, or area of the circle. The program should then calculate the other 2 based on the input.
13. Read a line of text and write it out backwards using a recursive function.
14. Write a program to simulate a simple calculator. It should accept two numbers from the user along with the required operation to be performed. Addition, subtraction, division and multiplication are the basic operations that should be implemented. Feel free to implement other operations. Bonus points for splitting the calculation functions into a separate module.
15. Determine how much money is in a piggy bank that contains several £2 coins, £1 coins, 50p coins, 20p coins, 10p coins and 5p coins. Use the following values to test your program: one £2, three £1, five 50p coins, two 20p coins, one 10p coin and fifteen 5p coins.
16. Create a simple palindrome checker program. The program should allow the user to enter a string and check whether the given string is a palindrome or not. Only digits and alphabets should be considered while checking for palindromes - any other characters are to be ignored.
17. Write a program that allows you to input students' midterm, final and homework scores, and calculate a weighted score. Use the following weights: 20% midterm, 40% final, 40% median homework.

#### Intermediate

18. Simple file encryption using ROT13. Optional: allow a choice of encryption eg Caeser cipher.
19. Write a program which will print all the pairs of prime numbers whose sum equals the number entered by the user. Eg 10 = 5 + 5, 7 + 3; 12 = 11 + 1, 5 + 7
20. Write a quiz which retrieves a question and answer from a file. Allow the user to take the quiz, count points total and show score.
21. Read XHTML, remove the tags, then print out the remaining text.
22. Write a program which performs addition, subtraction, multiplication of matrices. The dimensions of both the matrices would be specified by the user (dynamic memory allocation required). Use of structure or a class to define the matrix would be a good idea.
23. Write a program which will perform the job of moving the file from one location to another. The source and destination path will be entered by the user. Perform the required error checking and handle the exceptions accordingly.
24. Create a sophisticated linked list class. You should be able to insert and delete nodes anywhere in the list, and the nodes should have pointers to nodes both in front and behind them.
25. Create a program that implements a database. The fields are hard-coded, and the data is saved in a binary file. Although this isn't really flexibility, you aren't relying on any external libraries or functions.
26. Create a command-line todo list. Users should be able to add, complete and delete items. Bonus: use a database (eg SQLite) to persist todo items between program runs.

#### Expert

27. Write a program which acted like a personal planner. A user can input an event, note things to-do on a certain date.
28. Make a Markov chain generator. Read text from a source, create a histogram and allow different prefix lengths. See Think Python for more details.
29. Noughts and crosses game.
30. Write a phone/address book program, with persistent data. The users should be able to add/delete/change the data.
31. Write a simple payroll program, that would include pay rates, and hours work for employees.
32. Write a card game, eg blackjack
33. Create a chess game.
34. Create a binary tree which has search and sorting functions.
35. Create a quine, (a program that prints out its own source code).
36. Create a Youtube video downloader
37. Make a pokedex - use a database, enums for types/gender etc
38. Site uptime checker - check a website periodically, and email or alert the user if it is down
39. Batch thumbnail processor - select a group of images and generate thumbnails for them all. Use threads.
40. PDF creator - convert a file (html, text etc) to a PDF, or combine several PDFs into one.

#### Graphics

41. Write a program to draw a rectangle, ellipse, square, circle, point and line based on user input.
42. Create a paint program. It should be possible to switch between different tools (circle, rectangle, eraser etc) using pre-defined key strokes.
43. Plot a simple x-y graph for a hardcoded function (e.g. y=cos(x)). It should be possible to zoom in on any part of the graph.
44. Write a program to plot a graph of given equation of form y=f(x) and a range for x as command line arguments. (e.g. mygraphplotter -eq="y=x*x" -xmin=-10, -xmax=10) (PS: more to do with equation solving than graphics)
45. Write the classic brick break-out game (Arkanoid/Breakout)
46. Watermark program - add a watermark to an image

#### Web

47. Make a website which has Home and About pages; these can be static HTML.
48. Make a server which will say hello to the visitor. Should be able to send a name to the server, via POST or GET, and get a JSON response (eg { "response": "Hello Bob!" })
49. Create a site which allows users to sign up and log in.
50. Page scraper - connect to a site and save all images or files or links on the page.

## References:

- Exercises: https://www.jamesbaum.co.uk/blether/projects-to-learn-programming-language/
- James Baum solutions: https://github.com/whostolemyhat/learning-projects
- String permutations: https://www.geeksforgeeks.org/distinct-permutations-string-set-2/, https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
