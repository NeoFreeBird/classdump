//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift34ExploreEventSummaryHeroTextContent_h
#define _TtC14T1TwitterSwift34ExploreEventSummaryHeroTextContent_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSArray, NSString, T1TwitterSwift.ExploreEventSummaryHeroTextContent.Style, T1TwitterSwift.ExploreEventSummaryHeroTextContentViewModel ?, T1TwitterSwift.ExplorePromotedView, T1TwitterSwift.GuideCellHeaderView, T1TwitterSwift.GuideSocialProofView, T1TwitterSwift.TrendRelatedTrendsAccessibility, T1TwitterSwift.TrendRelatedTrendsSubtleView, T1TwitterSwift.TrendURTUrlNavigationHelper ?, UIView, _$sSaySo28TUIAccessibilityCustomActionCG, _$sSo11TUIPillViewC, _$sSo11UIStackViewC, _$sSo16TIPImagePipelineCSg, _$sSo31T1URTRichTextInteractionHandler_pSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface T1TwitterSwift.ExploreEventSummaryHeroTextContent : UIView <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    T1TwitterSwift.TrendURTUrlNavigationHelper ? navigationHelper;
    __C.TIPImagePipeline? imagePipeline;
    __C.T1URTRichTextInteractionHandler? interactionHandler;
    T1TwitterSwift.GuideCellHeaderView headerView;
    __C.UILabel titleLabel;
    T1TwitterSwift.GuideSocialProofView socialProofView;
    T1TwitterSwift.TrendRelatedTrendsSubtleView relatedTrendsView;
    T1TwitterSwift.TrendRelatedTrendsAccessibility relatedTrendsAccessibility;
    __C.UILabel promotedDescriptionLabel;
    T1TwitterSwift.ExplorePromotedView promotedView;
    __C.TUIPillView callToAction;
    __C.UIView callToActionContainer;
    __C.UIStackView contentStackView;
    [__C.TUIAccessibilityCustomAction] accessibilityActions;
    T1TwitterSwift.ExploreEventSummaryHeroTextContentViewModel ? viewModel;
    T1TwitterSwift.ExploreEventSummaryHeroTextContent.Style style;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC14T1TwitterSwift34ExploreEventSummaryHeroTextContent_h */
