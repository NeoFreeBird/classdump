//
#ifndef TFNFormFieldTextEntryView_Protocol_h
#define TFNFormFieldTextEntryView_Protocol_h
@import Foundation;

#include "TFNFormFieldView-Protocol.h"

@protocol TFNFormFieldTextEntryView <TFNFormFieldView>

@required

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics displayedLines:(long long)lines;
- (void)setTextFieldDelegate:(id)delegate;
- (void)setTextViewDelegate:(id)delegate;
- (void)setLegacyTextInputDelegate:(id)delegate;

@end

#endif /* TFNFormFieldTextEntryView_Protocol_h */
