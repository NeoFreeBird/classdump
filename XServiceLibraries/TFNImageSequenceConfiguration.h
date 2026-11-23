//
#ifndef TFNImageSequenceConfiguration_h
#define TFNImageSequenceConfiguration_h
@import Foundation;

@class NSBundle, NSObject, NSString;

@interface TFNImageSequenceConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *imageSequence;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) unsigned long long rows;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) double duration;

/* instance methods */
- (id)initWithImageSequence:(id)sequence inBundle:(id)bundle rows:(unsigned long long)rows columns:(unsigned long long)columns frameCount:(unsigned long long)count imageSize:(struct CGSize { double x0; double x1; })size duration:(double)duration;

@end

#endif /* TFNImageSequenceConfiguration_h */
