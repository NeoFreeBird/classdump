//
#ifndef TFSAPIHeaderProvider_Protocol_h
#define TFSAPIHeaderProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPIHeaderProvider <NSObject>

@required

/* required instance methods */
- (void)commonHeaderFieldsForAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;
- (void)commonHeaderFieldsForAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;
- (void)attestRequestPayload:(id)payload accountID:(id)id completionBlock:(id /* block */)block;

@optional

@end

#endif /* TFSAPIHeaderProvider_Protocol_h */
