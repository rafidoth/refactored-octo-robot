# Normalization

process of organizing data in database to minimize redundency and dependency.

## Anomaly (Problems)
Mainly these are the problems we face for redundency in database. I tried to explain these below. <br>
![](frame2.png)<br>
this table has high redundency. We'll see what types of problems we face while dealing with this table.<br>

- Update Anomaly <br>
In this table, if we want to update the room for a course we have to update it for all instances where that course is present. Otherwise two instance will have separate room number.<br>
![](frame3.png) <br>

- Delete Anomaly<br>
Suppose, we have to remove the course, then we have to delete every instance of it. Its similar thing like the previous anomaly.<br>

- Insert Anomaly<br>
If a new course is opened and its obvious that no student is enrolled there, in that case how would we insert the course here with its room no because student is null.<br>
![](insertanomaly.png)<br>

If we decompose the table and make it two separate table we can avoid redundency.<br>
![](abc1.png)
![](abc2.png)<br>
