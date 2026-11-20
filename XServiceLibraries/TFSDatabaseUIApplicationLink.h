//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseUIApplicationLink_h
#define TFSDatabaseUIApplicationLink_h
@import Foundation;

@class NSObject, NSString;

@interface TFSDatabaseUIApplicationLink : NSObject

@property (readonly, nonatomic) NSString *becomeActiveNotificationName;
@property (readonly, nonatomic) NSString *resignActiveNotificationName;
@property (readonly, nonatomic) id notificationObject;
@property (readonly, copy, nonatomic) id /* block */ backgroundTaskRegistrar;

/* instance methods */
- (id)initWithBecomeActiveNotificationName:(id)name resignActiveNotificationName:(id)name notificationObject:(id)object backgroundTaskRegistrar:(id /* block */)registrar;

@end

#endif /* TFSDatabaseUIApplicationLink_h */
