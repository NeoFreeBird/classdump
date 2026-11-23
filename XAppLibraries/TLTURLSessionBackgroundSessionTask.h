//
#ifndef TLTURLSessionBackgroundSessionTask_h
#define TLTURLSessionBackgroundSessionTask_h
@import Foundation;

#include "TLTBackgroundFetchTask.h"

@class NSURLSession;

@interface TLTURLSessionBackgroundSessionTask : TLTBackgroundFetchTask

@property (readonly, nonatomic) _Bool supportsBackgroundURLSession;
@property (readonly, nonatomic) NSURLSession *URLSession;

/* instance methods */
- (id)initWithIdentifier:(id)identifier supportsBackgroundURLSession:(_Bool)urlsession;
- (id)generateURLSessionTask;
- (void)URLSessionTaskDidComplete:(id)complete withData:(id)data temporaryFileURL:(id)url error:(id)error completion:(id /* block */)completion;

@end

#endif /* TLTURLSessionBackgroundSessionTask_h */
