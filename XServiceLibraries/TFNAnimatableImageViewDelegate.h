//
#ifndef TFNAnimatableImageViewDelegate_h
#define TFNAnimatableImageViewDelegate_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"
#include "TFNAnimatableImageView.h"

@class NSObject, NSString;

@interface TFNAnimatableImageViewDelegate : NSObject <CAAnimationDelegate>

@property (readonly, nonatomic) TFNAnimatableImageView *imageView;
@property (readonly, nonatomic) id originalDelegate;
@property (readonly, nonatomic) NSString *animationKey;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageView:(id)view originalDelegate:(id)delegate animationKey:(id)key completion:(id /* block */)completion;
- (void)animationDidStop:(id)stop finished:(_Bool)finished;

@end

#endif /* TFNAnimatableImageViewDelegate_h */
