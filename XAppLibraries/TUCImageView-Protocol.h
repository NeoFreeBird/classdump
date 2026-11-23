//
#ifndef TUCImageView_Protocol_h
#define TUCImageView_Protocol_h
@import Foundation;

#include "TUCImageViewLoadDelegate-Protocol.h"

@class UIImage;

@protocol TUCImageView

@required

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, weak) id <TUCImageViewLoadDelegate> loadDelegate;

/* required instance methods */
- (void)setImageWithMediaEntity:(id)entity imagePipeline:(id)pipeline;
- (void)reset;

@optional

@end

#endif /* TUCImageView_Protocol_h */
