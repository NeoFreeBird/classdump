//
#ifndef T1StatusViewProtectedAccountRetweetTapEventHandler_h
#define T1StatusViewProtectedAccountRetweetTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewProtectedAccountRetweetTapEventHandler : NSObject

/* class methods */
+ (void)presentFromViewController:(id)controller conversationControl:(id)control sourceInfo:(id)info account:(id)account scribeContext:(id)context;

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewProtectedAccountRetweetTapEventHandler_h */
