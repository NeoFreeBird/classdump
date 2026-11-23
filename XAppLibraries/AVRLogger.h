//
#ifndef AVRLogger_h
#define AVRLogger_h
@import Foundation;

@class NSObject;
@protocol AVRLoggerOutput;

@interface AVRLogger : NSObject

@property (nonatomic) long long minimumLogLevel;
@property (weak, nonatomic) id <AVRLoggerOutput> delegate;

/* class methods */
+ (id)sharedLogger;
+ (id)timeInLocalZone:(id)zone;

/* instance methods */
- (id)init;
- (long long)defaultMinimumLogLevel;
- (_Bool)logWithLevel:(long long)level file:(const char *)file function:(const char *)function lineNumber:(int)number message:(id)message;
- (_Bool)logWithLevel:(long long)level file:(const char *)file function:(const char *)function lineNumber:(int)number format:(id)format;

@end

#endif /* AVRLogger_h */
