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
