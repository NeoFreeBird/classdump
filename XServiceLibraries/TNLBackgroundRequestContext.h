//
#ifndef TNLBackgroundRequestContext_h
#define TNLBackgroundRequestContext_h
@import Foundation;

#include "TNLTemporaryFile.h"

@class NSError, NSHTTPURLResponse, NSObject, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface TNLBackgroundRequestContext : NSObject {
    /* instance variables */
    NSURLSessionTask *_URLSessionTask;
    NSHTTPURLResponse *_URLResponse;
    NSError *_error;
    TNLTemporaryFile *_tempFile;
    NSURLSessionTaskMetrics *_taskMetrics;
}

/* instance methods */

@end

#endif /* TNLBackgroundRequestContext_h */
