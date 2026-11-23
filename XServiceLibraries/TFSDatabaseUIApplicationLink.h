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
