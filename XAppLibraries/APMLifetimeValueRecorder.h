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
