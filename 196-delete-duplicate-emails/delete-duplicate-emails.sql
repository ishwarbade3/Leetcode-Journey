# Write your MySQL query statement below 
Delete e1 
from person e1
inner join person e2 
where e1.id > e2.id And e1.email = e2.email;

