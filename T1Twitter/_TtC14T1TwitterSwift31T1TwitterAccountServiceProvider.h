//
#ifndef _TtC14T1TwitterSwift31T1TwitterAccountServiceProvider_h
#define _TtC14T1TwitterSwift31T1TwitterAccountServiceProvider_h
@import Foundation;

#include "TFNTwitterAccountServiceProvider-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.T1TwitterAccountServiceProvider : NSObject <TFNTwitterAccountServiceProvider> // (Swift)

/* instance methods */
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31T1TwitterAccountServiceProvider_h */
