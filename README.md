Mangoes on Prime Land
---------------------
You have a plot of land divided into **N** pieces, Several people own different ranges of these land pieces.

The land contains mango trees planted at prime-numbered positions. Each tree has a certain number of mangoes.

At the end of the day, mangoes fall off the trees according to **Mango physics**. You need to determine the most amount of mangoes a person owns.

The Mango physics applies to all the trees in the land

It contains numbers representing the location of mangoes from its tree

**Input Format**

-   An integer N, which is the Length of the Field
-   The second line shows No of Persons P(Dividing the field).
-   Followed by P no of persons , For each person, there is an integer representing the number of pieces they own, followed by the ranges of those pieces.
-   Next line shows No of Mangoes per tree.
-   Last line shows the Location of Mangoes from its tree (Mango Physics).

**Constraints**

-   `1 ≤ N ≤ 100`
-   `1 ≤ P ≤ 10`
-   `1 ≤ Pieces ≤ 10`
-   `1 ≤ L,R ≤ N+1`
-   `1 ≤ No.Of.Mangoes ≤ 5`
-   `-10 ≤ Range of Mangoes ≤ 10`

**Output Format**

A single Integer denoting the max number of mangoes a person has among all.

**Note**:

```
The given ranges of land pieces are Inclusive and Exclusive.The first number will be inclusive and the second number will be exclusive.
   Ex:1 5
   -> 1 is Inclusive and 5 is Exclusive.
   -> i.e 1 to 4 are the land pieces of that person.

```

**Sample Input**

```
10     //Length of field
2      //No of persons
2      //pieces of land owned by first person
1 3     //piece 1
3 5     //piece 2
2      //pieces of land owned by second person
5 7     // piece 1
7 11    // piece 2
2      // no of mangoes per tree
-2 1   //Mango physics

```

**Sample Output**

```
4

```

![image](https://s3.amazonaws.com/hr-assets/0/1724430910-b7e4562bff-WhatsAppImage2024-08-23at21.55.42_b121e892.jpg)

**Explanation**:

-   You have 10 locations (numbered 1 to 10).
-   There are 2 Owners(2)
-   There are 2 pieces of locations (ranges of locations where they mangoes droped).
-   The prime numbers between 1 and 10 are 2, 3, 5, and 7.
-   There are 2 "mango physics," which are numbers (-2 and 1) that affect prime-numbered locations.
-   Subtract 2 and add 1 to it. If the result is still within 1 to 10, mark those locations as having a mango.
-   For Owner 1, the total mangos are 4.
-   For Owner 2, the total mangos are 3.
-   The Owner with the most mangos has 4, so the output is 4.

**Sample Input 0**

- 100
- 1
- 2
- 1 25
- 25 101
- 1 0

**Sample Output 0**

25
