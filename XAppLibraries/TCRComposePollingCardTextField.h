//
#ifndef TCRComposePollingCardTextField_h
#define TCRComposePollingCardTextField_h
@import Foundation;

@class TFNTextField, UILabel;

@interface TCRComposePollingCardTextField : TFNTextField

@property (retain, nonatomic) UILabel *remainingCountLabel;
@property (nonatomic) _Bool isRTL;
@property (nonatomic) _Bool inErrorState;
@property (nonatomic) _Bool composerRedesignEnabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setRemainingCharacterCount:(long long)count;
- (void)setPlaceholder:(id)placeholder;
- (void)_updateTextColor;
- (void)_updateRemainingCountLabelTextColor;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_updateBorderColor;
- (_Bool)isInErrorState;
- (_Bool)isComposerRedesignEnabled;

@end

#endif /* TCRComposePollingCardTextField_h */
