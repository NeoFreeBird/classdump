//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSCachedURLResponse_TNLCacheAdditions_h
#define NSCachedURLResponse_TNLCacheAdditions_h
@import Foundation;

@interface NSCachedURLResponse (TNLCacheAdditions)

/* instance methods */
- (id)tnl_flaggedCachedResponse;

@end

#endif /* NSCachedURLResponse_TNLCacheAdditions_h */
