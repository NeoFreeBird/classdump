//
#ifndef T1URTLiveEventTimelineTweetInjectionListener_h
#define T1URTLiveEventTimelineTweetInjectionListener_h
@import Foundation;

@class NSObject;

@interface T1URTLiveEventTimelineTweetInjectionListener : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *handler;
}

/* instance methods */
- (void)observe:(id)observe;
- (void)compositionDidSend:(id)send;
- (id)init;

@end

#endif /* T1URTLiveEventTimelineTweetInjectionListener_h */
