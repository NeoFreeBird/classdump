//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
