//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GULReachabilityChecker_h
#define GULReachabilityChecker_h
@import Foundation;

#include "GULReachabilityDelegate-Protocol.h"

@class NSObject, NSString;

@interface GULReachabilityChecker : NSObject {
    /* instance variables */
    int reachabilityStatus_;
    const struct GULReachabilityApi { void * /* function */ x0; void * /* function */ x1; void * /* function */ x2; void * /* function */ x3; void * /* function */ x4; } * reachabilityApi_;
    struct __SCNetworkReachability * reachability_;
    NSString *host_;
    id <GULReachabilityDelegate> reachabilityDelegate_;
}

@property (nonatomic) const struct GULReachabilityApi { void * /* function */ x0; void * /* function */ x1; void * /* function */ x2; void * /* function */ x3; void * /* function */ x4; } * reachabilityApi;
@property (nonatomic) int reachabilityStatus;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) struct __SCNetworkReachability * reachability;
@property (weak, nonatomic) id <GULReachabilityDelegate> reachabilityDelegate;
@property (readonly, nonatomic) _Bool isActive;

/* instance methods */
- (id)initWithReachabilityDelegate:(id)delegate withHost:(id)host;
- (void)dealloc;
- (_Bool)start;
- (void)stop;
- (int)statusForFlags:(unsigned int)flags;
- (void)reachabilityFlagsChanged:(unsigned int)changed;

@end

#endif /* GULReachabilityChecker_h */
