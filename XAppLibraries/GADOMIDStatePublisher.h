//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDStatePublisher_h
#define GADOMIDStatePublisher_h
@import Foundation;

#include "GADOMIDAdSessionRegistry.h"

@class NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADOMIDStatePublisher : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSMutableDictionary *adStateCache;
@property (readonly) NSMapTable *adContainerCache;
@property (readonly, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry;

/* instance methods */
- (id)initWithAdSessionRegistry:(id)registry dispatchQueue:(id)queue;
- (id)publishedStateForContainer:(id)container;
- (void)setPublishedState:(id)state container:(id)container;
- (void)setContainer:(id)container adSessionId:(id)id;
- (void)publishState:(id)state toSessions:(id)sessions timestamp:(double)timestamp container:(id)container;
- (void)publishNativeViewStateHierarchy:(id)hierarchy toSessions:(id)sessions timestamp:(double)timestamp container:(id)container;
- (void)cleanupCacheForContainer:(id)container;
- (void)cleanupCaches;

@end

#endif /* GADOMIDStatePublisher_h */
