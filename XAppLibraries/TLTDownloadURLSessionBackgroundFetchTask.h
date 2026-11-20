//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTDownloadURLSessionBackgroundFetchTask_h
#define TLTDownloadURLSessionBackgroundFetchTask_h
@import Foundation;

#include "TLTURLSessionBackgroundSessionTask.h"

@class NSURL, NSURLRequest;

@interface TLTDownloadURLSessionBackgroundFetchTask : TLTURLSessionBackgroundSessionTask

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURL *destinationFileURL;

/* instance methods */
- (id)initWithURLRequest:(id)urlrequest destinationFileURL:(id)url identifier:(id)identifier supportsBackgroundURLSession:(_Bool)urlsession;
- (void)URLSessionTaskDidComplete:(id)complete withData:(id)data temporaryFileURL:(id)url error:(id)error completion:(id /* block */)completion;
- (void)URLSessionDownloadTaskDidComplete:(id)complete error:(id)error completion:(id /* block */)completion;

@end

#endif /* TLTDownloadURLSessionBackgroundFetchTask_h */
