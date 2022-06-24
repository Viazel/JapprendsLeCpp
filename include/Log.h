#ifndef JAPPRENDSLECPP_LOG_H
#define JAPPRENDSLECPP_LOG_H


class Log {
public:
    enum Level {
        LevelError = 0,
        LevelWarning = 1,
        LevelInfo = 2
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level);

    void Error(const char* message);

    void Warn(const char* message);

    void Info(const char* message);
};


#endif //JAPPRENDSLECPP_LOG_H
