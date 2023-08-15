# Write your MySQL query statement below
WITH cte AS
(SELECT visited_on, SUM(amount) AS total_amount
FROM Customer
GROUP BY  visited_on),

cte2 AS
(SELECT
  a.visited_on,
  SUM(b.total_amount) AS amount,
  ROUND(SUM(b.total_amount)/7,2) AS average_amount
FROM cte a, cte b
WHERE DATEDIFF(a.visited_on, b.visited_on) BETWEEN 0 AND 6
GROUP BY a.visited_on
ORDER BY a.visited_on)

SELECT *
FROM cte2
WHERE visited_on >= (SELECT visited_on FROM cte ORDER by visited_on LIMIT 1 ) + 6
ORDER BY visited_on