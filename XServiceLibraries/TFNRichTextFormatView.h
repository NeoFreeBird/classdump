//
#ifndef TFNRichTextFormatView_h
#define TFNRichTextFormatView_h
@import Foundation;

#include "TFNTextView.h"

@interface TFNRichTextFormatView : TFNTextView

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (void)_tfn_initialize;
- (void)dealloc;
- (void)setAttributedTextWithRichTextFormatData:(id)data;
- (void)setAttributedTextWithRichTextFormatDocumentPath:(id)path;
- (void)_t1_dynamicColorsDidReload:(id)reload;

@end

#endif /* TFNRichTextFormatView_h */
