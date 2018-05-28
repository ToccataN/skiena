def getMinimum(array)
  average = 0
  divisor = 0
  minimum = 0
  tempArr =[]
  array.each_with_index do |i, j|
  
    if(!i.is_a?(Float) && j === 0 )
      divisor = i
    elsif (!i.is_a?(Float) && j != 0)
      average = (average/divisor).floor
      tempArr.each do |num|
        minimum += ((num < average) ? average - num : 0 )
      end
      puts " minimum: #{minimum} "
      divisor = i
      average = 0
      tempArr =[]
      minimum = 0
    else
      tempArr.push(i)
      average += i
    end
  end
end

array = [3, 10.00, 20.00, 30.00, 4, 15.00, 15.01, 3.00, 3.01, 0]

getMinimum(array)
