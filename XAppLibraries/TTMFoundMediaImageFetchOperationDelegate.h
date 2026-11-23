//
#ifndef TTMFoundMediaImageFetchOperationDelegate_h
#define TTMFoundMediaImageFetchOperationDelegate_h
@import Foundation;

#include "TIPImageFetchDelegate-Protocol.h"
#include "TTMFoundMediaFetchOptions.h"

@class NSObject, NSString;

@interface TTMFoundMediaImageFetchOperationDelegate : NSObject <TIPImageFetchDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ firstFrameCallback;
@property (readonly, nonatomic) TTMFoundMediaFetchOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithOptions:(id)options firstFrameCallback:(id /* block */)callback completion:(id /* block */)completion;
- (void)tip_imageFetchOperationDidStart:(id)start;
- (void)tip_imageFetchOperation:(id)operation didUpdateProgress:(float)progress;
- (void)tip_imageFetchOperation:(id)operation didLoadFirstAnimatedImageFrame:(id)frame progress:(float)progress;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (void)tip_imageFetchOperation:(id)operation didFailToLoadFinalImage:(id)image;
- (void)_didUpdateOperation:(id)operation withProgress:(float)progress error:(id)error;
- (void)_didCompleteFetchFinalImage:(id)image error:(id)error;

@end

#endif /* TTMFoundMediaImageFetchOperationDelegate_h */
