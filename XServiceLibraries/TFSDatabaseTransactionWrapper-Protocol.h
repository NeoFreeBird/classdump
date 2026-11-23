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
