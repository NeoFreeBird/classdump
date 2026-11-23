//
#ifndef _TtC33TwitterListsFeatureImplementation30ListDetailsResizableHeaderView_h
#define _TtC33TwitterListsFeatureImplementation30ListDetailsResizableHeaderView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class T1ResizableHeaderView, TwitterListsFeatureImplementation.ListDetailsResizableHeaderView.ViewModel ?, TwitterListsFeatureImplementation.ListDetailsResizableHeaderViewDelegate ?, UIImage, _$s10TFNUISwift25BadgesImageGeneratorTokenCMn ?, _$s12TwitterLists12ListFeaturesCMn, _$s14TwitterUISwift10UserBadgerVMn ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo18TUIAvatarImageViewC, _$sSo21TFNAttributedTextViewC, _$sSo23TUIImageViewFetchHelperC, _$sSo24TFNTappableHighlightViewC, _$sSo6UIViewC, _$sSo7UIImageCSg, _$sSo7UILabelC, _$sSo9TFNButtonC;

@interface TwitterListsFeatureImplementation.ListDetailsResizableHeaderView : T1ResizableHeaderView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    TwitterListsFeatureImplementation.ListDetailsResizableHeaderViewDelegate ? userActionDelegate;
    __C.UILabel titleLabel;
    __C.UILabel descriptionLabel;
    __C.TFNButton actionButton;
    __C.TFNAttributedTextView memberCountLabel;
    __C.TFNAttributedTextView subscriberCountLabel;
    __C.UIView contentContainerView;
    __C.TUIAvatarImageView ownerAvatarImageView;
    __C.TFNAttributedTextView ownerTextView;
    __C.UIImageView listPrivateImageView;
    __C.TFNTappableHighlightView memberCountHighlightView;
    __C.TFNTappableHighlightView subscriberCountHighlightView;
    __C.TFNTappableHighlightView userHighlightView;
    __C.UILabel headerTitleLabel;
    __C.TUIImageViewFetchHelper imageViewFetchHelper;
    TwitterListsFeatureImplementation.ListDetailsResizableHeaderView.ViewModel ? viewModel;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TwitterUISwift.UserBadger ? userBadger;
    nominal type descriptor for TFNUISwift.BadgesImageGeneratorToken ? userBadgesImageGeneratorToken;
    __C.UIImage? userBadgesImage;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
    __C.UIImage? $__lazy_storage_$_placeholderBannerImage;
}

@property (nonatomic, retain) UIImage *tip_fetchedImage;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (long long)compareBarButtonOptions:(id)options other:(id)other;
- (double)resizableHeaderBannerMinimumHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)actionTappedWithSender:(id)sender;
- (void)userHighlightViewTappedWithTapGestureRecognizer:(id)recognizer;
- (void)memberCountHighlightViewTappedWithTapGestureRecognizer:(id)recognizer;
- (void)subscriberCountHighlightViewTappedWithTapGestureRecognizer:(id)recognizer;

@end

#endif /* _TtC33TwitterListsFeatureImplementation30ListDetailsResizableHeaderView_h */
