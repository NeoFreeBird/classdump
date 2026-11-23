//
#ifndef T1StandardStatusGrokCreateOwnImageButtonHandler_h
#define T1StandardStatusGrokCreateOwnImageButtonHandler_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusGrokCreateOwnImageButtonHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *grokFeatures;
    NSNumber"16@0:8 *presentationManager;
}

/* instance methods */
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context;
- (void)handleStatusViewEventWithEvent:(id)event;
- (id)init;

@end

#endif /* T1StandardStatusGrokCreateOwnImageButtonHandler_h */
