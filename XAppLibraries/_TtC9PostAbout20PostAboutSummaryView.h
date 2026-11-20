//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9PostAbout20PostAboutSummaryView_h
#define _TtC9PostAbout20PostAboutSummaryView_h
@import Foundation;

@class PostAbout.PostAboutLoadableViewModel PostAbout.PostAboutSummary, PostAbout.PostAboutShimmerView, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSS4text_ _$s12CoreGraphics7CGFloatVMn _$s5widthSo18NSAttributedStringCSg6resulttSg, _$sSa -> __C._NSRange _$s5range_So7UIColorC9baseColort, _$sSd, _$sSo13CADisplayLinkCSg, _$sSo25NSMutableAttributedStringCSg, _$sSo7UILabelC, _$syycSg;

@interface PostAbout.PostAboutSummaryView : UIView { // (Swift)
    /* instance variables */
    PostAbout.PostAboutLoadableViewModel PostAbout.PostAboutSummary viewModel;
    (() -> ())? onHeightChange;
    PostAbout.PostAboutShimmerView shimmerView;
    __C.UILabel summaryLabel;
    Swift.Bool isExpanded;
    nominal type descriptor for CoreGraphics.CGFloat lastRenderedWidth;
    __C.CADisplayLink? revealDisplayLink;
    Swift.Double revealStartTime;
    Swift.Array -> __C._NSRange _$s5range_So7UIColorC9baseColort revealRanges;
    __C.NSMutableAttributedString? revealText;
    Swift.Stringtext first-element-marker  nominal type descriptor for CoreGraphics.CGFloat _$s5widthSo18NSAttributedStringCSg6resulttSg collapsedCache;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didTap;
- (void)layoutSubviews;
- (void)revealTick;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9PostAbout20PostAboutSummaryView_h */
