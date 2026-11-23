//
#ifndef TFNTwitterCompositionUploadOperationDelegate_Protocol_h
#define TFNTwitterCompositionUploadOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCompositionUploadOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)compositionUploadOperation:(id)operation didUpdateContentInComposition:(id)composition;
- (void)compositionUploadOperation:(id)operation didChangeProgress:(double)progress phase:(long long)phase processingAttachmentCount:(unsigned long long)count processingVideoCount:(unsigned long long)count composition:(id)composition;
- (void)compositionUploadOperationDidSuspendBackgroundTask:(id)task;
- (void)compositionUploadOperationDidResumeBackgroundTask:(id)task;

@end

#endif /* TFNTwitterCompositionUploadOperationDelegate_Protocol_h */
