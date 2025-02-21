std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (auto it = vec.begin(); it != vec.end(); ) {
  if (*it % 2 == 0) { 
    it = vec.erase(it); // Correct approach using iterator
  } else { 
    ++it; 
  } 
}
