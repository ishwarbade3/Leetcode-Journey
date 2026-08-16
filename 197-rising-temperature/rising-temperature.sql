# Write your MySQL query statement below
select w2.id As Id
from weather w1 
join weather w2 
on w2.recordDate = Date_Add(w1.recordDate , INTERVAL 1 DAY )
where w2.temperature > w1.temperature;