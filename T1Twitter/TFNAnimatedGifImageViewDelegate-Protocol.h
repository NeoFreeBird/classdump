//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
