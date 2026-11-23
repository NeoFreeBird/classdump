//
#ifndef _TtC32TwitterHomeFeatureImplementation31CachedPinnedTimelinesRepository_h
#define _TtC32TwitterHomeFeatureImplementation31CachedPinnedTimelinesRepository_h
@import Foundation;

#include "_TtP26TwitterHomePinnedTimelines25PinnedTimelinesRepository_-Protocol.h"
#include "_TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate_-Protocol.h"

@class NSObject, TwitterHomeFeatureImplementation.PinnedTimelinesFetchThrottle ?, TwitterHomePinnedTimelines0cD18RepositoryDelegate_pSgXw, _$s20TwitterActionService0bC0CMn ?, _$s7Combine19CurrentValueSubjectCMn _$sySa -> _$s26TwitterHomePinnedTimelines0C17TimelineDataModelCMn _$sG _$ss5NeverOMn, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo17TFNTwitterAccountC;

@interface TwitterHomeFeatureImplementation.CachedPinnedTimelinesRepository : NSObject <TwitterHomePinnedTimelines.PinnedTimelinesRepository> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String rankingModeIdentifier;
    Swift.String timeFilterIdentifier;
    Swift.String viewFilterIdentifier;
    nominal type descriptor for TwitterActionService.ActionService ? $__lazy_storage_$_actionService;
    TwitterHomeFeatureImplementation.PinnedTimelinesFetchThrottle ? $__lazy_storage_$_fetchThrottle;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pinnedTimelinesObservation;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> nominal type descriptor for TwitterHomePinnedTimelines.PinnedTimelineDataModel _$sG nominal type descriptor for Swift.Never pinnedTimelines;
}

@property (nonatomic, weak) id <TwitterHomePinnedTimelines.PinnedTimelinesRepositoryDelegate> delegate;

/* instance methods */
- (void)dealloc;
- (void)pinTimelineWithTimeline:(id)timeline completion:(id /* block */)completion;
- (void)pinTimelineWithTimelineInput:(id)input completion:(id /* block */)completion;
- (void)unpinTimelineWithTimeline:(id)timeline completion:(id /* block */)completion;
- (void)unpinTimelineWithTimelineInput:(id)input completion:(id /* block */)completion;
- (void)updatePinnedTimelines:(id)timelines;
- (void)fetchPinnedTimelinesWithThrottleEnabled:(_Bool)enabled;
- (void)loadInitialPinnedTimelines;
- (void)persistTimelineRanking:(id)ranking;
- (void)persistTimelineTimeFilter:(id)filter;
- (void)persistTimelineViewFilter:(id)filter;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation31CachedPinnedTimelinesRepository_h */
