//
#ifndef T1MainAppNavigationProviderFactory_h
#define T1MainAppNavigationProviderFactory_h
@import Foundation;

#include "T1AppNavigationProviderFactory-Protocol.h"

@class NSObject;

@interface T1MainAppNavigationProviderFactory : NSObject <T1AppNavigationProviderFactory> // (Swift)

@property (nonatomic, readonly) long long maximumVisiblePanelCount;

/* instance methods */
- (id)appNavigationProviderControllerForAccount:(id)account;
- (id)init;

@end

#endif /* T1MainAppNavigationProviderFactory_h */
