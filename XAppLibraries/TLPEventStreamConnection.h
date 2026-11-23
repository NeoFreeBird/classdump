//
#ifndef TLPEventStreamConnection_h
#define TLPEventStreamConnection_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"
#include "TFSAPIRequestDelegate-Protocol.h"
#include "TLPClientConfiguration.h"
#include "TLPEventStream.h"
#include "TLPEventStreamConfiguration.h"
#include "TLPEventStreamConnectionDelegate-Protocol.h"
#include "TLPEventStreamConnectionMetadata.h"
#include "TLPTwitterAPILivePipelineEventsRequest.h"
#include "TNLRequestOperationCancelSource-Protocol.h"

@class NSArray, NSObject, NSString, TFSAPIRequestOperation;

@interface TLPEventStreamConnection : NSObject <TNLRequestOperationCancelSource, TFSAPIRequestDelegate> {
    /* instance variables */
    TLPEventStream *_eventStream;
    NSArray *_initialTopics;
    TLPTwitterAPILivePipelineEventsRequest *_request;
    TFSAPIRequestOperation *_requestOperation;
    NSObject<OS_dispatch_source> *_idleTimer;
    double _idleTimerLeeway;
}

@property (retain, nonatomic) TLPEventStreamConnectionMetadata *metadata;
@property (nonatomic) long long state;
@property (nonatomic) double reconnectBackoffTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reconnectTimer;
@property (readonly, nonatomic) TLPClientConfiguration *configuration;
@property (readonly, weak, nonatomic) id <TLPEventStreamConnectionDelegate> delegate;
@property (readonly, nonatomic) TLPEventStreamConfiguration *sessionConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration delegate:(id)delegate;
- (void)connect;
- (void)issueRequest;
- (void)disconnectWithError:(id)error shouldReconnect:(_Bool)reconnect;
- (void)handleSystemEvent:(id)event;
- (void)restartIdleTimer;
- (void)didReceiveData:(id)data;
- (void)didReceiveURLResponse:(id)urlresponse;
- (void)didCompleteWithResponse:(id)response;
- (id)tnl_cancelSourceDescription;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveData:(id)data;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TLPEventStreamConnection_h */
