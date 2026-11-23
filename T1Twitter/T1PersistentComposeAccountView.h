//
#ifndef T1PersistentComposeAccountView_h
#define T1PersistentComposeAccountView_h
@import Foundation;

#include "T1AccountAvatarAndNameView.h"

@class UIImageView;

@interface T1PersistentComposeAccountView : T1AccountAvatarAndNameView

@property (readonly, nonatomic) UIImageView *caretImageView;
@property (nonatomic) _Bool accountSwitchingDisabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_t1_updateCaretImageView;

@end

#endif /* T1PersistentComposeAccountView_h */
