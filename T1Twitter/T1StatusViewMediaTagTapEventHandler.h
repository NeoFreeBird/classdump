//
#ifndef T1StatusViewMediaTagTapEventHandler_h
#define T1StatusViewMediaTagTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewMediaTagTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider;

@end

#endif /* T1StatusViewMediaTagTapEventHandler_h */
