//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUI15MarkdownWebView_h
#define _TtC14GrokMarkdownUI15MarkdownWebView_h
@import Foundation;

@class GrokMarkdownCore.MarkdownEnvironment, GrokMarkdownCore.MarkdownTheme, GrokMarkdownRenderer.ViewHierarchy.ViewComponent, GrokMarkdownUI.ChartLoadResult ?, GrokMarkdownUI.ChartLoadResult _$scSg ->, GrokMarkdownUI.MarkdownCodeBlockView ?, GrokMarkdownUI.UntrustedContentDocument ?, GrokMarkdownUI.UntrustedContentWebView, Swift.Bool, UIView, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSo16UIViewControllerCSg, _$sSo6UIViewCSg, _$syycSg;

@interface GrokMarkdownUI.MarkdownWebView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownRenderer.ViewHierarchy.ViewComponent component;
    GrokMarkdownCore.MarkdownTheme theme;
    GrokMarkdownCore.MarkdownEnvironment environment;
    Swift.String? pendingChartCode;
    Swift.String? renderedChartCode;
    Swift.Bool isShellLoaded;
    Swift.Bool isShellLoading;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? renderTask;
    GrokMarkdownUI.ChartLoadResult ? chartLoadResult;
    GrokMarkdownUI.ChartLoadResult _$scSg -> onChartLoadResult;
    (() -> ())? onContentHeightChange;
    __C.UIView? $__lazy_storage_$_backgroundView;
    __C.UIView? loadingViewContainer;
    __C.UIViewController? loadingHostingController;
    GrokMarkdownUI.UntrustedContentWebView webView;
    GrokMarkdownUI.MarkdownCodeBlockView ? fallbackCodeBlockView;
    GrokMarkdownUI.UntrustedContentDocument ? shellDocumentForTesting;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14GrokMarkdownUI15MarkdownWebView_h */
