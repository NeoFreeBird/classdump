//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDSignInButton_h
#define GIDSignInButton_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class UIControl, UIImageView;

@interface GIDSignInButton : UIControl <NSSecureCoding> {
    /* instance variables */
    UIImageView *_icon;
}

@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) long long style;
@property (nonatomic) long long colorScheme;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)buttonTextFont;
+ (struct CGSize { double x0; double x1; })textSize:(id)size withFont:(id)font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)sharedInit;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)updateUI;
- (void)loadIcon;
- (void)switchToPressed;
- (void)switchToNormal;
- (void)switchToDisabled;
- (void)setEnabled:(_Bool)enabled;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)minWidth;
- (_Bool)isConstraint:(id)constraint equalToConstraint:(id)constraint;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateConstraints;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)drawButtonBackground:(struct CGContext *)background;
- (void)drawButtonText:(struct CGContext *)text;
- (id)buttonText;

@end

#endif /* GIDSignInButton_h */
