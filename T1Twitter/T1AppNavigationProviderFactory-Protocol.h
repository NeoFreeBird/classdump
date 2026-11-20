//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
