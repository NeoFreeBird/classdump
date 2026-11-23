//
#ifndef TFNFrameSheet_h
#define TFNFrameSheet_h
@import Foundation;

@class NSObject, UIImage;

@interface TFNFrameSheet : NSObject

@property (readonly, nonatomic) unsigned long long rows;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) UIImage *frameSheet;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;

/* instance methods */
- (id)initWithImage:(id)image rows:(unsigned long long)rows columns:(unsigned long long)columns frameCount:(unsigned long long)count imageSize:(struct CGSize { double x0; double x1; })size;
- (id)frameArray;

@end

#endif /* TFNFrameSheet_h */
