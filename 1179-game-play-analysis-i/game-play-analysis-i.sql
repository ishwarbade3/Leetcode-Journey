# Write your MySQL query statement below
-- select distinct player_id ,event_date as first_login
-- from activity
-- group by player_id; 
select player_id,min(event_date) as first_login 
from activity
 group by player_id ;