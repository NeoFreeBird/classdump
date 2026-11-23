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
