# Write your MySQL query statement below
WITH cte AS
(SELECT L.id, L.num AS num, S.num AS num1
FROM Logs L
INNER JOIN Logs S
ON L.id = (S.id-1)),

cte2 AS
(SELECT C.id, C.num, C.num1, S.num AS num2 
FROM cte C
INNER JOIN Logs S
ON C.id = (S.id-2))

SELECT num AS ConsecutiveNums
FROM cte2
WHERE num = num1 AND num1 = num2
GROUP BY num, num1, num2