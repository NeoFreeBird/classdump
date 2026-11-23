//
#ifndef TIPImageDownloadDelegate_Protocol_h
#define TIPImageDownloadDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageDownloadDelegate <NSObject>

@required

/* required instance methods */
- (id)imageDownloadRequest;
- (id)imageDownloadDelegateQueue;
- (id)imagePipeline;
- (id)regenerateImageDownloadTemporaryFileForImageDownload:(id)download;
- (void)imageDownloadDidStart:(id)start;
- (void)imageDownload:(id)download didResetFromPartialImage:(id)image;
- (void)imageDownload:(id)download didAppendBytes:(unsigned long long)bytes toPartialImage:(id)image result:(long long)result;
- (void)imageDownload:(id)download didCompleteWithPartialImage:(id)image lastModified:(id)modified byteSize:(unsigned long long)size imageType:(id)type image:(id)image imageData:(id)data imageRenderLatency:(double)latency statusCode:(long long)code error:(id)error;

@optional

@end

#endif /* TIPImageDownloadDelegate_Protocol_h */
