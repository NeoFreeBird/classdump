//
#ifndef T1StatusViewMediaTapEventHandler_h
#define T1StatusViewMediaTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewMediaTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewMediaTapEventHandler_h */
