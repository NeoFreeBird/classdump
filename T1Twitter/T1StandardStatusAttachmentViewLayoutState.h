//
#ifndef T1StandardStatusAttachmentViewLayoutState_h
#define T1StandardStatusAttachmentViewLayoutState_h
@import Foundation;

#include "T1QuotedStandardStatusViewLayoutState.h"
#include "T1UserRecommendationViewLayoutState.h"

@class NSNumber, TFNComposableViewLayoutState, TUCViewLayoutState, TUICardViewLayoutState;

@interface T1StandardStatusAttachmentViewLayoutState : TFNComposableViewLayoutState

@property (nonatomic) unsigned long long attachmentType;
@property (nonatomic) _Bool useAdaptiveMediaLayout;
@property (retain, nonatomic) T1UserRecommendationViewLayoutState *userRecommendationViewLayoutState;
@property (retain, nonatomic) TUICardViewLayoutState *cardViewLayoutState;
@property (retain, nonatomic) TUCViewLayoutState *unifiedCardViewLayoutState;
@property (retain, nonatomic) NSNumber *validForHashflagVersion;
@property (nonatomic) _Bool showsSensitiveContentBanner;
@property (nonatomic) _Bool showsSensitiveMediaInterstitial;
@property (nonatomic) _Bool useMultiMediaCarousel;
@property (nonatomic) _Bool carouselRequiresScrolling;
@property (retain, nonatomic) T1QuotedStandardStatusViewLayoutState *quotedStandardStatusViewLayoutState;

/* instance methods */

@end

#endif /* T1StandardStatusAttachmentViewLayoutState_h */
