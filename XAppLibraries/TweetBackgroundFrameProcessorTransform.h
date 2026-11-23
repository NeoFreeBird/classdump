//
#ifndef TweetBackgroundFrameProcessorTransform_h
#define TweetBackgroundFrameProcessorTransform_h
@import Foundation;

@class NSObject;

@interface TweetBackgroundFrameProcessorTransform : NSObject

@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x0; double x1; } translation;
@property (nonatomic) double rotation;

/* instance methods */
- (id)init;

@end

#endif /* TweetBackgroundFrameProcessorTransform_h */
