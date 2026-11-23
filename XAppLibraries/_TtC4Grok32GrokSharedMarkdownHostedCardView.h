//
#ifndef _TtC4Grok32GrokSharedMarkdownHostedCardView_h
#define _TtC4Grok32GrokSharedMarkdownHostedCardView_h
@import Foundation;

@class Grok.GrokSharedMarkdownComponentProvider.Content, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$s20GrokMarkdownRenderer13ViewHierarchyO0D9ComponentVMn, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewVMn, _$syyc;

@interface Grok.GrokSharedMarkdownHostedCardView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for GrokMarkdownRenderer.ViewHierarchy.ViewComponent component;
    Grok.GrokSharedMarkdownComponentProvider.Content content;
    nominal type descriptor for SwiftUI.UIHostingController nominal type descriptor for SwiftUI.AnyView hostingController;
    () -> () onHeightChange;
    nominal type descriptor for CoreGraphics.CGFloat ? contentHeight;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok32GrokSharedMarkdownHostedCardView_h */
