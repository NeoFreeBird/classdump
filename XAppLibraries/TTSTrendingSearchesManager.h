//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTrendingSearchesManager_h
#define TTSTrendingSearchesManager_h
@import Foundation;

@class NSObject;

@interface TTSTrendingSearchesManager : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 cachedQueries;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)prefetchWithActionService:(id)service enabled:(_Bool)enabled maxCount:(long long)count;
- (void)fetchTrendingQueriesWithActionService:(id)service maxCount:(long long)count completion:(id /* block */)completion;

@end

#endif /* TTSTrendingSearchesManager_h */
