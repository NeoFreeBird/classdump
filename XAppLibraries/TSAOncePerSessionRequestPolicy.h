//
#ifndef TSAOncePerSessionRequestPolicy_h
#define TSAOncePerSessionRequestPolicy_h
@import Foundation;

#include "TSARequestPolicy-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TSAOncePerSessionRequestPolicy : NSObject <TSARequestPolicy> {
    /* instance variables */
    NSMutableDictionary *_requestedServices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (_Bool)shouldExecuteRequest:(id)request withRequestLogEntries:(id)entries;

@end

#endif /* TSAOncePerSessionRequestPolicy_h */
