//
#ifndef _TtC14T1TwitterSwift27URTTimelineThreadHeaderView_h
#define _TtC14T1TwitterSwift27URTTimelineThreadHeaderView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSString, T1TwitterSwift.ThreadHeaderViewDelegate ?, T1TwitterSwift.URTTimelineThreadHeaderView.ViewModel ?, UIView, _$s10TFNUISwift15BadgesImageViewCMn, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo18TUIAvatarImageViewC, _$sSo24TFNTappableHighlightViewC, _$sSo7UILabelC;

@interface T1TwitterSwift.URTTimelineThreadHeaderView : UIView <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ThreadHeaderViewDelegate ? delegate;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIStackView textContentAndImageContainerView;
    __C.TFNTappableHighlightView highlightView;
    __C.UIStackView fullNameContainerView;
    __C.UIStackView textContentContainerView;
    __C.UILabel usernameLabel;
    __C.UILabel fullNameLabel;
    nominal type descriptor for TFNUISwift.BadgesImageView badgeImageView;
    __C.TUIAvatarImageView authorAvatarView;
    T1TwitterSwift.URTTimelineThreadHeaderView.ViewModel ? viewModel;
}

@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapWithSender:(id)sender;

@end

#endif /* _TtC14T1TwitterSwift27URTTimelineThreadHeaderView_h */
