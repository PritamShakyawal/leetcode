# Write your MySQL query statement below
# select t.product_name, s.year, s.price from sales s left join product t on t.product_id = s.product_id;

SELECT product_name, year, price FROM Sales INNER JOIN Product ON Sales.product_id=Product.product_id;