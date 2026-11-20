//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift27LiquidGlassRedesignFeatures_h
#define _TtC14T1TwitterSwift27LiquidGlassRedesignFeatures_h
@import Foundation;

@class NSObject, Swift.Bool;

@interface T1TwitterSwift.LiquidGlassRedesignFeatures : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isRedesignEnabled;

/* class methods */
+ (_Bool)isQuickComposerEnabledWithFeatureSwitches:(id)switches;
+ (_Bool)isQuickComposerEnabledNoImpressionWithFeatureSwitches:(id)switches;
+ (_Bool)isPostZoomEnabledWithFeatureSwitches:(id)switches;
+ (_Bool)isVerticalTabBarEnabledWithFeatureSwitches:(id)switches;
+ (_Bool)isVerticalTabBarBadgeDotsEnabledWithFeatureSwitches:(id)switches;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches isSecondFactorSatisfied:(_Bool)satisfied;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27LiquidGlassRedesignFeatures_h */
