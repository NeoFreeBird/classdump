//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppShutdownAccountServiceProvider_h
#define T1AppShutdownAccountServiceProvider_h
@import Foundation;

#include "TFNTwitterAccountServiceProvider-Protocol.h"

@class NSObject;

@interface T1AppShutdownAccountServiceProvider : NSObject <TFNTwitterAccountServiceProvider>

/* instance methods */
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;

@end

#endif /* T1AppShutdownAccountServiceProvider_h */
