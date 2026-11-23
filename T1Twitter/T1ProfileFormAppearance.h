//
#ifndef T1ProfileFormAppearance_h
#define T1ProfileFormAppearance_h
@import Foundation;

@class TFNLegacyFormAppearance;

@interface T1ProfileFormAppearance : TFNLegacyFormAppearance

@property (readonly, nonatomic) double bannerHeight;

/* class methods */
+ (id)standardAppearanceForBannerHeight:(double)height;

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetForSectionAtIndex:(long long)index withLayoutMetrics:(id)metrics;

@end

#endif /* T1ProfileFormAppearance_h */
