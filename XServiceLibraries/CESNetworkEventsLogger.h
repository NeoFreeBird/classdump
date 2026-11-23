//
#ifndef CESNetworkEventsLogger_h
#define CESNetworkEventsLogger_h
@import Foundation;

@class NSObject;

@interface CESNetworkEventsLogger : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 configuredSink;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handleNetworkEvent:(id)event;

@end

#endif /* CESNetworkEventsLogger_h */
