//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesFetcher_Protocol_h
#define TASSpacesFetcher_Protocol_h
@import Foundation;

@protocol TASSpacesFetcher

@required

/* required instance methods */
- (void)fetchSpaceWithSpaceID:(id)id shouldCheckAutoJoining:(_Bool)joining completion:(id /* block */)completion;
- (void)fetchExistingSpaceWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TASSpacesFetcher_Protocol_h */
