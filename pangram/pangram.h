#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <cctype>
#include <string>
#include <vector>

namespace pangram {
    
    bool is_pangram(const std::string& s);

}  // namespace pangram

#endif // PANGRAM_H