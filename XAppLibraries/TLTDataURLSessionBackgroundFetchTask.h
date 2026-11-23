//
#ifndef TLTDataURLSessionBackgroundFetchTask_h
#define TLTDataURLSessionBackgroundFetchTask_h
@import Foundation;

#include "TLTURLSessionBackgroundSessionTask.h"

@class NSURLRequest;

@interface TLTDataURLSessionBackgroundFetchTask : TLTURLSessionBackgroundSessionTask

@property (readonly, nonatomic) NSURLRequest *request;

/* instance methods */
- (id)initWithURLRequest:(id)urlrequest identifier:(id)identifier;
- (id)generateURLSessionTask;
- (void)URLSessionTaskDidComplete:(id)complete withData:(id)data temporaryFileURL:(id)url error:(id)error completion:(id /* block */)completion;
- (void)URLSessionDataTaskDidComplete:(id)complete withData:(id)data error:(id)error completion:(id /* block */)completion;

@end

#endif /* TLTDataURLSessionBackgroundFetchTask_h */
