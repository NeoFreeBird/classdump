//
#ifndef _TtC7XSports20SportsPlayPostsStore_h
#define _TtC7XSports20SportsPlayPostsStore_h
@import Foundation;

@class _$s20TwitterActionService0bC0CMn ?, _$s7Combine9PublishedVMn _$sySDySS XSports.SportsPlayPostSummary, _$s8Dispatch0A8WorkItemCMn ?, _$s8TFSModel12ModelContextCMn ?, _$sSD -> _$s10Foundation4UUIDVMn _$sScTyyt _$ss5NeverOMn, _$sSDySS XSports.SportsPlayPostSummary ?, _$sSDySS _$s13TFSObservable8ObserverCMn _$s14TFSTwitterCore13TwitterStatusVMn, _$sSDySS _$s13TFSObservable8ObserverCMn _$s19GraphQLCachedModels5TweetVMn, _$sShySSG, _TtCs12_SwiftObject;

@interface XSports.SportsPlayPostsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary empty-list Swift.String XSports.SportsPlayPostSummary _summaries;
    nominal type descriptor for TwitterActionService.ActionService ? actionService;
    nominal type descriptor for TFSModel.ModelContext ? modelContext;
    Swift.Set<Swift.String> requestedRestIDs;
    Swift.Set<Swift.String> hydratedRestIDs;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID Swift.Task empty-list () nominal type descriptor for Swift.Never fetchTasks;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for TFSObservable.Observer nominal type descriptor for GraphQLCachedModels.Tweet tweetObservers;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for TFSObservable.Observer nominal type descriptor for TFSTwitterCore.TwitterStatus statusObservers;
    Swift.Dictionary empty-list Swift.String XSports.SportsPlayPostSummary ? coalescedSummaries;
    nominal type descriptor for Dispatch.DispatchWorkItem ? coalesceWork;
}

@end

#endif /* _TtC7XSports20SportsPlayPostsStore_h */
