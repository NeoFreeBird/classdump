//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUI19MarkdownContentView_h
#define _TtC14GrokMarkdownUI19MarkdownContentView_h
@import Foundation;

@class GrokMarkdownUI.MarkdownContentHost ?, GrokMarkdownUI.MarkdownContentViewModel, GrokMarkdownUI.MarkdownStreamingTextUpdater ?, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$sSa -> GrokMarkdownRenderer.ViewHierarchy.ViewComponent, _$sSa -> GrokMarkdownUI.MarkdownContent;

@interface GrokMarkdownUI.MarkdownContentView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownUI.MarkdownContentHost ? host;
    GrokMarkdownUI.MarkdownContentViewModel markdownContentViewModel;
    Swift.Array -> GrokMarkdownRenderer.ViewHierarchy.ViewComponent components;
    Swift.Array -> GrokMarkdownUI.MarkdownContent componentViews;
    nominal type descriptor for Combine.AnyCancellable ? isStreamingCancellable;
    nominal type descriptor for Combine.AnyCancellable ? wrapsCodeBlockLinesCancellable;
    GrokMarkdownUI.MarkdownStreamingTextUpdater ? $__lazy_storage_$_streamingTextUpdater;
    Swift.Bool hasRenderedText;
    nominal type descriptor for CoreGraphics.CGFloat horizontalPadding;
    Swift.Bool isSharedConversation;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14GrokMarkdownUI19MarkdownContentView_h */
