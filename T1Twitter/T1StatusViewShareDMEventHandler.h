//
#ifndef T1StatusViewShareDMEventHandler_h
#define T1StatusViewShareDMEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewShareDMEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewShareDMEventHandler_h */
