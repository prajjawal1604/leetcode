# Write your MySQL query statement below
# WITH cte AS
(SELECT M.title AS results
FROM MovieRating R
INNER JOIN Movies M
ON R.movie_id = M.movie_id
WHERE created_at >= '2020-02-01' AND created_at <= '2020-02-29'
GROUP BY R.movie_id
ORDER BY AVG(rating) DESC, title ASC
LIMIT 1)

UNION ALL

# cte2 AS 
(SELECT U.name AS results
FROM MovieRating R
INNER JOIN Users U
ON R.user_id = U.user_id
GROUP BY R.user_id
ORDER BY COUNT(R.user_id) DESC, U.name ASC
LIMIT 1)

# (SELECT name AS results
# FROM cte2)
# UNION
# (SELECT title AS result
# FROM cte)
