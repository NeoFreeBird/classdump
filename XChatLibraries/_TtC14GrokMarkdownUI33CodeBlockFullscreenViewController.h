//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUI33CodeBlockFullscreenViewController_h
#define _TtC14GrokMarkdownUI33CodeBlockFullscreenViewController_h
@import Foundation;

@class GrokMarkdownCore.CodeHighlighterTheme, GrokMarkdownCore.CustomUITextView, GrokMarkdownCore.MarkdownEnvironment, GrokMarkdownCore.MarkdownTheme, GrokMarkdownUI.CodeTextViewDelegate ?, Swift.Bool, UIViewController, _$sSS, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSo12UIPasteboardC, _$sSo12UIScrollViewC, _$sSo15UIBarButtonItemCSg, _$sySScSg;

@interface GrokMarkdownUI.CodeBlockFullscreenViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String? language;
    Swift.String code;
    GrokMarkdownCore.CodeHighlighterTheme theme;
    GrokMarkdownCore.MarkdownTheme markdownTheme;
    GrokMarkdownCore.MarkdownEnvironment environment;
    ((Swift.String) -> ())? onTextCopied;
    Swift.Bool showsHTMLPreview;
    __C.UIPasteboard pasteboard;
    Swift.Bool isWrapped;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? highlightTask;
    GrokMarkdownUI.CodeTextViewDelegate ? $__lazy_storage_$_textViewDelegate;
    __C.UIBarButtonItem? $__lazy_storage_$_closeItem;
    __C.UIBarButtonItem? $__lazy_storage_$_previewItem;
    __C.UIBarButtonItem? $__lazy_storage_$_copyItem;
    __C.UIBarButtonItem? $__lazy_storage_$_wrapItem;
    __C.UIScrollView codeScrollView;
    GrokMarkdownCore.CustomUITextView codeTextView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dismissViewer;
- (void)toggleWrap;
- (void)copyCode;
- (void)presentHTMLPreview;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14GrokMarkdownUI33CodeBlockFullscreenViewController_h */
