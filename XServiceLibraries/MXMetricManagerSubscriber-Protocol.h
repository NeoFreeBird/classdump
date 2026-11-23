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
