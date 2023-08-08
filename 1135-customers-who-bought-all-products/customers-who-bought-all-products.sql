# Write your MySQL query statement below
SELECT customer_id FROM Customer
Group by customer_id
HAVING COUNT(distinct product_key)=(SELECT COUNT(product_key) FROM Product)
