//
#ifndef _TtC21TwitterProfileModules32DefaultProfileScribingCapability_h
#define _TtC21TwitterProfileModules32DefaultProfileScribingCapability_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, _$sSD -> _$ss11AnyHashableVMn Any, _$sSo32TFSTwitterLegacyScribeLogMethods_pSgXw;

@interface TwitterProfileModules.DefaultProfileScribingCapability : NSObject <TFSTwitterLegacyScribeLogMethods> { // (Swift)
    /* instance variables */
    weak __C.TFSTwitterLegacyScribeLogMethods? scribeDelegate;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable Any userScribeParametersJsonDictionary;
}

/* instance methods */
- (void)logAction:(id)action page:(id)page section:(id)section;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component parameters:(id)parameters;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event size:(long long)size;
- (void)logPerformanceEvent:(id)event duration:(double)duration count:(long long)count;
- (void)logPerformanceEvent:(id)event duration:(double)duration metadata:(id)metadata;
- (void)logPerformanceEvent:(id)event duration:(double)duration promotedImpressionID:(id)id;
- (void)logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id metadata:(id)metadata;
- (void)logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id metadata:(id)metadata size:(long long)size;
- (_Bool)shouldLogPerformanceEvent:(id)event;
- (void)logErrorWithType:(id)type functionName:(id)name;
- (void)logJSONEvent:(id)jsonevent;
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event duration:(double)duration;
- (id)init;

@end

#endif /* _TtC21TwitterProfileModules32DefaultProfileScribingCapability_h */
