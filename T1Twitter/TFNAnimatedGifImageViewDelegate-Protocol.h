//
#ifndef TFNAnimatedGifImageViewDelegate_Protocol_h
#define TFNAnimatedGifImageViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNAnimatedGifImageViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)animatedGifImageViewDidContinueLooping:(id)looping;
- (void)animatedGifImageViewDidFinishLooping:(id)looping;

@end

#endif /* TFNAnimatedGifImageViewDelegate_Protocol_h */
