//
#ifndef TFSTwitterScribeWriter_h
#define TFSTwitterScribeWriter_h
@import Foundation;

#include "TFSScribe.h"
#include "TFSTwitterScribeWriter-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterScribeWriter : NSObject <TFSTwitterScribeWriter>

@property (readonly, nonatomic) TFSScribe *scribe;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribe:(id)scribe clientName:(id)name;
- (void)enqueueEvent:(id)event;
- (id)eventSerializerForParameters:(id)parameters group:(id)group;
- (id)parametersForEvent:(id)event parameters:(id)parameters group:(id)group;
- (void)writeClientEvent:(id)event parameters:(id)parameters group:(id)group;
- (void)writeNetworkOperationEvent:(id)event group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event size:(long long)size group:(id)group;
- (void)writePerformanceEvent:(id)event duration:(double)duration count:(long long)count group:(id)group;
- (void)writeErrorWithType:(id)type functionName:(id)name group:(id)group;
- (void)writeEventWithParameters:(id)parameters group:(id)group;
- (void)_enqueueParameters:(id)parameters group:(id)group;
- (id)_parametersForPerformanceEvent:(id)event;
- (id)_parametersForPerformanceEvent:(id)event impressionID:(id)id;

@end

#endif /* TFSTwitterScribeWriter_h */
