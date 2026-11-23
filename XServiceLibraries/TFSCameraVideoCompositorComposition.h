//
#ifndef TFSCameraVideoCompositorComposition_h
#define TFSCameraVideoCompositorComposition_h
@import Foundation;

#include "TFSCameraVideoCompositorContext.h"

@class AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, NSObject;

@interface TFSCameraVideoCompositorComposition : NSObject

@property (retain, nonatomic) TFSCameraVideoCompositorContext *context;
@property (retain, nonatomic) AVMutableComposition *composition;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (retain, nonatomic) AVMutableAudioMix *audioMix;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)_tfn_createComposition;
- (_Bool)_tfn_buildComposition:(id)composition videoComposition:(id)composition;

@end

#endif /* TFSCameraVideoCompositorComposition_h */
