## Functional Dependency
[Youtube Lecture Followed](https://www.youtube.com/watch?v=dR-jJimWWHA)<br>
A->B<br>
*Reading : A determines B* <br> 

means B(set of columns) dependent on A(set of columns)
- it also means that for all same values of A, B will contain same values.<br>
![](xyz.png)<br>
Here for all A=3 B =2 and rest are single entities so we can say they're same too. Therefore, its a valid FD.<br>
- A->B Doesn't mean that B->A<br>
![](123.png)<br>
here A->B is valid but B->A isn't. So it may be valid in some cases that is coincidental.<br>
- If A(determinant) values are all distinct then the FD is valid. For Example <br>
![](124.png)<br>


[Lecture Followed for Classification of FD and Armstrong's Axioms](https://www.youtube.com/watch?v=eIH7zRVelnw&list=PLdo5W4Nhv31b33kF46f9aFjoJPOkdlsRc&index=5)
## Trivial Functional Dependency
Let's say we have a FD A->B and B is subset of A then its trivial.<br>

A = {ID, Name} <br> 
B = {Name}<br>
A->B is Trivial <br>
<br>
A = {ID}<br>
B = {ID}<br>
A -> B is Trivial<br>

- Trivial FD always valid.


## Armstrong's Axioms
- Reflexive Rule<br>
if B is subset of A then A->B (Trivial)<br>
- Augmentation Rule<br>
if A->X then AB -> XB<br>
- Transitivity Rule<br>
if A -> B  && B ->C then A -> C<br>

**Some Additional Rules**

- Union Rule<br>
if A -> B and A -> C then A -> BC<br>
- Decomposition / Splitting <br>
if X -> YZ then X->Y and X->Z<br>
but left hand side can't be splitted like this if XY -> MN then it can't be said that X->MN and Y -> N <br>
- Pseudotransitivity <br>
if X -> Y & YZ -> A then XZ -> A<br>
- Compose <br>
if X->Y & A->B then XA -> BY<br>

## Attribute Closure
set of all the attributes which can be determined from an attribute is called attribute closure. <br>
F = {A→B,
A→C,
CG → H,
CG → I,
B → H}<br>
Then $AG^+$ = AGBCHI = ABCGHI<br>

**Super Key**<br>
If an attribute's closure contains all the attributes then its a super key.
Above AG is a super key.

**Candidate Key**<br>
A super key whose proper subset attributes are not super key itself.<br>

**Prime Attribute**<br>
Attributes present in candidate key 
****
[Finding Candidate key](https://www.youtube.com/watch?v=L0LEtrIDYrE&list=PLdo5W4Nhv31b33kF46f9aFjoJPOkdlsRc&index=7)<br>
Steps to follow <br>
Question : <br>
A Relation given that R(A,B,C,D)<br>
FD : <br>
AB -> CD , D->B, C->A<br>

-   find closure of all the attributes together for example $ABCDE^+$ and we know it must be super key.ABCD is a super key which is obvious.<br><br>
$$ABCD^+ = ABCD (superkey) $$ 
- Now remove all the attributes that can be determined from other one. Consider all direct and indirect application of Armstrong's axiom and its additional rules.<br>
$$CD^+ = CDAB (superkey)$$
- Now what you got, check its proper subsets to ensure if its a candidate key or not.<br>
$$C^+ = AC$$
$$D^+ = BD$$
So, CD is a candidate key.
- If you get one candidate key, then write down the prime attributes.
$$Prime Attributes = C,D$$
- Check if Any of the prime attributes is present on the right side of any functional dependency or not. Place them in the present candidate key like this.<br>
From FD $AB->C$<br>
we can write $CD = ABD$ and again step 1 we can get B from D so $AD$ might be a candidate key so check and keep going on this loop until you don't find any of prime attributes at the right of FD.<br>

# Normalization
[Lecture Followed](https://www.youtube.com/watch?v=p-j9emhNVTg&list=PLdo5W4Nhv31b33kF46f9aFjoJPOkdlsRc&index=9) <br>
process of organizing data in database to minimize redundency and dependency.

## Anomaly (Problems)
Mainly these are the problems we face for redundency in database. I tried to explain these below. <br>
![](frame2.png)<br>
this table has high redundency. We'll see what types of problems we face while dealing with this table.<br>

- Update Anomaly <br>
In this table, if we want to update the room for a course we have to update it for all instances where that course is present. Otherwise two instance will have separate room number.<br>
![](frame3.png) <br>

- Delete Anomaly<br>
Suppose, we have to remove the course, then we have to delete every instance of it. Its similar thing like the previous anomaly. Again in another situation, if we want remove a student it will remove the course and its room number too. And lets say that course has only one student then we'll lose the room number associated with that course too.<br>

- Insert Anomaly<br>
If a new course is opened and its obvious that no student is enrolled there, in that case how would we insert the course here with its room no because student is null.<br>
![](insertanomaly.png)<br>

If we decompose the table and make it two separate table we can avoid redundency.<br>
![](abc1.png)
![](abc2.png)<br>


## 1NF 
- Each attribute/column should contain only atomic values. Atomic means it can't be decomposed furthur.<br>
![](125.png)<br>
here Course and Room columns are containing multiple values.<br>
we can create individual row for each cases.<br>
![alt text](image-1.png)<br>

