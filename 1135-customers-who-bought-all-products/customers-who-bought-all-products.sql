# Write your MySQL query statement below
WITH cte AS
(SELECT customer_id, COUNT(DISTINCT product_key) cnt
FROM Customer
GROUP BY customer_id)

SELECT customer_id
FROM cte
WHERE cnt = (SELECT COUNT(*) FROM Product)
