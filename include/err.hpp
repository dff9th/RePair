#ifndef ERR_HPP_201901030048
#define ERR_HPP_201901030048

#include <string>

// Add prefix ERROR to consider warning case added
enum class ErrorCode {
    ERROR_INVALID_ARG,
    ERROR_FILE_OPEN
};

class Error {
  private:
    const ErrorCode _code;
    const std::string _msg;

  public:
    Error(const ErrorCode code, const std::string& msg)
        : _code {code}, _msg {msg} {}
    bool operator==(const Error& err) const {
        return _code == err._code
            && _msg == err._msg;
    }
    void exit() const;

    friend class ErrorTest;
};

#endif
