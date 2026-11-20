//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterMockAccountServiceProvider_h
#define TFNTwitterMockAccountServiceProvider_h
@import Foundation;

#include "TFNTwitterAccountServiceProvider-Protocol.h"

@class NSObject;

@interface TFNTwitterMockAccountServiceProvider : NSObject <TFNTwitterAccountServiceProvider>

/* instance methods */
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;

@end

#endif /* TFNTwitterMockAccountServiceProvider_h */
