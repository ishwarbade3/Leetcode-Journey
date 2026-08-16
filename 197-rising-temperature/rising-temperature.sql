# Write your MySQL query statement below
select w1.id As id
from weather w1 
join weather w2 
on w2.recordDate = Date_SUB(w1.recordDate , INTERVAL 1 DAY )
where w1.temperature > w2.temperature;