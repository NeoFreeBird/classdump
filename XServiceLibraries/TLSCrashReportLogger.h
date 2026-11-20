//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSCrashReportLogger_h
#define TLSCrashReportLogger_h
@import Foundation;

@class NSObject;

@interface TLSCrashReportLogger : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 logger;
}

/* class methods */
+ (id)defaultLoggingChannel;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)instance;

/* instance methods */
- (void)handleNonFatalEventWithNotification:(id)notification;
- (id)init;

@end

#endif /* TLSCrashReportLogger_h */
