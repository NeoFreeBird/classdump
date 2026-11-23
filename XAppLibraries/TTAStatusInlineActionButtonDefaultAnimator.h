//
#ifndef TTAStatusInlineActionButtonDefaultAnimator_h
#define TTAStatusInlineActionButtonDefaultAnimator_h
@import Foundation;

#include "TTAStatusInlineActionButtonAnimator-Protocol.h"
#include "TTAStatusInlineAnimatableButton-Protocol.h"

@class NSObject, UIView;

@interface TTAStatusInlineActionButtonDefaultAnimator : NSObject <TTAStatusInlineActionButtonAnimator>

@property (weak, nonatomic) UIView<TTAStatusInlineAnimatableButton> *button;

/* instance methods */
- (void)animateToCount:(long long)count;
- (void)reset;

@end

#endif /* TTAStatusInlineActionButtonDefaultAnimator_h */
