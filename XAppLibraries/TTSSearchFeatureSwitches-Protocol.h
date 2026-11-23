//
#ifndef TTSSearchFeatureSwitches_Protocol_h
#define TTSSearchFeatureSwitches_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TTSSearchFeatureSwitches <NSObject>

@required

@property (nonatomic, readonly) NSString *emptySearchResultsSearchSettingsLinkURLString;
@property (nonatomic, readonly) unsigned long long maximumNumberOfRecentSearches;
@property (nonatomic, readonly) _Bool typeaheadEmptyTopicPromptEnabled;
@property (nonatomic, readonly) _Bool recentSearchReranking;
@property (nonatomic, readonly) _Bool relevancePromptInlineVariantEnabled;
@property (nonatomic, readonly) _Bool resultsShareEnabled;
@property (nonatomic, readonly) _Bool communityHashtagsEnabled;
@property (nonatomic, readonly) _Bool communityTweetSearchEnabled;
@property (nonatomic, readonly) _Bool communityTopSearchTabEnabled;
@property (nonatomic, readonly) _Bool brandOverlayAnimationsEnabled;
@property (nonatomic, readonly) _Bool hashfettiEnabled;
@property (nonatomic, readonly) double hashfettiDuration;
@property (nonatomic, readonly) double hashfettiParticleCount;
@property (nonatomic, readonly) _Bool searchNewNavigationEnabled;
@property (nonatomic, readonly) _Bool typeaheadTrendingSearchesEnabled;
@property (nonatomic, readonly) unsigned long long typeaheadSearchMaxTrends;
@property (nonatomic, readonly) _Bool smartPillsTypeaheadFiltersEnabled;
@property (nonatomic, readonly) _Bool searchRefreshWithoutCursorEnabled;
@property (nonatomic, readonly) _Bool emptyStateUsesQueryFreeTextEnabled;
@property (nonatomic, readonly) _Bool removeBlockedMutedFilterEnabled;
@property (nonatomic, readonly) _Bool filtersTrayDirtyActionsEnabled;

@optional

@end

#endif /* TTSSearchFeatureSwitches_Protocol_h */
