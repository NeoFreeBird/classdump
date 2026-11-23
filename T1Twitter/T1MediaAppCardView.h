//
#ifndef T1MediaAppCardView_h
#define T1MediaAppCardView_h
@import Foundation;

#include "T1AppCardDetailsView.h"
#include "T1MediaAppCardViewEventRegistry.h"
#include "T1MediaAppCardViewModel.h"
#include "T1PlayerCardPlayerContainerView.h"
#include "T1PlayerCardPlayerContainerViewDelegate-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSString, TFNSolidColorView, TFNTappableHighlightView, TUICardView, UIImage, UIView;

@interface T1MediaAppCardView : TUICardView <T1PlayerCardPlayerContainerViewDelegate> {
    /* instance variables */
    id <TUICardViewDelegate> _delegate;
}

@property (retain, nonatomic) T1MediaAppCardViewModel *viewModel;
@property (retain, nonatomic) T1MediaAppCardViewEventRegistry *viewEventRegistry;
@property (retain, nonatomic) T1PlayerCardPlayerContainerView *playerContainerView;
@property (retain, nonatomic) TFNTappableHighlightView *imageHighlightView;
@property (retain, nonatomic) T1AppCardDetailsView *detailsView;
@property (retain, nonatomic) TFNTappableHighlightView *detailsHighlightView;
@property (retain, nonatomic) UIView *borderSeparator;
@property (retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView;
@property (retain, nonatomic) UIView *proxyHighlightView;
@property (retain, nonatomic) TFNSolidColorView *dominantColorView;
@property (readonly, nonatomic) UIImage *playerImage;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)playerViewContainer;
- (id)cardMediaView;
- (void)setDelegate:(id)delegate;
- (void)cardContextDidUpdate;
- (void)prepareForReuse;
- (void)restartAnimationsIfNeeded;
- (id)imageFetchingViews;
- (void)setImagePipeline:(id)pipeline;
- (void)fetchImages;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;
- (void)_setupHighlightView:(id)view withAccessibilityIdentifier:(id)identifier;
- (void)_viewModelDidUpdate:(id)update;
- (void)_updateContent;
- (void)_updatePlayerContainerView;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)_inline;
- (void)cardPlayerContainerView:(id)view didTapPlayButtonOverlayWithEvent:(id)event;
- (void)presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (void)_cleanup;
- (id)delegate;

@end

#endif /* T1MediaAppCardView_h */
