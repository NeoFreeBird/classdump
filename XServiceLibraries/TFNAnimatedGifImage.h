//
#ifndef TFNAnimatedGifImage_h
#define TFNAnimatedGifImage_h
@import Foundation;

@class NSArray, NSObject;

@interface TFNAnimatedGifImage : NSObject {
    /* instance variables */
    struct CGImageSource * _imageSource;
    NSArray *_images;
    NSArray *_frames;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) _Bool stillImage;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long loopCount;

/* instance methods */
- (id)initWithAnimatedGifData:(id)data;
- (id)initWithAnimatedImage:(id)image loopCount:(unsigned long long)count frameDurations:(id)durations;
- (id)initWithImage:(id)image;
- (void)dealloc;
- (_Bool)isStillImage;
- (unsigned long long)indexAtTimeInterval:(double)interval;
- (id)imageAtIndex:(unsigned long long)index;

@end

#endif /* TFNAnimatedGifImage_h */
