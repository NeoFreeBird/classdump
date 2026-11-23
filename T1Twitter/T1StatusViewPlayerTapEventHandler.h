//
#ifndef T1StatusViewPlayerTapEventHandler_h
#define T1StatusViewPlayerTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewPlayerTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller mediaHandler:(id)handler zoomProvider:(id)provider scribeContext:(id)context cardScribeContextProvider:(id)provider;

@end

#endif /* T1StatusViewPlayerTapEventHandler_h */
