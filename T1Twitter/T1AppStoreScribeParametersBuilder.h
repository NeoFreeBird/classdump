//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppStoreScribeParametersBuilder_h
#define T1AppStoreScribeParametersBuilder_h
@import Foundation;

#include "TAFAppStoreScribeParametersBuilder-Protocol.h"

@class NSObject;

@interface T1AppStoreScribeParametersBuilder : NSObject <TAFAppStoreScribeParametersBuilder>

/* instance methods */
- (void)addParametersForAppId:(id)id category:(id)category parameters:(id)parameters completion:(id /* block */)completion;

@end

#endif /* T1AppStoreScribeParametersBuilder_h */
