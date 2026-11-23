//
#ifndef T1StandardStatusAttachmentViewAdapter_h
#define T1StandardStatusAttachmentViewAdapter_h
@import Foundation;

#include "T1StatusViewAttachmentContainerViewDelegate-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TTACoreBasicStatusView-Protocol.h"
#include "TTACoreStatusViewInlineMedia-Protocol.h"

@class NSArray, NSString, TFNComposableViewAdapter, TFSTwitterScribeContext, UIView;

@interface T1StandardStatusAttachmentViewAdapter : TFNComposableViewAdapter <T1StatusViewAttachmentContainerViewDelegate>

@property (copy, nonatomic) NSArray *customActions;
@property (nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) unsigned long long attachmentType;
@property (retain, nonatomic) UIView *photoVideoForwardView;
@property (copy, nonatomic) id /* block */ attachmentTypeOverride;
@property (readonly, nonatomic) UIView *visibleMediaForwardView;
@property (readonly, nonatomic) UIView *visibleCardForwardView;
@property (readonly, nonatomic) UIView<TTACoreBasicStatusView> *visibleQuotedStatusView;
@property (readonly, nonatomic) UIView *visibleTombstoneView;
@property (readonly, nonatomic) UIView *visibleArticleView;
@property (readonly, nonatomic) UIView *visibleJetfuelFrameView;
@property (readonly, nonatomic) UIView<TTACoreBasicStatusView> *mediaForwardQuotedStatusView;
@property (readonly, nonatomic) id <TAVAutoplayViewContainer> autoplayPlayerContainer;
@property (readonly, nonatomic) id <TTACoreStatusViewInlineMedia> inlineMedia;
@property (readonly, nonatomic) _Bool hasURL;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_t1_unifiedCardPlayerContainerViewForView:(id)view viewModel:(id)model;
+ (_Bool)_t1_displayTypeSupportsQuoteAspectFitVideo:(unsigned long long)video;
+ (_Bool)_isVerticalMediaLayoutForAspectRatio:(double)ratio viewModel:(id)model displayType:(unsigned long long)type;
+ (_Bool)isVerticalVideoLayoutForViewModel:(id)model displayType:(unsigned long long)type;
+ (_Bool)_t1_isVerticalVideoFillWidthEligibleForViewModel:(id)model displayType:(unsigned long long)type;
+ (_Bool)isVerticalPhotoLayoutForViewModel:(id)model displayType:(unsigned long long)type;
+ (id)_t1_cardLayoutMetricsForLayoutMetrics:(id)metrics width:(double)width;

