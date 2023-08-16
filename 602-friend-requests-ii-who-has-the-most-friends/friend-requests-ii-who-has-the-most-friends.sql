# Write your MySQL query statement below

WITH cte AS
(SELECT requester_id AS id, accepter_id
FROM RequestAccepted

UNION

SELECT accepter_id AS id, requester_id
FROM RequestAccepted)

SELECT id, COUNT(id) AS num
FROM cte
GROUP BY id
ORDER BY COUNT(id) DESC
LIMIT 1
