//
#ifndef TFNTwitterStatusBanner_Protocol_h
#define TFNTwitterStatusBanner_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterStatusSocialContext-Protocol.h"

@protocol TFNTwitterStatusBanner <NSObject, TFNTwitterStatusSocialContext>

@required

/* required instance methods */
- (id)bannerText;
- (id)linkText;
- (id)accessibilityBannerText;
- (id)badgeName;
- (id)userReferences;
- (_Bool)includesEducation;
- (_Bool)isRecommendation;

@optional

@end

#endif /* TFNTwitterStatusBanner_Protocol_h */
