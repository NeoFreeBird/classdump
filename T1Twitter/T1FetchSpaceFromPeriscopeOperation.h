//
#ifndef T1FetchSpaceFromPeriscopeOperation_h
#define T1FetchSpaceFromPeriscopeOperation_h
@import Foundation;

#include "T1FetchSpaceOperation.h"

@interface T1FetchSpaceFromPeriscopeOperation : T1FetchSpaceOperation

/* instance methods */
- (void)fetchSpaceWithSpaceID:(id)id shouldCheckAutoJoining:(_Bool)joining voiceAccount:(id)account completion:(id /* block */)completion;

@end

#endif /* T1FetchSpaceFromPeriscopeOperation_h */
