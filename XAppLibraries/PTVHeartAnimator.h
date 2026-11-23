//
#ifndef PTVHeartAnimator_h
#define PTVHeartAnimator_h
@import Foundation;

@class NSObject;

@interface PTVHeartAnimator : NSObject

@property (nonatomic) _Bool isTvOS;

/* instance methods */
- (void)animateHeartLayer:(id)layer fromUserLoggedIn:(_Bool)in visibleHeartCount:(long long)count inSuperViewWidth:(double)width completionBlock:(id /* block */)block giftStyle:(id)style;

@end

#endif /* PTVHeartAnimator_h */
