//
#ifndef _TtC4DMV227PostStatusCacheUpdateWorker_h
#define _TtC4DMV227PostStatusCacheUpdateWorker_h
@import Foundation;

@class DMUI.PostStatusCache, _$s11XFoundation13CombineWorkerCN, _$s8ChatSync0A18FetchedPostsStreamCMn;

@interface DMV2.PostStatusCacheUpdateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatSync.ChatFetchedPostsStream fetchedPostsStream;
    DMUI.PostStatusCache postStatusCache;
}

@end

#endif /* _TtC4DMV227PostStatusCacheUpdateWorker_h */
