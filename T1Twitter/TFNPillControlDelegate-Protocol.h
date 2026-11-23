//
#ifndef TFNPillControlDelegate_Protocol_h
#define TFNPillControlDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPillControlDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pillControlTapped:(id)tapped;
- (void)pillControl:(id)control animatedOffscreen:(_Bool)offscreen pillTapped:(_Bool)tapped scrolled:(_Bool)scrolled;

@end

#endif /* TFNPillControlDelegate_Protocol_h */
