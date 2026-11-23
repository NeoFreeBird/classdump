//
#ifndef TFNLinkTextLabel_h
#define TFNLinkTextLabel_h
@import Foundation;

#include "TFNAccessibilityProxyView.h"

@class NSMutableDictionary, NSTextStorage, UILabel;

@interface TFNLinkTextLabel : UILabel {
    /* instance variables */
    NSMutableDictionary *_axViews;
    NSTextStorage *_textStorage;
}

@property (retain, nonatomic) TFNAccessibilityProxyView *accessibilityProxyView;
@property (nonatomic) _Bool entireTextIsLink;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setAttributedText:(id)text;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setText:(id)text;
- (_Bool)isAccessibilityElement;
- (void)_tfn_updateAXViews;
- (void)_tfn_updateAccessibilityProxy;
- (void)_tfn_addAXViews;
- (void)_tfn_removeAXViews;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (void)convertToAttributedTextLink;
- (void)convertToAttributedTextLinkWithTapHandler:(id /* block */)handler;
- (void)convertToAttributedTextWithLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range tapHandler:(id /* block */)handler;
- (void)convertToAttributedTextWithLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range color:(id)color tapHandler:(id /* block */)handler;
- (void)convertToAttributedTextWithLinks:(id)links color:(id)color tapHandler:(id /* block */)handler;
- (void)setAttributedText:(id)text links:(id)links color:(id)color tapHandler:(id /* block */)handler;

@end

#endif /* TFNLinkTextLabel_h */
