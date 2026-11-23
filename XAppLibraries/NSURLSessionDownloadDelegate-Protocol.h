//
#ifndef NSURLSessionDownloadDelegate_Protocol_h
#define NSURLSessionDownloadDelegate_Protocol_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@protocol NSURLSessionDownloadDelegate <NSURLSessionTaskDelegate>

@required

/* required instance methods */
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;

@optional

/* optional instance methods */
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;

@end

#endif /* NSURLSessionDownloadDelegate_Protocol_h */
