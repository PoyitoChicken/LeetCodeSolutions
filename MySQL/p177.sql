CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N = N-1;
  RETURN (
      select distinct(salary) from Employee e
      order by salary desc
      limit 1  offset N

  );
END