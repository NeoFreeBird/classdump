//
#ifndef T1StatusPostCtaHandler_h
#define T1StatusPostCtaHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusPostCtaHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *scribeContext;
}

/* instance methods */
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context;
- (void)handleStatusViewEventWithEvent:(id)event;
- (id)init;

@end

#endif /* T1StatusPostCtaHandler_h */
