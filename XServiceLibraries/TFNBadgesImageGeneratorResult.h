//
#ifndef TFNBadgesImageGeneratorResult_h
#define TFNBadgesImageGeneratorResult_h
@import Foundation;

@class NSObject, UIImage;

@interface TFNBadgesImageGeneratorResult : NSObject // (Swift)

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIImage *image;

/* instance methods */
- (id)init;

@end

#endif /* TFNBadgesImageGeneratorResult_h */
