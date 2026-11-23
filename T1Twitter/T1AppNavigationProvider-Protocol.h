//
#ifndef T1AppNavigationProvider_Protocol_h
#define T1AppNavigationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1AppNavigation-Protocol.h"

@protocol T1AppNavigationProvider <NSObject>

@required

@property (nonatomic, readonly) id <T1AppNavigation> appNavigation;

@optional

@end

#endif /* T1AppNavigationProvider_Protocol_h */
