//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormMultiLineTextField_h
#define TFNLegacyFormMultiLineTextField_h
@import Foundation;

#include "TFNLegacyFormField.h"
#include "TFNLegacyFormTextInput-Protocol.h"
#include "TFNLegacyFormTextInputCustomizationDelegate-Protocol.h"
#include "TFNPlaceholderTextView.h"

@class NSString, UITextRange;

@interface TFNLegacyFormMultiLineTextField : TFNPlaceholderTextView <TFNLegacyFormTextInput>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) TFNLegacyFormField *formField;
@property (readonly, nonatomic) UITextRange *selectedTextRange;
@property (weak, nonatomic) id <TFNLegacyFormTextInputCustomizationDelegate> customizationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (double)standardHeightForLayoutMetrics:(id)metrics emphasized:(_Bool)emphasized stacked:(_Bool)stacked;
+ (id)private_font;
+ (double)private_minimumHeightForLines:(long long)lines;
+ (double)private_stackedLineVerticalPadding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRectInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds stacked:(_Bool)stacked;
- (double)baselineYForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)updateTextColor;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (_Bool)_shouldDisableAction:(SEL)action;

@end

#endif /* TFNLegacyFormMultiLineTextField_h */
