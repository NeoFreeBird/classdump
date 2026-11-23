//
#ifndef _TtC14T1TwitterSwift34FeatureHighlightsFleetlineItemView_h
#define _TtC14T1TwitterSwift34FeatureHighlightsFleetlineItemView_h
@import Foundation;

@class T1TwitterSwift.AvatarPresenceView, T1TwitterSwift.FleetsFeatureHighlightsAvatarView, T1TwitterSwift.FleetsFeatureHighlightsGradientBackgroundView, UIView, _$sSo7UILabelC;

@interface T1TwitterSwift.FeatureHighlightsFleetlineItemView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.FleetsFeatureHighlightsAvatarView avatarView;
    T1TwitterSwift.FleetsFeatureHighlightsGradientBackgroundView gradientView;
    T1TwitterSwift.AvatarPresenceView fleetLineItemView;
    __C.UILabel nameLabel;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift34FeatureHighlightsFleetlineItemView_h */
