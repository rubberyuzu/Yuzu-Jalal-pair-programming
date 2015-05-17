def two_sum(nums, target)
  hash = {}
  nums.each_with_index do |el, i|
    hash[el] = i
  end
  nums.each_with_index do |el, j|
    if hash[target-el] && hash[target-el]!= j
      return [j+1, hash[target-el]+1]
    end
  end
end

p two_sum([2,7,14,16], 9)