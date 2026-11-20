//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef MXMetricManagerSubscriber_Protocol_h
#define MXMetricManagerSubscriber_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MXMetricManagerSubscriber <NSObject>

@required

@optional

/* optional instance methods */
- (void)didReceiveMetricPayloads:(id)payloads;
- (void)didReceiveDiagnosticPayloads:(id)payloads;

@end

#endif /* MXMetricManagerSubscriber_Protocol_h */
