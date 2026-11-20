//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
