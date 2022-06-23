#ifndef JAPPRENDSLECPP_LOG_H
#define JAPPRENDSLECPP_LOG_H


class Log {
public:
    const int LogLevelWarning = 1;
    const int LogeLevelError = 0;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    void SetLevel(int level);

    void Error(const char* message);

    void Warn(const char* message);

    void Info(const char* message);
};


#endif //JAPPRENDSLECPP_LOG_H
