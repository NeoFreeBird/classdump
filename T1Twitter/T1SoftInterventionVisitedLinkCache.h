//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SoftInterventionVisitedLinkCache_h
#define T1SoftInterventionVisitedLinkCache_h
@import Foundation;

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface T1SoftInterventionVisitedLinkCache : NSObject

@property (retain, nonatomic) NSMutableSet *visitedLinkSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheRegistryQueue;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (_Bool)hasVisitedURL:(id)url;
- (void)markLinkAsVisited:(id)visited;

@end

#endif /* T1SoftInterventionVisitedLinkCache_h */
