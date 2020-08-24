# Write your MySQL query statement below
SELECT p.FirstName, p.LastName, a.City, a.State FROM Person AS p LEFT JOIN Address as a ON p.PersonId = a.PersonId;