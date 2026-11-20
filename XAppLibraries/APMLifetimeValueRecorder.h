//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMLifetimeValueRecorder_h
#define APMLifetimeValueRecorder_h
@import Foundation;

@class NSObject;

@interface APMLifetimeValueRecorder : NSObject

/* class methods */
+ (_Bool)recordLifetimeValueToDatabase:(id)database event:(id)event;
+ (_Bool)isPurchaseEvent:(id)event;
+ (_Bool)isEcommercePurchaseEvent:(id)event;

@end

#endif /* APMLifetimeValueRecorder_h */
