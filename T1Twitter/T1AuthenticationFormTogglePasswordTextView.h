//
#ifndef T1AuthenticationFormTogglePasswordTextView_h
#define T1AuthenticationFormTogglePasswordTextView_h
@import Foundation;

@class NSString, TFNAttributedTextView;

@interface T1AuthenticationFormTogglePasswordTextView : TFNAttributedTextView

@property (copy, nonatomic) NSString *labelString;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) unsigned long long togglePasswordType;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithPasswordLength:(unsigned long long)length;
- (void)showOrHideForPasswordField:(id)field;
- (void)setHidden:(_Bool)hidden;
- (void)_didUpdateSecureTextEntry:(id)entry;
- (void)_updateLabelString;
- (void)_updateTextModel;

@end

#endif /* T1AuthenticationFormTogglePasswordTextView_h */
