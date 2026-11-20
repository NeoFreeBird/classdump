//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCameraVideoCompositorContext_h
#define TFSCameraVideoCompositorContext_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSReferencedFile.h"

@class AVURLAsset, NSData, NSObject, UIColor;

@interface TFSCameraVideoCompositorContext : NSObject <NSCoding>

@property (nonatomic) unsigned long long layout;
@property (nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } pipLocation;
@property (nonatomic) double pipScale;
@property (nonatomic) double pipBorderWidth;
@property (nonatomic) double pipCornerRadius;
@property (retain, nonatomic) UIColor *pipBorderColor;
@property (nonatomic) float backgroundAudioVolume;
@property (retain, nonatomic) NSData *backgroundImageData;
@property (retain, nonatomic) TFSReferencedFile *backgroundVideoFile;
@property (retain, nonatomic) TFSReferencedFile *forgroundVideoFile;
@property (retain, nonatomic) AVURLAsset *backgroundAsset;
@property (retain, nonatomic) AVURLAsset *forgroundAsset;

/* class methods */
+ (id)defaultayoutWithBackgroundImageData:(id)data backgroundVideoFile:(id)file forgroundVideoFile:(id)file isLandscape:(_Bool)landscape;

/* instance methods */
- (id)initWithLayout:(unsigned long long)layout videoSize:(struct CGSize { double x0; double x1; })size pipLocation:(struct CGPoint { double x0; double x1; })location pipScale:(double)scale pipBorderWidth:(double)width pipCornerRadius:(double)radius pipBorderColor:(id)color backgroundAudioVolume:(float)volume backgroundImageData:(id)data backgroundVideoFile:(id)file forgroundVideoFile:(id)file;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSCameraVideoCompositorContext_h */
