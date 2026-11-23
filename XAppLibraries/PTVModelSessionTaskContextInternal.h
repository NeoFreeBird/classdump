//
#ifndef PTVModelSessionTaskContextInternal_h
#define PTVModelSessionTaskContextInternal_h
@import Foundation;

#include "PTVModelSessionTaskClient-Protocol.h"
#include "PTVModelSessionTaskContext-Protocol.h"

@class NSData, NSObject, NSString, NSURLRequest;

@interface PTVModelSessionTaskContextInternal : NSObject <PTVModelSessionTaskContext>

@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ stopBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) NSURLRequest *ptv_request;
@property (readonly, nonatomic) NSData *ptv_uploadData;
@property (readonly, nonatomic) id <PTVModelSessionTaskClient> ptv_client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request uploadData:(id)data client:(id)client;

@end

#endif /* PTVModelSessionTaskContextInternal_h */
