//
#ifndef ONBUserRecommendationListSectionHeaderView_h
#define ONBUserRecommendationListSectionHeaderView_h
@import Foundation;

#include "T1UserRecommendationListSectionHeaderCheckableControl-Protocol.h"
#include "T1UserRecommendationListSectionHeaderCheckableControlHost-Protocol.h"

@class TFNModuleTableHeaderView, TFNTappableHighlightView, UIControl;

@interface ONBUserRecommendationListSectionHeaderView : TFNModuleTableHeaderView <T1UserRecommendationListSectionHeaderCheckableControlHost>

@property (retain, nonatomic) UIControl<T1UserRecommendationListSectionHeaderCheckableControl> *checkmarkControl;
@property (readonly, nonatomic) TFNTappableHighlightView *tappableBackgroundView;

/* class methods */
+ (Class)checkmarkControlClass;
+ (double)heightWithHeaderText:(id)text detailText:(id)text layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (id)_t1_createTappableView;

@end

#endif /* ONBUserRecommendationListSectionHeaderView_h */
