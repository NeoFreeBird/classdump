//
#ifndef T1SettingsAuthorizationInstructionView_h
#define T1SettingsAuthorizationInstructionView_h
@import Foundation;

@class UIImageView, UILabel, UIView;

@interface T1SettingsAuthorizationInstructionView : UIView

@property (readonly, nonatomic) UILabel *outlineLabel;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIImageView *imageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)shouldGroupAccessibilityChildren;

@end

#endif /* T1SettingsAuthorizationInstructionView_h */
