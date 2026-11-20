//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastMediaOriginCoordinatorFactory_h
#define T1BroadcastMediaOriginCoordinatorFactory_h
@import Foundation;

@class NSObject;

@interface T1BroadcastMediaOriginCoordinatorFactory : NSObject // (Swift)

/* class methods */
+ (id)coordinatorForEvent:(id)event context:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1BroadcastMediaOriginCoordinatorFactory_h */
