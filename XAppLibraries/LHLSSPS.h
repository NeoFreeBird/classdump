//
#ifndef LHLSSPS_h
#define LHLSSPS_h
@import Foundation;

@class NSObject;

@interface LHLSSPS : NSObject {
    /* instance variables */
    struct SeqParamSet { int _profile; int _level; int _pictureWidth; int _pictureHeight; int _cropLeft; int _cropRight; int _cropTop; int _cropBottom; int _frameNumBitDepth; int _pocType; int _log2MaxPOCLSB; unsigned char _constraintSetFlags; _Bool _hasCrop; _Bool _frameMacroblocksOnly; } _sps;
}

@property (readonly, nonatomic) int profile;
@property (readonly, nonatomic) int constraintSetFlags;
@property (readonly, nonatomic) int level;
@property (readonly, nonatomic) int encodedWidth;
@property (readonly, nonatomic) int encodedHeight;
@property (readonly, nonatomic) int croppedWidth;
@property (readonly, nonatomic) int croppedHeight;
@property (readonly, nonatomic) int frameNumBitDepth;

/* instance methods */
- (id)initWithData:(id)data;
- (void)cropOffsetsLeft:(int *)left right:(int *)right top:(int *)top bottom:(int *)bottom;
- (_Bool)frameNumWithSliceHeaderData:(id)data frameNum:(int *)num;

@end

#endif /* LHLSSPS_h */
