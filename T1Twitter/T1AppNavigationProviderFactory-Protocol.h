//
#ifndef T1AppNavigationProviderFactory_Protocol_h
#define T1AppNavigationProviderFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppNavigationProviderFactory <NSObject>

@required

@property (nonatomic, readonly) long long maximumVisiblePanelCount;

/* required instance methods */
- (id)appNavigationProviderControllerForAccount:(id)account;
- (id)appNavigationProviderControllerForAccount:(id)account;

@optional

@end

#endif /* T1AppNavigationProviderFactory_Protocol_h */
