# twosum2

给定一个数组（升序）和一个值，找出两个相加为该值的数组中数的序号。

while循环（左序号<右序号）：
从数组两头开始，计算两数之和。若与给定值相等，返回序号；若不相等，若大于给定值，右序号--（两数之和减小），否则左序号++（两数之和增大）。
