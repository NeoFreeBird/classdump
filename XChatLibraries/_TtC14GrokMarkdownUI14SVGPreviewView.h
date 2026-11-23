//
#ifndef _TtC14GrokMarkdownUI14SVGPreviewView_h
#define _TtC14GrokMarkdownUI14SVGPreviewView_h
@import Foundation;

@class GrokMarkdownUI.UntrustedContentWebView, UIView, _$sSS, __C.CGSize _$scSg ->;

@interface GrokMarkdownUI.SVGPreviewView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownUI.UntrustedContentWebView webView;
    Swift.String currentSVGContent;
    __C.CGSize _$scSg -> onSizeMeasured;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14GrokMarkdownUI14SVGPreviewView_h */
