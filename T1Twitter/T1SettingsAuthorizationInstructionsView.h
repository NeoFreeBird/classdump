//
#ifndef T1SettingsAuthorizationInstructionsView_h
#define T1SettingsAuthorizationInstructionsView_h
@import Foundation;

#include "T1SettingsAuthorizationInstructionsListView.h"

@class UIButton, UILabel, UIView;

@interface T1SettingsAuthorizationInstructionsView : UIView

@property (readonly, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) T1SettingsAuthorizationInstructionsListView *listView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1SettingsAuthorizationInstructionsView_h */
