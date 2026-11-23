//
#ifndef TFSAPI_h
#define TFSAPI_h
@import Foundation;

#include "TFSAPIAuthenticator-Protocol.h"
#include "TFSAPIHeaderProvider-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFSAPI : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id <TFSAPIAuthenticator> _authenticator;
    id <TFSAPIHeaderProvider> _headerProvider;
    NSString *_identifier;
    NSMutableDictionary *_sessions;
}

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier authenticator:(id)authenticator headerProvider:(id)provider;
- (id)sessionForAccountID:(id)id authContext:(id)context;

@end

#endif /* TFSAPI_h */
