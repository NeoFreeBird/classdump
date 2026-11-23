//
#ifndef T1DashAccountSwitcherAddAccountsBubble_h
#define T1DashAccountSwitcherAddAccountsBubble_h
@import Foundation;

#include "T1DashAccountSwitcherBubble.h"

@class UIImageView;

@interface T1DashAccountSwitcherAddAccountsBubble : T1DashAccountSwitcherBubble {
    /* instance variables */
    UIImageView *_addAccountsIcon;
}

/* class methods */
+ (id)addAccountsIconImageForSize:(struct CGSize { double x0; double x1; })size withHighlighted:(_Bool)highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setBadgeCounts:(id)counts;
- (void)layoutSubviews;

@end

#endif /* T1DashAccountSwitcherAddAccountsBubble_h */
