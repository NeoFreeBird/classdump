//
#ifndef TLTUploadURLSessionBackgroundFetchTask_h
#define TLTUploadURLSessionBackgroundFetchTask_h
@import Foundation;

#include "TLTURLSessionBackgroundSessionTask.h"

@class NSURL, NSURLRequest;

@interface TLTUploadURLSessionBackgroundFetchTask : TLTURLSessionBackgroundSessionTask

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURL *sourceFileURL;

/* instance methods */
- (id)initWithURLRequest:(id)urlrequest sourceFileURL:(id)url identifier:(id)identifier supportsBackgroundURLSession:(_Bool)urlsession;
- (void)URLSessionTaskDidComplete:(id)complete withData:(id)data temporaryFileURL:(id)url error:(id)error completion:(id /* block */)completion;
- (void)URLSessionUploadTaskDidComplete:(id)complete withData:(id)data error:(id)error completion:(id /* block */)completion;

@end

#endif /* TLTUploadURLSessionBackgroundFetchTask_h */
