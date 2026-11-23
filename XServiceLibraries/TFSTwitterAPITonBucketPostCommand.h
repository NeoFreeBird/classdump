//
#ifndef TFSTwitterAPITonBucketPostCommand_h
#define TFSTwitterAPITonBucketPostCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSData, NSDate, NSString;

@interface TFSTwitterAPITonBucketPostCommand : TFSTwitterAPICommand

@property (copy, nonatomic) NSString *bucket;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSDate *expiresOnDate;
@property (copy, nonatomic) id /* block */ blobStoreUploadCompletionBlock;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id bucket:(id)bucket contentType:(id)type data:(id)data filePath:(id)path expiresOnDate:(id)date completionBlock:(id /* block */)block;
- (id)request;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TFSTwitterAPITonBucketPostCommand_h */
