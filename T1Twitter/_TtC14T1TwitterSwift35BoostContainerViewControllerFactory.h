//
#ifndef _TtC14T1TwitterSwift35BoostContainerViewControllerFactory_h
#define _TtC14T1TwitterSwift35BoostContainerViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.BoostContainerViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)createWithAccount:(id)account initialTab:(id)tab source:(id)source;
+ (_Bool)tabDeeplinkEnabledWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift35BoostContainerViewControllerFactory_h */
