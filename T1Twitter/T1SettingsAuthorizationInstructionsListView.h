//
#ifndef T1SettingsAuthorizationInstructionsListView_h
#define T1SettingsAuthorizationInstructionsListView_h
@import Foundation;

@class NSArray, UIColor, UIStackView, UIView;

@interface T1SettingsAuthorizationInstructionsListView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *items;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1SettingsAuthorizationInstructionsListView_h */
