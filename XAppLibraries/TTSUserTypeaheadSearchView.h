//
#ifndef TTSUserTypeaheadSearchView_h
#define TTSUserTypeaheadSearchView_h
@import Foundation;

@class NSString, TFNTokenField, UILabel, UIScrollView, UIView;

@interface TTSUserTypeaheadSearchView : UIView

@property (retain, nonatomic) UIView *bottomBorderLineView;
@property (retain, nonatomic) UIScrollView *searchTokenFieldScrollView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (nonatomic) unsigned long long searchType;
@property (readonly, nonatomic) TFNTokenField *searchTokenField;
@property (copy, nonatomic) NSString *queryText;
@property (copy, nonatomic) NSString *messageText;
@property (nonatomic) _Bool transparent;
@property (nonatomic) double preferredMaxLayoutWidth;

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame searchType:(unsigned long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_didFocusTokenField;
- (_Bool)isTransparent;

@end

#endif /* TTSUserTypeaheadSearchView_h */
