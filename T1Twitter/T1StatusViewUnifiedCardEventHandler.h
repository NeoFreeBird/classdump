//
#ifndef T1StatusViewUnifiedCardEventHandler_h
#define T1StatusViewUnifiedCardEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewUnifiedCardEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event presentingViewController:(id)controller scribeContext:(id)context cardScribeContextProvider:(id)provider;

@end

#endif /* T1StatusViewUnifiedCardEventHandler_h */
