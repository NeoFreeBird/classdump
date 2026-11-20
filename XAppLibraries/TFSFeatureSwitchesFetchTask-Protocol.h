//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesFetchTask_Protocol_h
#define TFSFeatureSwitchesFetchTask_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSFeatureSwitchesFetchTask <NSObject>

@required

/* required instance methods */
- (void)fetchFeatureSwitchesForAccountID:(id)id settingsVersion:(id)version featureSetToken:(id)token completion:(id /* block */)completion;

@optional

@end

#endif /* TFSFeatureSwitchesFetchTask_Protocol_h */
