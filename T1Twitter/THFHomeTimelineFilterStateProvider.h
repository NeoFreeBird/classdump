//
#ifndef THFHomeTimelineFilterStateProvider_h
#define THFHomeTimelineFilterStateProvider_h
@import Foundation;

#include "THFHomeTimelineFilterStateProviderDelegate-Protocol.h"

@class NSArray, NSObject, NSString;

@interface THFHomeTimelineFilterStateProvider : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *homeFeatures;
    NSNumber"16@0:8 *filterOptionsRepository;
    NSNumber"16@0:8 *autoResetCoordinator;
    NSNumber"16@0:8 *_rankedFollowingSelected;
}

@property (nonatomic, weak) id <THFHomeTimelineFilterStateProviderDelegate> delegate;
@property (nonatomic, readonly) _Bool isCountryFilteredTimelineEnabled;
@property (nonatomic, readonly) _Bool isTopicFilteredTimelineEnabled;
@property (nonatomic, readonly) long long resetPeriodMinutes;
@property (nonatomic, readonly) _Bool isShowAutoResetTextEnabled;
@property (nonatomic, readonly) _Bool isRankedFollowingTimelineEnabled;
@property (nonatomic, copy) NSString *countryFilterID;
@property (nonatomic, copy) NSString *topicFilterID;
@property (nonatomic, readonly) _Bool isFilterActive;
@property (nonatomic, readonly) _Bool hasFetchedFilterOptions;
@property (nonatomic, readonly) NSArray *regionFilterOptions;
@property (nonatomic, readonly) NSArray *topicFilterOptions;
@property (nonatomic, readonly) _Bool regionFilterIsMultiSelect;
@property (nonatomic, readonly) _Bool topicFilterIsMultiSelect;
@property (nonatomic, readonly) NSString *regionFilterLabel;
@property (nonatomic, readonly) NSString *topicFilterLabel;
@property (nonatomic, readonly) _Bool isSnoozeMode;
@property (nonatomic, readonly) _Bool isFilterEntrypointEligible;

/* class methods */
+ (id)countryFilterIDKey;
+ (id)topicFilterIDKey;
+ (id)rankedFollowingSelectedKey;
+ (void)clearFilterStateForAccountID:(id)id;
+ (_Bool)shouldRefreshCountryFilteredTimelineForAccount:(id)account;
+ (_Bool)shouldRefreshTopicFilteredTimelineForAccount:(id)account;

/* instance methods */
- (void)dealloc;
- (id)initWithAccount:(id)account;
- (void)handleDidEnterBackground;
- (void)handleWillEnterForeground;
- (id)displayNameForRegionCode:(id)code;
- (id)displayNameForTopicID:(id)id;
- (id)tabDisplayNameForRegionCode:(id)code;
- (id)tabDisplayNameForTopicID:(id)id;
- (id)init;

@end

#endif /* THFHomeTimelineFilterStateProvider_h */
