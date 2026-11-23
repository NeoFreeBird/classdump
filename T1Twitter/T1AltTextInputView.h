//
#ifndef T1AltTextInputView_h
#define T1AltTextInputView_h
@import Foundation;

#include "T1AltTextInputViewDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, TFNTextView, UIColor, UILabel, UIView;

@interface T1AltTextInputView : UIView <UITextViewDelegate> {
    /* instance variables */
    TFNTextView *_textView;
    UILabel *_placeholderLabel;
}

@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textInsets;
@property (weak, nonatomic) id <T1AltTextInputViewDelegate> delegate;
@property (nonatomic) _Bool scrollEnabled;
@property (nonatomic) _Bool shouldUseDarkVariant;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (void)scrollToTop;
- (void)textViewDidChange:(id)change;
- (void)_t1_updateColors;
- (void)_t1_updatePlaceholderAnimated:(_Bool)animated;

@end

#endif /* T1AltTextInputView_h */
