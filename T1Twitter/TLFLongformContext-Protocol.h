//
#ifndef TLFLongformContext_Protocol_h
#define TLFLongformContext_Protocol_h
@import Foundation;

@class TIPImagePipeline;

@protocol TLFLongformContext

@required

@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) id /* block */ imageViewFetchHelperFactory;

@optional

@end

#endif /* TLFLongformContext_Protocol_h */
