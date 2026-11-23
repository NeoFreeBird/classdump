//
#ifndef T1StatusViewArticleTapEventHandler_h
#define T1StatusViewArticleTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewArticleTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewArticleTapEventHandler_h */
