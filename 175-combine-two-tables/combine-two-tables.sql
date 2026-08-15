# Write your MySQL query statement below
#select Person.firstName , Person.lastName , Address.city , Address.state from Person Left join Address on Person.personId = Address.personId;
SELECT 
    p.firstName, 
    p.lastName, 
    a.city, 
    a.state 
FROM Person p
LEFT JOIN Address a 
    ON p.personId = a.personId;

