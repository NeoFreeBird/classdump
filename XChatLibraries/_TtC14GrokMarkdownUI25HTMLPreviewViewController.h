//
#ifndef _TtC14GrokMarkdownUI25HTMLPreviewViewController_h
#define _TtC14GrokMarkdownUI25HTMLPreviewViewController_h
@import Foundation;

@class GrokMarkdownCore.MarkdownTheme, GrokMarkdownUI.UntrustedContentWebView ?, UIViewController, _$sSS;

@interface GrokMarkdownUI.HTMLPreviewViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String htmlCode;
    GrokMarkdownCore.MarkdownTheme theme;
    GrokMarkdownUI.UntrustedContentWebView ? $__lazy_storage_$_webView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)dismissPreview;
- (void)reloadPreview;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14GrokMarkdownUI25HTMLPreviewViewController_h */
