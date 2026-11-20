//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16XActivityHistory12VideoRowView_h
#define _TtC16XActivityHistory12VideoRowView_h
@import Foundation;

@class HealthFoundation.SensitiveTweetBlurredInterstitialView, Swift.Bool, UIView, XActivityHistory.ActivityHistoryPlaybackObserver ?, XActivityHistory.XActivityHistoryAccountAccess ?, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem4BlurCMn, _$sSSSg, _$sSd, _$sSdSg, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, _$sSo13TAVPlayerViewCSg, _$sSo21TTAStatusBodyTextViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9TAVPlayerCSg;

@interface XActivityHistory.VideoRowView : UIView { // (Swift)
    /* instance variables */
    __C.UIView thumbnailContainer;
    __C.UIImageView thumbnailImageView;
    __C.CAShapeLayer thumbnailBorderLayer;
    nominal type descriptor for XDesignSystem.Blur blurOverlay;
    __C.UIView progressTrack;
    __C.UIView progressFill;
    __C.UILabel durationLabel;
    __C.UIView durationBackground;
    HealthFoundation.SensitiveTweetBlurredInterstitialView sensitiveInterstitialView;
    __C.TTAStatusBodyTextView bodyTextView;
    __C.UILabel titleLabel;
    __C.UIImageView avatarImageView;
    __C.UILabel displayNameLabel;
    __C.TAVPlayerView? tavPlayerView;
    __C.TAVPlayer? tavPlayerHolder;
    nominal type descriptor for Foundation.NSKeyValueObservation ? playerReadyObserver;
    XActivityHistory.ActivityHistoryPlaybackObserver ? historyObserver;
    Swift.Double progress;
    Swift.String? durationString;
    nominal type descriptor for CoreGraphics.CGFloat mediaAspectRatio;
    Swift.Bool showAvatar;
    Swift.String? mediaKey;
    Swift.Double durationSeconds;
    XActivityHistory.XActivityHistoryAccountAccess ? account;
    Swift.Double? lastRefreshedProgress;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC16XActivityHistory12VideoRowView_h */
