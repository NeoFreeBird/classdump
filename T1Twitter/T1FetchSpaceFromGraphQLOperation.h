//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FetchSpaceFromGraphQLOperation_h
#define T1FetchSpaceFromGraphQLOperation_h
@import Foundation;

#include "T1FetchSpaceOperation.h"

@interface T1FetchSpaceFromGraphQLOperation : T1FetchSpaceOperation

/* instance methods */
- (void)fetchSpaceWithSpaceID:(id)id shouldCheckAutoJoining:(_Bool)joining voiceAccount:(id)account completion:(id /* block */)completion;

@end

#endif /* T1FetchSpaceFromGraphQLOperation_h */
