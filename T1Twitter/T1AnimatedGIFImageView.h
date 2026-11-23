//
#ifndef T1AnimatedGIFImageView_h
#define T1AnimatedGIFImageView_h
@import Foundation;

@class TFNAnimatedGifImage, TFNAnimatedGifImageView;

@interface T1AnimatedGIFImageView : TFNAnimatedGifImageView

@property (retain, nonatomic) TFNAnimatedGifImage *replacementAnimatedGIFImage;
@property (nonatomic) _Bool fullAnimatedGIFImageReplaced;
@property (nonatomic) _Bool animatingForPreviewEnabled;

/* instance methods */
- (void)setPreviewImage:(id)image;
- (void)setPreviewAnimatedGIFImage:(id)gifimage;
- (void)setFullAnimatedGIFImage:(id)gifimage;
- (void)setAnimatedGifImage:(id)image;
- (void)_startAnimatingForPreviewing;
- (void)didContinueLooping;
- (void)didFinishLooping;
- (void)_replaceAnimatedGIFImageIfNeeded;
- (_Bool)isAnimatingForPreviewEnabled;

@end

#endif /* T1AnimatedGIFImageView_h */
