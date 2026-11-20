//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADURLSessionTransaction_h
#define GADURLSessionTransaction_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"

@class NSData, NSError, NSMutableData, NSObject, NSString, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

@interface GADURLSessionTransaction : NSObject <GADEventContextSource> {
    /* instance variables */
    struct CC_MD5state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } _responseDigestState;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long notificationPolicy;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly, copy, nonatomic) NSData *responseBody;
@property (readonly, nonatomic) long long responseLength;
@property (readonly, copy, nonatomic) NSData *responseDigest;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURLRequest:(id)urlrequest parentContext:(id)context notificationPolicy:(long long)policy completionHandler:(id /* block */)handler;
- (id)initWithURLRequest:(id)urlrequest parentContext:(id)context response:(id)response responseBody:(id)body requestError:(id)error;
- (id)successorWithURLRequest:(id)urlrequest;
- (void)willSendRequest;
- (void)didReceiveResponse:(id)response;
- (void)didReceiveData:(id)data;
- (void)handleReceiveData:(id)data;
- (void)didCompleteWithError:(id)error;

@end

#endif /* GADURLSessionTransaction_h */
