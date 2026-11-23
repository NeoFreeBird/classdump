//
#ifndef T1PlayerCardView_h
#define T1PlayerCardView_h
@import Foundation;

#include "T1PlayerCardInlineVideoView.h"
#include "T1PlayerCardInlineVideoViewDelegate-Protocol.h"
#include "T1PlayerCardViewModel.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, TFNButton, TFNTappableHighlightView, TFNTappableImageView, TUIAvatarImageView, TUICardView, UILabel, UILongPressGestureRecognizer;

@interface T1PlayerCardView : TUICardView <T1PlayerCardInlineVideoViewDelegate, TUIImageViewFetchHelperDelegate>

@property (retain, nonatomic) TUIAvatarImageView *avatarView;
@property (retain, nonatomic) TFNTappableImageView *customAttributionView;
@property (retain, nonatomic) UILabel *fullNameLabel;
@property (retain, nonatomic) TFNTappableHighlightView *attributionHighlightView;
@property (retain, nonatomic) TFNAttributedTextView *titleLabel;
@property (retain, nonatomic) TFNTappableHighlightView *titleHighlightView;
@property (retain, nonatomic) TFNAttributedTextView *descriptionLabel;
@property (retain, nonatomic) TFNTappableHighlightView *descriptionHighlightView;
@property (retain, nonatomic) TFNButton *ctaButton;
@property (retain, nonatomic) T1PlayerCardInlineVideoView *playerContainerView;
@property (retain, nonatomic) UILongPressGestureRecognizer *ctaLongPressGestureRecognizer;
@property (retain, nonatomic) T1PlayerCardViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)cardMediaView;
- (void)dealloc;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)updateSubviews;
- (void)_registerEventHandlers;
- (void)setImagePipeline:(id)pipeline;
- (void)fetchImages;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)_inline;
- (void)cardPlayerContainerViewDidTapPlayButtonOverlay:(id)overlay;
- (void)presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (void)_cleanup;
- (void)_viewModelDidUpdate:(id)update;
- (void)_updateUserIfNeeded;
- (void)_updateTitleIfNeeded;
- (void)_updateDescriptionIfNeeded;
- (void)_updateCallToActionIfNeeded;
- (void)_didTapOnAttributionAvatarImage:(id)image;
- (void)_didTapOnAttributionFullName:(id)name;
- (void)_didTapOnLink:(id)link;
- (void)_didLongPressOnLink:(id)link;
- (void)_didTapOnCallToAction:(id)action;
- (void)_didLongPressOnCallToActionWithGestureRecognizer:(id)recognizer;
- (void)_didOpenVideoInWebview:(id)webview;
- (id)playerViewContainer;

@end

#endif /* T1PlayerCardView_h */
