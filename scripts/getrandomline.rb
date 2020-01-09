def pick_random_line
  chosen_line = nil
  File.foreach("../edited/Law notes.txt").each_with_index do |line, number|
    chosen_line = line if rand < 1.0/(number+1)
  end
  return chosen_line
end

print(pick_random_line())