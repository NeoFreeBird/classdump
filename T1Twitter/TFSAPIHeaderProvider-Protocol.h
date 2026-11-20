//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPIHeaderProvider_Protocol_h
#define TFSAPIHeaderProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPIHeaderProvider <NSObject>

@required

/* required instance methods */
- (void)commonHeaderFieldsForAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;
- (void)attestRequestPayload:(id)payload accountID:(id)id completionBlock:(id /* block */)block;

@optional

@end

#endif /* TFSAPIHeaderProvider_Protocol_h */
