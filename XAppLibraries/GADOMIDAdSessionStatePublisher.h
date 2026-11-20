//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDAdSessionStatePublisher_h
#define GADOMIDAdSessionStatePublisher_h
@import Foundation;

#include "GADOMIDCommandPublisher-Protocol.h"

@class NSObject, NSString;

@interface GADOMIDAdSessionStatePublisher : NSObject

@property (readonly, nonatomic) id <GADOMIDCommandPublisher> commandPublisher;
@property (readonly, nonatomic) NSString *adSessionId;
@property (readonly, nonatomic) unsigned long long adState;
@property (readonly, nonatomic) double timestamp;

/* instance methods */
- (id)initWithCommandPublisher:(id)publisher adSessionId:(id)id;
- (void)cleanupAdState;
- (void)publishNativeViewStateWithHierarchy:(id)hierarchy timestamp:(double)timestamp;
- (void)publishEmptyNativeViewStateWithHierarchy:(id)hierarchy timestamp:(double)timestamp;
- (void)publishAppState:(id)state;
- (void)publishLockState:(id)state;
- (void)publishDeviceVolume:(double)volume;
- (void)publishLastActivity:(id)activity;
- (id)quotedAdSessionId;

@end

#endif /* GADOMIDAdSessionStatePublisher_h */
