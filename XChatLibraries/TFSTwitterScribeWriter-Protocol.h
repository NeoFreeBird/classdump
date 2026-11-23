//
#ifndef TFSTwitterScribeWriter_Protocol_h
#define TFSTwitterScribeWriter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterScribeWriter <NSObject>

@required

/* required instance methods */
- (void)writeClientEvent:(id)event parameters:(id)parameters group:(id)group;
- (void)writeNetworkOperationEvent:(id)event group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration count:(long long)count group:(id)group;
- (void)writeErrorWithType:(id)type functionName:(id)name group:(id)group;
- (void)writeErrorWithType:(id)type functionName:(id)name group:(id)group;
- (void)writeEventWithParameters:(id)parameters group:(id)group;
- (void)writeEventWithParameters:(id)parameters group:(id)group;

@optional

@end

#endif /* TFSTwitterScribeWriter_Protocol_h */
