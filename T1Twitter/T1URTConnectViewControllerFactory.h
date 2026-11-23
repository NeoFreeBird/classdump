//
#ifndef T1URTConnectViewControllerFactory_h
#define T1URTConnectViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTConnectViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerForAccount:(id)account pivotParameters:(id)parameters sourceViewController:(id)controller isCreatorOnly:(_Bool)only;

/* instance methods */
- (id)init;

@end

#endif /* T1URTConnectViewControllerFactory_h */
