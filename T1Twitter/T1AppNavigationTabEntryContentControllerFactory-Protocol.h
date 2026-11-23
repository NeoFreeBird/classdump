//
#ifndef T1AppNavigationTabEntryContentControllerFactory_Protocol_h
#define T1AppNavigationTabEntryContentControllerFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppNavigationTabEntryContentControllerFactory <NSObject>

@required

/* required instance methods */
- (id)createContentController;
- (id)rootTabViewController;

@optional

@end

#endif /* T1AppNavigationTabEntryContentControllerFactory_Protocol_h */
