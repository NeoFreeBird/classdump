//
#ifndef TIPImagePipelineObserver_Protocol_h
#define TIPImagePipelineObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImagePipelineObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)tip_imageFetchOperationDidStart:(id)start;
- (void)tip_imageFetchOperationDidFinish:(id)finish;
- (void)tip_imageFetchOperation:(id)operation didStartDownloadingImageAtURL:(id)url;
- (void)tip_imageFetchOperation:(id)operation didFinishDownloadingImageAtURL:(id)url imageType:(id)type sizeInBytes:(unsigned long long)bytes dimensions:(struct CGSize { double x0; double x1; })dimensions wasResumed:(_Bool)resumed;

@end

#endif /* TIPImagePipelineObserver_Protocol_h */
