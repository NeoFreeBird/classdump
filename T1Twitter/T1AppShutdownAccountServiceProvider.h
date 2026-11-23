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
