//
#ifndef T1ExploreFeatures_h
#define T1ExploreFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString;

@interface T1ExploreFeatures : NSObject

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool isTabsEnabled;
@property (readonly, nonatomic) _Bool isTrendingTabEnabled;
@property (readonly, nonatomic) double minimumAutoRefreshInterval;
@property (readonly, nonatomic) NSString *tabIconName;
@property (readonly, nonatomic) _Bool isExploreSettingsEnabled;
@property (readonly, nonatomic) double dynamicChromeRefreshInterval;
@property (readonly, nonatomic) _Bool isSpotlightAdMuteEnabled;
@property (readonly, nonatomic) _Bool isAITrendsImagesEnabled;
@property (readonly, nonatomic) _Bool isAITrendsEnabled;
@property (readonly, nonatomic) _Bool shouldAutoExpandSummary;
@property (readonly, nonatomic) long long shrunkSummaryLines;
@property (readonly, nonatomic) _Bool enableNewExplore;
@property (readonly, nonatomic) _Bool enableNewsTab;
@property (readonly, nonatomic) _Bool isWidgetCardsEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* T1ExploreFeatures_h */
