//
#ifndef T1UserRecommendationListSectionHeaderCheckableControlHost_Protocol_h
#define T1UserRecommendationListSectionHeaderCheckableControlHost_Protocol_h
@import Foundation;

#include "T1UserRecommendationListSectionHeaderCheckableControl-Protocol.h"

@class UIControl;

@protocol T1UserRecommendationListSectionHeaderCheckableControlHost

@required

@property (readonly, nonatomic) UIControl<T1UserRecommendationListSectionHeaderCheckableControl> *checkmarkControl;

@property (class, readonly, nonatomic) Class checkmarkControlClass;

/* class methods */
+ (double)heightWithHeaderText:(id)text detailText:(id)text layoutMetrics:(id)metrics;
+ (Class)checkmarkControlClass;

@optional

@end

#endif /* T1UserRecommendationListSectionHeaderCheckableControlHost_Protocol_h */
