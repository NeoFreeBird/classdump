//
#ifndef TFNAnimatableImageViewLayer_h
#define TFNAnimatableImageViewLayer_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"
#include "TFNAnimatableImageView.h"

@class CALayer, NSString;

@interface TFNAnimatableImageViewLayer : CALayer <CAAnimationDelegate>

@property (weak, nonatomic) TFNAnimatableImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addAnimation:(id)animation forKey:(id)key;

@end

#endif /* TFNAnimatableImageViewLayer_h */
