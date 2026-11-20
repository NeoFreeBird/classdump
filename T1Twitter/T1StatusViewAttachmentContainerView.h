//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewAttachmentContainerView_h
#define T1StatusViewAttachmentContainerView_h
@import Foundation;

#include "T1CardContainerView.h"
#include "T1QuotedStandardStatusView.h"
#include "T1StatusAttachmentSensitiveContentOverlayController.h"
#include "T1StatusInlineArticleView.h"
#include "T1StatusPhotoVideoForwardView.h"
#include "T1StatusViewAttachmentContainerViewDelegate-Protocol.h"
#include "T1TombstoneView.h"
#include "T1TombstoneViewDelegate-Protocol.h"
#include "T1URTRichTextStatusEventInteractionHandler.h"
#include "T1UnifiedCardView.h"
#include "T1UserRecommendationView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TFNReusableViewCacheContainer-Protocol.h"
#include "TFNZoomable-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "_TtP21TweetMediaAttachments33MultiMediaCarouselScrollObserving_-Protocol.h"

@class NSString, TFNReusableViewCache, TFNTwitterAccount, TFSTwitterScribeContext, UIView;

@interface T1StatusViewAttachmentContainerView : UIView <T1TombstoneViewDelegate, TFNLayoutMetricsEnvironment, TFNPreviewable, TFNReusableViewCacheContainer, TFNZoomable> {
    /* instance variables */
    TFNTwitterAccount *_account;
    long long _quotedPostAutoTranslatePreferenceVersion;
    T1StatusAttachmentSensitiveContentOverlayController *_sensitiveContentOverlayController;
    _Bool _usesMultiMediaCarousel;
}

@property (readonly, nonatomic) T1TombstoneView *tombstoneView;
@property (readonly, nonatomic) T1UserRecommendationView *userRecommendationView;
@property (readonly, nonatomic) T1StatusPhotoVideoForwardView *photoVideoView;
@property (readonly, nonatomic) T1CardContainerView *cardContainerView;
@property (readonly, nonatomic) T1UnifiedCardView *unifiedCardView;
@property (readonly, nonatomic) T1QuotedStandardStatusView *quotedStatusView;
@property (readonly, nonatomic) T1StatusInlineArticleView *articleView;
@property (retain, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) UIView *attachmentView;
@property (nonatomic) unsigned long long displayType;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) unsigned long long attachmentType;
@property (weak, nonatomic) id <T1StatusViewAttachmentContainerViewDelegate> delegate;
@property (retain, nonatomic) id layoutState;
@property (readonly, nonatomic) T1URTRichTextStatusEventInteractionHandler *tombstoneInteractionHandler;
@property (weak, nonatomic) id <TweetMediaAttachments.MultiMediaCarouselScrollObserving> carouselScrollObserver;
@property (readonly, nonatomic) _Bool carouselRunsThroughRowGutters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;

/* class methods */
+ (unsigned long long)attachmentTypeForMediaType:(unsigned long long)type;

/* instance methods */
- (id)init;
- (void)setViewModel:(id)model options:(unsigned long long)options account:(id)account attachmentType:(unsigned long long)type displayType:(unsigned long long)type usesMultiMediaCarousel:(_Bool)carousel scribeContext:(id)context;
- (void)cleanup;
- (void)setIsAccessibilityElement:(_Bool)element;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_t1_setCarouselEnabled:(_Bool)enabled forPhotoVideoView:(id)view;
- (void)_t1_applyCarouselGeometryToPhotoVideoView:(id)view layoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_t1_carouselRowGutterInsets;
- (void)layoutSubviews;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)zoomConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)didTapOnViewButtonWithTombstoneView:(id)view;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)_t1_setupAttachmentView;
- (void)_t1_setupSensitiveMediaTombstoneAttachmentView;
- (void)_t1_setupTombstonedQuotedStatusAttachmentView;
- (void)_t1_setupUserRecommendationViewWithMedia:(_Bool)media;
- (void)_t1_setupPhotoVideoView;
- (void)_t1_setupArticleView;
- (void)_t1_setupJetfuelFrameView;
- (void)_t1_setupQuotedStatusView;
- (void)_t1_updateQuotedStatusViewWithLayoutMetrics:(id)metrics;
- (double)_t1_maxWidthForQuotedStatusViewWithLayoutMetrics:(id)metrics;
- (void)_t1_setupUnifiedCardView;
- (void)_t1_setupCardView;
- (id)_t1_getAttachmentViewOfType:(Class)type withInitializer:(id /* block */)initializer;
- (void)_t1_addAttachmentViewAsSubviewIfNeeded:(id)needed;
- (void)_t1_removeAttachmentView;
- (_Bool)_t1_quotedPostAutoTranslatePreferenceVersionChangedForAttachmentType:(unsigned long long)type;
- (id)_t1_attachmentTypeString;
- (id)_t1_viewIdentifierForAttachmentViewClass:(Class)_class;
- (void)_t1_applyTweetConvoAdColorContrastExperiment:(id)experiment onUnifiedCardView:(id)view;

@end

#endif /* T1StatusViewAttachmentContainerView_h */
