//
#ifndef ListFeatures_h
#define ListFeatures_h
@import Foundation;

#include "ListCopyStringsProvider-Protocol.h"

@class NSObject;

@interface ListFeatures : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *featureSwitches;
    NSNumber"16@0:8 *kDefaultBackendStorageColdstartTTLInterval;
    NSNumber"16@0:8 *kDefaultBackendStorageWriteDelayInterval;
    NSNumber"16@0:8 *kDefaultUserRecommendationRemovalInterval;
}

@property (nonatomic, retain) id <ListCopyStringsProvider> stringsProvider;
@property (nonatomic, readonly) _Bool isSearchDescriptionEnabled;
@property (nonatomic, readonly) _Bool isSearchManagementPageEnabled;
@property (nonatomic, readonly) _Bool isListsCellRedesignEnabled;
@property (nonatomic, readonly) _Bool isBannerPickerLoadAssetsEnabled;
@property (nonatomic, readonly) _Bool isEditListExpandedNavBarEnabled;
@property (nonatomic, readonly) _Bool isDetailsPageSharingEnabled;
@property (nonatomic, readonly) _Bool isDetailsPageReportListEnabled;
@property (nonatomic, readonly) _Bool isRankingModeControlEnabled;
@property (nonatomic, readonly) _Bool isDetailsPageSearchEnabled;
@property (nonatomic, readonly) double userRecommendationRemovalInterval;
@property (nonatomic, readonly) _Bool isDetailPageMutingEnabled;
@property (nonatomic, readonly) _Bool isDetailPageMutingEnabledUnsafePeek;
@property (nonatomic, readonly) _Bool isLevelUpPromptEnabled;
@property (nonatomic, readonly) _Bool isSegmentedTabBarHideModeResyncEnabled;
@property (nonatomic, readonly) _Bool isListNameWhitespaceBlankEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* ListFeatures_h */
