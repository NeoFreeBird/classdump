//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
