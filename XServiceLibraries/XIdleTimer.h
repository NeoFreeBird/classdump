//
#ifndef XIdleTimer_h
#define XIdleTimer_h
@import Foundation;

@class NSObject;

@interface XIdleTimer : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 setIdleTimerDisabled;
    B24@0:8@"NSString"16 tokens;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)disable;
- (id)init;

@end

#endif /* XIdleTimer_h */
