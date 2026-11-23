//
#ifndef TNUTLSTrustEvaluatorSimpleDelegate_h
#define TNUTLSTrustEvaluatorSimpleDelegate_h
@import Foundation;

#include "TNUTLSTrustEvaluatorDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface TNUTLSTrustEvaluatorSimpleDelegate : NSObject <TNUTLSTrustEvaluatorDelegate> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_mappedHostsQueue;
    NSMutableDictionary *_mappedHostsToUnmappedHosts;
}

@property (copy) NSSet *pinnableHostRootsInternal;
@property (copy) NSSet *pinnableHostRootsSet;
@property (copy) NSArray *pinnableHostRootsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setPinnableHostRoots:(id)roots;
- (void)setHostMap:(id)map;
- (void)removeAllMappedHosts;
- (id)TLSTrustEvaluator:(id)evaluator unmappedHostForHost:(id)host;
- (_Bool)TLSTrustEvaluator:(id)evaluator isPinnableHost:(id)host;
- (id)TLSTrustEvaluator:(id)evaluator hostForEvaluationHost:(id)host unmappedHost:(id)host trustHost:(id)host unmappedTrustHost:(id)host;

@end

#endif /* TNUTLSTrustEvaluatorSimpleDelegate_h */
