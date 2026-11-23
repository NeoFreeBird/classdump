//
#ifndef TTMFoundMediaFetchOperation_h
#define TTMFoundMediaFetchOperation_h
@import Foundation;

@class NSObject, TIPImageFetchOperation, TNLRequestOperation;
@protocol TFSTwitterAPICommandCancellable;

@interface TTMFoundMediaFetchOperation : NSObject

@property (readonly, nonatomic) TNLRequestOperation *requestOperation;
@property (readonly, nonatomic) TIPImageFetchOperation *imageFetchOperation;
@property (readonly, nonatomic) id <TFSTwitterAPICommandCancellable> cancellableCommandOperation;

/* class methods */
+ (void)cancelFetchOperation:(id)operation;
+ (id)fetchImageForImage:(id)image imagePipeline:(id)pipeline withOptions:(id)options firstFrameCallback:(id /* block */)callback completion:(id /* block */)completion;
+ (id)fetchAnimatedGIFImageForImage:(id)image imagePipeline:(id)pipeline withOptions:(id)options firstFrameCallback:(id /* block */)callback completion:(id /* block */)completion;
+ (id)_fetchImageContainerForImage:(id)image imagePipeline:(id)pipeline animated:(_Bool)animated withOptions:(id)options firstFrameCallback:(id /* block */)callback completion:(id /* block */)completion;

/* instance methods */
- (id)initWithRequestOperation:(id)operation;
- (id)initWithImageFetchOperation:(id)operation;
- (id)initWithCancellableCommandOperation:(id)operation;

@end

#endif /* TTMFoundMediaFetchOperation_h */
