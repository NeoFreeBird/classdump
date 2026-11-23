//
#ifndef T1StatusGrokAppCardHandler_h
#define T1StatusGrokAppCardHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusGrokAppCardHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *scribeContext;
}

/* class methods */
+ (id)grokAppImmersiveURLForViewModel:(id)model tappedURL:(id)url account:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context;
- (void)handleStatusViewEventWithEvent:(id)event;
- (id)init;

@end

#endif /* T1StatusGrokAppCardHandler_h */
