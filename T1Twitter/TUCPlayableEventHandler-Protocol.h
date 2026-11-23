//
#ifndef TUCPlayableEventHandler_Protocol_h
#define TUCPlayableEventHandler_Protocol_h
@import Foundation;

@protocol TUCPlayableEventHandler

@required

/* required instance methods */
- (void)handlePlayableEvent:(id)event presentingViewController:(id)controller;

@optional

@end

#endif /* TUCPlayableEventHandler_Protocol_h */
