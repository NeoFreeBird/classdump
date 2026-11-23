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
