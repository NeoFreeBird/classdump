//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPIRetrieveCredentialsOperation_h
#define TFSAPIRetrieveCredentialsOperation_h
@import Foundation;

#include "TFSAPIAuthenticator-Protocol.h"
#include "TFSAPIRequestOperation.h"
#include "TFSConcurrentOperation.h"

@class NSString;

@interface TFSAPIRetrieveCredentialsOperation : TFSConcurrentOperation {
    /* instance variables */
    NSString *_accountID;
    id <TFSAPIAuthenticator> _authenticator;
    TFSAPIRequestOperation *_requestOperation;
}

/* instance methods */
- (id)initWithAuthenticator:(id)authenticator accountID:(id)id requestOperation:(id)operation;
- (void)run;

@end

#endif /* TFSAPIRetrieveCredentialsOperation_h */
