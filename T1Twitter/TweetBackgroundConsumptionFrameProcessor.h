//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TweetBackgroundConsumptionFrameProcessor_h
#define TweetBackgroundConsumptionFrameProcessor_h
@import Foundation;

@class NSObject, TweetBackgroundFrameProcessor;

@interface TweetBackgroundConsumptionFrameProcessor : NSObject {
    /* instance variables */
    TweetBackgroundFrameProcessor *_processor;
}

@property (nonatomic) long long renderMode;
@property (nonatomic) _Bool rendersPostMediaOnly;
@property (readonly, nonatomic) _Bool hasContentImage;
@property (nonatomic) _Bool reverseSplitLayout;
@property (readonly, nonatomic) TweetBackgroundFrameProcessor *tweetBackgroundProcessor;
@property (readonly, nonatomic) _Bool canRenderWithPersonSegmentation;

/* instance methods */
- (id)initWithSnapshot:(id)snapshot backgroundColor:(id)color contentImage:(id)image videoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame videoFrameCornerRadius:(double)radius videoFrameCornerMask:(unsigned long long)mask;
- (unsigned long long)_internalRenderModeFor:(long long)_for;
- (struct opaqueCMSampleBuffer *)processSampleBuffer:(struct opaqueCMSampleBuffer *)buffer segmentationMaskingPixelBuffer:(struct __CVBuffer *)buffer videoPixelBuffer:(struct __CVBuffer *)buffer captureOrientation:(long long)orientation;

@end

#endif /* TweetBackgroundConsumptionFrameProcessor_h */
