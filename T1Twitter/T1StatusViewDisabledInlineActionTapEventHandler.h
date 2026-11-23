//
#ifndef T1StatusViewDisabledInlineActionTapEventHandler_h
#define T1StatusViewDisabledInlineActionTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewDisabledInlineActionTapEventHandler : NSObject

/* class methods */
+ (void)presentFromViewController:(id)controller limitedAction:(id)action account:(id)account limitedActionCTABlock:(id /* block */)ctablock;

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewDisabledInlineActionTapEventHandler_h */
