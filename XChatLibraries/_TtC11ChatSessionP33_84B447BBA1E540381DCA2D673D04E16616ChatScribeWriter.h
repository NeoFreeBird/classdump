//
#ifndef _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16616ChatScribeWriter_h
#define _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16616ChatScribeWriter_h
@import Foundation;

#include "TFSTwitterScribeWriter-Protocol.h"

@class NSObject;

@interface ChatSession.(ChatScribeWriter in _84B447BBA1E540381DCA2D673D04E166) : NSObject <TFSTwitterScribeWriter> // (Swift)

/* instance methods */
- (void)writeClientEvent:(id)event parameters:(id)parameters group:(id)group;
- (void)writeNetworkOperationEvent:(id)event group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration count:(long long)count group:(id)group;
- (void)writeErrorWithType:(id)type functionName:(id)name group:(id)group;
- (void)writeEventWithParameters:(id)parameters group:(id)group;
- (id)init;

@end

#endif /* _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16616ChatScribeWriter_h */
