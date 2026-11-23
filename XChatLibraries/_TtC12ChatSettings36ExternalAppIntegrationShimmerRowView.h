//
#ifndef _TtC12ChatSettings36ExternalAppIntegrationShimmerRowView_h
#define _TtC12ChatSettings36ExternalAppIntegrationShimmerRowView_h
@import Foundation;

@class UIView, _$s13XDesignSystem22ShimmerPlaceholderViewCMn;

@interface ChatSettings.ExternalAppIntegrationShimmerRowView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView disconnectView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView iconView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView subtitleView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView titleView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC12ChatSettings36ExternalAppIntegrationShimmerRowView_h */
