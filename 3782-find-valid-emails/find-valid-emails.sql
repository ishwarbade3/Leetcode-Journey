# Write your MySQL query statement below
SELECT *
FROM users
WHERE email REGEXP '^[A-Za-z0-9]+@[A-Za-z]+\\.com$' order by user_id;