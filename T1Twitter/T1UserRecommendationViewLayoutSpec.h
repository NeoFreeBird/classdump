//
#ifndef T1UserRecommendationViewLayoutSpec_h
#define T1UserRecommendationViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface T1UserRecommendationViewLayoutSpec : NSObject

/* class methods */
+ (double)bannerImageRatio;
+ (id)fullNameFont;
+ (id)usernameFont;
+ (id)bioFont;
+ (struct CGSize { double x0; double x1; })badgeImageSize;
+ (id)userBadgerForAccount:(id)account;
+ (id)badgeImageFrom:(id)from;
+ (unsigned long long)followControlVariant;
+ (double)edgePadding;
+ (double)avatarToFullNamePadding;
+ (double)bannerToAvatarHeightMultiplier;

@end

#endif /* T1UserRecommendationViewLayoutSpec_h */
