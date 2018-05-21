@count = 0

def rec(x)
  @count = @count + 1
  if x == 1
     return @count
  else
    return ((x%2==0) ? rec(x/2) : rec((3*x)+1))
  end
end

def iterator(i, j)
  maxnum = 0
  temp = 0
  x = i
  while(i <= j)
     @count = 0
     temp = rec(i)
     if temp > maxnum
        maxnum = temp
     end
     i += 1;
  end
  puts "#{x} #{j} #{maxnum}"
end

iterator(100,200)
