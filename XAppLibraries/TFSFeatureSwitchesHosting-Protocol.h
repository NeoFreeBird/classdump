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
