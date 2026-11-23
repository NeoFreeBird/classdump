//
#ifndef T1DashAccountSwitcherAccountBubble_h
#define T1DashAccountSwitcherAccountBubble_h
@import Foundation;

#include "T1DashAccountSwitcherBubble.h"
#include "T1DashAvatarContainerView.h"

@class TFNTwitterAccount;

@interface T1DashAccountSwitcherAccountBubble : T1DashAccountSwitcherBubble

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1DashAvatarContainerView *avatarContainerView;

/* instance methods */
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;

@end

#endif /* T1DashAccountSwitcherAccountBubble_h */
