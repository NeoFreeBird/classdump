//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseTransactionWrapper_Protocol_h
#define TFSDatabaseTransactionWrapper_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSDatabaseTransactionWrapper <NSObject>

@required

/* required instance methods */
- (id /* block */)wrap:(id /* block */)wrap;

@optional

@end

#endif /* TFSDatabaseTransactionWrapper_Protocol_h */
