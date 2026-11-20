//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31ImmersiveGoogleNativeAdCardView_h
#define _TtC14T1TwitterSwift31ImmersiveGoogleNativeAdCardView_h
@import Foundation;

#include "GADNativeAdDelegate-Protocol.h"
#include "GADVideoControllerDelegate-Protocol.h"
#include "T1ImmersiveCardPlayerViewProtocol-Protocol.h"
#include "T1ImmersiveCardViewProtocol-Protocol.h"
#include "TAVUIAutoplayable-Protocol.h"

@class Swift.Bool, T1TwitterSwift.GoogleAdPage, T1TwitterSwift.ImmersiveCardViewDelegate ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveCardViewPlayability, T1TwitterSwift.ImmersiveGoogleNativeAdCardViewModel ?, T1TwitterSwift.ImmersiveGoogleNativeAdConfiguration, T1TwitterSwift.ImmersiveLoadingView, T1TwitterSwift.ImmersiveVideoTimelineView ?, T1TwitterSwift.VideoSettingsCoordinator ?, TAVPlayerSessionProducer, TFNTwitterStatus, UIView, _$s10Foundation4DateVMn ?, _$s12CoreGraphics7CGFloatVMn, _$s21TAVSharedAudioSession06SharedbC0C18ConfigurationTokenCMn ?, _$sSo11GADNativeAdCSg, _$sSo12GADMediaViewCSg, _$sSo15GADNativeAdViewC, _$sSo15TFNGradientViewC, _$sSo16TFNDismissButtonCSg, _$sSo16TFNTwitterStatusCSg, _$sSo17TFNTwitterAccountC, _$sSo18NSLayoutConstraintCSg, _$sSo18TUIAvatarImageViewCSg, _$sSo19TTAStatusAuthorViewCSg, _$sSo21TTAStatusBodyTextViewCSg, _$sSo24TAVPlayerSessionProducerCSg, _$sSo33T1ImmersiveCardPlayerViewProtocol_So6UIViewCXcSg, _$sSo6UIViewCSg, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.ImmersiveGoogleNativeAdCardView : UIView <GADVideoControllerDelegate, GADNativeAdDelegate, T1ImmersiveCardViewProtocol, TAVUIAutoplayable> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewDelegate ? delegate;
    Swift.Bool canAutoplay;
    T1TwitterSwift.ImmersiveCardViewPlayability playability;
    T1TwitterSwift.ImmersiveVideoTimelineView ? $__lazy_storage_$_videoTimelineView;
    T1TwitterSwift.VideoSettingsCoordinator ? $__lazy_storage_$_videoSettingsCoordinator;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? cardViewModel;
    Swift.Bool isMuted;
    Swift.Bool canScroll;
    T1TwitterSwift.ImmersiveGoogleNativeAdCardViewModel ? viewModel;
    __C.TFNTwitterAccount account;
    __C.GADNativeAdView nativeAdView;
    __C.TFNGradientView gradientBottom;
    nominal type descriptor for CoreGraphics.CGFloat hSideInset;
    T1TwitterSwift.GoogleAdPage adPage;
    T1TwitterSwift.ImmersiveLoadingView loadingView;
    T1TwitterSwift.ImmersiveGoogleNativeAdConfiguration configuration;
    __C.GADMediaView? $__lazy_storage_$_mediaView;
    __C.TTAStatusAuthorView? $__lazy_storage_$_authorView;
    __C.TUIAvatarImageView? $__lazy_storage_$_avatarView;
    __C.TTAStatusBodyTextView? $__lazy_storage_$_bodyView;
    __C.TTAStatusBodyTextView? $__lazy_storage_$_headlineView;
    __C.TFNButton? $__lazy_storage_$_ctaButton;
    __C.UIView? $__lazy_storage_$_ctaContainer;
    __C.UIView? $__lazy_storage_$_bodyContainer;
    __C.UIView? $__lazy_storage_$_headlineContainer;
    __C.UIView? $__lazy_storage_$_authorContainer;
    __C.UIView? $__lazy_storage_$_avatarContainer;
    __C.TFNDismissButton? $__lazy_storage_$_caretButton;
    __C.TFNButton? $__lazy_storage_$_muteButton;
    __C.GADNativeAd? nativeAd;
    nominal type descriptor for Foundation.Date ? startPlayDate;
    nominal type descriptor for TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ? audioSessionToken;
    __C.NSLayoutConstraint? authorViewHeightConstraint;
    __C.NSLayoutConstraint? headlineViewHeightConstraint;
    __C.NSLayoutConstraint? bodyViewHeightConstraint;
    __C.NSLayoutConstraint? ctaContainerBottomConstraint;
    Swift.Bool defaultVideoPlayerEnabled;
}

@property (nonatomic, readonly) _Bool isNativePictureInPictureActive;
@property (nonatomic, readonly) _Bool isTopTweetCard;
@property (nonatomic, retain) UIView<T1ImmersiveCardPlayerViewProtocol> *playerView;
@property (nonatomic, retain) TAVPlayerSessionProducer *playerSessionProducer;
@property (nonatomic, retain) TFNTwitterStatus *status;
@property (nonatomic, retain) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (void)videoControllerDidEndVideoPlayback:(id)playback;
- (void)videoControllerDidPlayVideo:(id)video;
- (void)videoControllerDidPauseVideo:(id)video;
- (void)videoControllerDidMuteVideo:(id)video;
- (void)videoControllerDidUnmuteVideo:(id)video;
- (void)nativeAdDidRecordImpression:(id)impression;
- (void)nativeAdDidRecordClick:(id)click;
- (void)setPausedByUser:(_Bool)user;
- (void)stopNativePictureInPicture;
- (_Bool)userTappedOnTimestamp:(id)timestamp;
- (void)presentTaggedUserListView;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift31ImmersiveGoogleNativeAdCardView_h */
