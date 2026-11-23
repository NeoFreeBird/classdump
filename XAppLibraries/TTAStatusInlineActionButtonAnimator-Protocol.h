//
#ifndef TTAStatusInlineActionButtonAnimator_Protocol_h
#define TTAStatusInlineActionButtonAnimator_Protocol_h
@import Foundation;

#include "TTAStatusInlineAnimatableButton-Protocol.h"

@class UIView;

@protocol TTAStatusInlineActionButtonAnimator

@required

@property (weak, nonatomic) UIView<TTAStatusInlineAnimatableButton> *button;

/* required instance methods */
- (void)animateToCount:(long long)count;
- (void)reset;

@optional

@end

#endif /* TTAStatusInlineActionButtonAnimator_Protocol_h */
