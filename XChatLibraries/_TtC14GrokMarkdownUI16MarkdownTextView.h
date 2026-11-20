//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUI16MarkdownTextView_h
#define _TtC14GrokMarkdownUI16MarkdownTextView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class GrokMarkdownCore.CustomUITextView ?, GrokMarkdownRenderer.ViewHierarchy.ViewComponent, GrokMarkdownUI.MarkdownContentViewModel, GrokMarkdownUI.MarkdownTextDecorator ?, GrokMarkdownUI.MarkdownTextDecoratorFactory ?, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn width_AA6heighttSg, _$sSo18NSAttributedStringCSg, _$sySa -> GrokCardsModels.CitationCard _$sGcSg, _$syycSg, __C.CGSize ?;

@interface GrokMarkdownUI.MarkdownTextView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
     empty-list Swift.Array -> GrokCardsModels.CitationCard _$sGcSg onTapCitations;
    (() -> ())? onLaidOutHeightChange;
    GrokMarkdownUI.MarkdownContentViewModel markdownContentViewModel;
    GrokMarkdownRenderer.ViewHierarchy.ViewComponent component;
    GrokMarkdownCore.CustomUITextView ? textView;
    Swift.Bool fillsAvailableWidth;
    __C.CGSize ? cachedSize;
    __C.CGSize ? cachedResult;
    nominal type descriptor for CoreGraphics.CGFloat width_AA6heighttSg measurement;
    nominal type descriptor for CoreGraphics.CGFloat width_AA6heighttSg lastReportedMeasurement;
    __C.NSAttributedString? lastAppliedText;
    GrokMarkdownUI.MarkdownTextDecorator ? textDecorator;
    GrokMarkdownUI.MarkdownTextDecoratorFactory ? textDecoratorFactory;
}

/* instance methods */
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)textView:(id)view menuConfigurationForTextItem:(id)item defaultMenu:(id)menu;
- (id)textView:(id)view editMenuForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14GrokMarkdownUI16MarkdownTextView_h */
