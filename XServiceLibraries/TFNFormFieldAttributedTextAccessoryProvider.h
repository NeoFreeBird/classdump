//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFormFieldAttributedTextAccessoryProvider_h
#define TFNFormFieldAttributedTextAccessoryProvider_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNFormFieldAccessoryProvider.h"

@class NSString;

@interface TFNFormFieldAttributedTextAccessoryProvider : TFNFormFieldAccessoryProvider <TFNAttributedTextViewDelegate> {
    /* instance variables */
    id /* block */ _activeRangeHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActiveRangeHandler:(id /* block */)handler;
- (void)setAttributedText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges;
- (void)setText:(id)text forFormFieldView:(id)view withActiveRanges:(id)ranges alignment:(long long)alignment font:(id)font color:(id)color;
- (id)accessoryView;
- (long long)accessoryViewLocation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForAccessoryView:(id)view textFieldEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (_Bool)shouldShowAccessoryView:(id)view forText:(id)text;
- (struct CGSize { double x0; double x1; })sizeForAccessoryView:(id)view thatFitsSize:(struct CGSize { double x0; double x1; })size text:(id)text layoutMetrics:(id)metrics;
- (id)private_attributedStringForText:(id)text activeRanges:(id)ranges alignment:(long long)alignment font:(id)font color:(id)color;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TFNFormFieldAttributedTextAccessoryProvider_h */
