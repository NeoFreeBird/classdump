//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVInteractiveSlideTransitionDelegate_Protocol_h
#define PTVInteractiveSlideTransitionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVInteractiveSlideTransitionDelegate <NSObject>

@required

/* required instance methods */
- (void)interactiveSlideTransitionDidBegin:(id)begin;
- (void)interactiveSlideTransitionDidUpdate:(id)update;
- (void)interactiveSlideTransitionDidComplete:(id)complete;
- (void)interactiveSlideTransitionDidCancel:(id)cancel;

@optional

/* optional instance methods */
- (_Bool)interactiveSlideTransitionShouldBegin:(id)begin;

@end

#endif /* PTVInteractiveSlideTransitionDelegate_Protocol_h */
