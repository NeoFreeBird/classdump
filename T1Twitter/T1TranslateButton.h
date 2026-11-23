//
#ifndef T1TranslateButton_h
#define T1TranslateButton_h
@import Foundation;

#include "T1TranslationProvider.h"

@class NSString, UIButton;

@interface T1TranslateButton : UIButton

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } touchRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } touchLogoRect;
@property (retain, nonatomic) NSString *originalLanguage;
@property (retain, nonatomic) T1TranslationProvider *translationProvider;
@property (nonatomic) _Bool showingTranslation;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ logoTapActionBlock;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) double selectionPadding;
@property (nonatomic) double maximumWidth;

/* class methods */
+ (id)button;
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_didTap:(id)tap forEvent:(id)event;
- (_Bool)_t1_isTouchingLogo:(struct CGPoint { double x0; double x1; })logo;
- (void)setHighlighted:(_Bool)highlighted;
- (id)_t1_buildLogoImage;
- (id)_titleColor;
- (id)_t1_buttonTitle;
- (id)accessibilityLabel;
- (double)_t1_imageHeightOffsetForLogo:(id)logo titleString:(id)string logoImage:(id)image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_titleRectWithTitleString:(id)string origin:(struct CGPoint { double x0; double x1; })origin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_imageRectWithOrigin:(struct CGPoint { double x0; double x1; })origin logoImage:(id)image;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_dynamicColorsDidReload:(id)reload;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_drawRectFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_for;
- (void)_t1_drawHighlightWithContext:(struct CGContext *)context andRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_t1_didHover:(id)hover;

@end

#endif /* T1TranslateButton_h */
