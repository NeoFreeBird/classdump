//
#ifndef TFSInvalidClientNetworkEventsReporter_Protocol_h
#define TFSInvalidClientNetworkEventsReporter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSInvalidClientNetworkEventsReporter <NSObject>

@required

/* required instance methods */
- (void)logger:(id)logger didReceiveInvalidNetworkEvent:(id)event;
- (void)logger:(id)logger didReceiveResponseWithEmptyMetrics:(id)metrics;

@optional

@end

#endif /* TFSInvalidClientNetworkEventsReporter_Protocol_h */
