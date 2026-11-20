//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLFLongformImageViewFetchHelper_Protocol_h
#define TLFLongformImageViewFetchHelper_Protocol_h
@import Foundation;

@class TIPImagePipeline;

@protocol TLFLongformImageViewFetchHelper

@required

@property (nonatomic, retain) TIPImagePipeline *fetchImagePipeline;

/* required instance methods */
- (void)setImageWithTemplateURL:(id)url originalDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (void)setImageWithURL:(id)url;

@optional

@end

#endif /* TLFLongformImageViewFetchHelper_Protocol_h */
