//
#ifndef T1APIRequestHeaderProvider_h
#define T1APIRequestHeaderProvider_h
@import Foundation;

#include "TFSAPIHeaderProvider-Protocol.h"

@class NSString, TFNTwitterAPIBasicHeaderProvider;

@interface T1APIRequestHeaderProvider : TFNTwitterAPIBasicHeaderProvider <TFSAPIHeaderProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)commonHeaderFieldsForAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;
- (void)attestRequestPayload:(id)payload accountID:(id)id completionBlock:(id /* block */)block;
- (void)_t1_appendMainThreadPropertiesToCommonHeaderFields:(id)fields forAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;

@end

#endif /* T1APIRequestHeaderProvider_h */
