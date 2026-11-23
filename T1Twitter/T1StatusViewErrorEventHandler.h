//
#ifndef T1StatusViewErrorEventHandler_h
#define T1StatusViewErrorEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewErrorEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewErrorEventHandler_h */
