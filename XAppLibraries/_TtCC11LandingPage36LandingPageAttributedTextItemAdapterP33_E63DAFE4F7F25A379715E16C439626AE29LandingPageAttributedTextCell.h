//
#ifndef _TtCC11LandingPage36LandingPageAttributedTextItemAdapterP33_E63DAFE4F7F25A379715E16C439626AE29LandingPageAttributedTextCell_h
#define _TtCC11LandingPage36LandingPageAttributedTextItemAdapterP33_E63DAFE4F7F25A379715E16C439626AE29LandingPageAttributedTextCell_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class TFNTableViewCell;

@interface LandingPage.LandingPageAttributedTextItemAdapter.(LandingPageAttributedTextCell in _E63DAFE4F7F25A379715E16C439626AE) : TFNTableViewCell <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onLinkClick;
    @40@0:8:16@24@32 $__lazy_storage_$_attributedTextLabel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtCC11LandingPage36LandingPageAttributedTextItemAdapterP33_E63DAFE4F7F25A379715E16C439626AE29LandingPageAttributedTextCell_h */