/* instance methods */
- (unsigned long long)_t1_attachmentTypeForViewModel:(id)model;
- (_Bool)openURL;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)translatedViewModelForViewModel:(id)model;
- (void)_t1_updateAttachmentContainerView:(id)view forViewModel:(id)model;
- (void)_t1_updateAccessibilityForViewModel:(id)model;
- (void)_t1_applyCarouselLayoutToState:(id)state mediaInfos:(id)infos viewModel:(id)model layoutMetrics:(id)metrics width:(double)width anatomyFeatures:(id)features;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)_t1_useAdaptiveMediaLayoutForAttachmentType:(unsigned long long)type;
- (double)_t1_carouselTrailingBleedForViewModel:(id)model layoutMetrics:(id)metrics;
- (unsigned long long)_t1_containerDisplayType;
- (_Bool)_t1_usesCarouselForAttachmentType:(unsigned long long)type viewModel:(id)model;
- (_Bool)_t1_shouldUseCarouselForViewModel:(id)model anatomyFeatures:(id)features;
- (id)_t1_userRecommendationViewWithMediaLayoutStateForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width attachmentType:(unsigned long long)type;
- (id)_t1_userRecommendationViewLayoutStateForViewModel:(id)model width:(double)width;
- (struct CGSize { double x0; double x1; })_t1_sensitiveMediaTombstoneViewSizeForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width;
- (struct CGSize { double x0; double x1; })_t1_quotedTombstoneViewSizeForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width;
- (struct CGSize { double x0; double x1; })_t1_mediaSizeForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width attachmentType:(unsigned long long)type anatomyFeatures:(id)features;
- (struct CGSize { double x0; double x1; })_t1_uncappedMediaSizeForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width attachmentType:(unsigned long long)type anatomyFeatures:(id)features;
- (struct CGSize { double x0; double x1; })_t1_photoVideoForwardViewSizeForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width attachmentType:(unsigned long long)type;
- (struct CGSize { double x0; double x1; })_t1_verticalPhotoSizeForAspectRatio:(double)ratio width:(double)width;
- (id)_t1_quotedStandardStatusViewLayoutStateForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width;
- (id)_t1_cardViewLayoutStateForViewModel:(id)model layoutMetrics:(id)metrics width:(double)width;
- (_Bool)showsAdDisclosureForViewModel:(id)model;
- (id)_t1_unifiedCardForViewModel:(id)model features:(id)features;
- (_Bool)_t1_shouldHideFooterForUnifiedCard:(id)card viewModel:(id)model features:(id)features;
- (id)_t1_unifiedCardViewLayoutStateForViewModel:(id)model unifiedCard:(id)card shouldHideFooter:(_Bool)footer layoutMetrics:(id)metrics width:(double)width;
- (id)quotedStatusViewLayoutStateForLayoutState:(id)state;
- (_Bool)shouldUseCarouselForLayoutState:(id)state;
- (_Bool)carouselRequiresScrollingForLayoutState:(id)state;
- (id)userRecommendationViewLayoutStateForLayoutState:(id)state;
- (id)cardViewLayoutStateForLayoutState:(id)state;
- (id)unifiedCardViewLayoutStateForLayoutState:(id)state;
- (long long)cardDisplayModeForOptions:(unsigned long long)options;
- (struct CGSize { double x0; double x1; })mediaForwardImageDownloadSizeForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics attachmentType:(unsigned long long)type;
- (void)didProfileTapOnUserRecommendationView:(id)view cardEvent:(id)event;
- (void)didTapOnQuotedStatusView:(id)view;
- (void)didTapOnArticleView:(id)view;
- (void)didTapOnArticlePlayPauseView:(id)view;
- (_Bool)jetfuelFrameView:(id)view didTapURL:(id)url;
- (id)quotedStatusView:(id)view didSendEvent:(id)event;
- (void)didTapActionOnTombstoneView:(id)view;
- (id)attachmentContainerView:(id)view previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)attachmentContainerView:(id)view zoomConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)didCreateTombstoneViewWithInteractionHandler:(id)handler;
- (id)scribeContextForUserRecommendationView:(id)view;
- (void)photoVideoForwardView:(id)view didLoadImageAtIndex:(unsigned long long)index fromSource:(long long)source error:(id)error;
- (void)photoVideoForwardView:(id)view didTapImageAtIndex:(unsigned long long)index;
- (void)photoVideoForwardViewDidTapResumeImmersiveSession:(id)session;
- (void)photoVideoForwardView:(id)view didTapAttributionForMediaEntity:(id)entity;
- (void)photoVideoForwardView:(id)view didTapAttributionForUserReference:(id)reference sourceStatusID:(id)id;
- (void)photoVideoForwardView:(id)view didLongPressAttributionForMediaEntity:(id)entity;
- (void)photoVideoForwardView:(id)view didTapPrerollCTAWithModel:(id)model;
- (void)photoVideoForwardView:(id)view didTapDismissButton:(id)button withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)cardView:(id)view presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;
- (id)_t1_handleUnifiedCardEvent:(id)event;
- (id)_t1_handleEvent:(id)event;
- (id)_t1_eventWithType:(id)type sender:(id)sender;

@end

#endif /* T1StandardStatusAttachmentViewAdapter_h */
