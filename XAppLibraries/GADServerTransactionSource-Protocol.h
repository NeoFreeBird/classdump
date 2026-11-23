//
#ifndef GADServerTransactionSource_Protocol_h
#define GADServerTransactionSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADServerTransactionSource <NSObject>

@required

/* required instance methods */
- (id)init;
- (void)createServerTransactionForServerRequest:(id)request completionHandler:(id /* block */)handler;

@optional

@end

#endif /* GADServerTransactionSource_Protocol_h */
