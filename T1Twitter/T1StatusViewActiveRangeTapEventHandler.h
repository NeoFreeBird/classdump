//
#ifndef T1StatusViewActiveRangeTapEventHandler_h
#define T1StatusViewActiveRangeTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewActiveRangeTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewActiveRangeTapEventHandler_h */
