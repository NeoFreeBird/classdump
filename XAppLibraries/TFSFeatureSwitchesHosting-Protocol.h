//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesHosting_Protocol_h
#define TFSFeatureSwitchesHosting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSFeatureSwitchesHosting <NSObject>

@required

/* required instance methods */
- (id)featureSwitchesFetchTask;
- (id)featureSwitchesEventLoggingForAccountID:(id)id;

@optional

@end

#endif /* TFSFeatureSwitchesHosting_Protocol_h */
