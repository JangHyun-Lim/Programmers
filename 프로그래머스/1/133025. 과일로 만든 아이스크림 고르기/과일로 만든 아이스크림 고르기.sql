SELECT A.FLAVOR

FROM FIRST_HALF A JOIN ICECREAM_INFO B
ON A.FLAVOR = B.FLAVOR

WHERE A.TOTAL_ORDER > 3000
AND B.INGREDIENT_TYPE = 'fruit_based'

ORDER BY TOTAL_ORDER DESC