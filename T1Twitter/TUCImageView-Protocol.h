//
#ifndef TUCImageView_Protocol_h
#define TUCImageView_Protocol_h
@import Foundation;

@class UIImage;
@protocol TUCImageViewLoadDelegate;

@protocol TUCImageView

@required

@property (readonly, nonatomic) UIImage *image;
@property (weak, nonatomic) id <TUCImageViewLoadDelegate> loadDelegate;

/* required instance methods */
- (void)setImageWithMediaEntity:(id)entity imagePipeline:(id)pipeline;
- (void)reset;

@optional

@end

#endif /* TUCImageView_Protocol_h */
