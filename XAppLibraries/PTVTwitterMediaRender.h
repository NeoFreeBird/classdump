//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTwitterMediaRender_h
#define PTVTwitterMediaRender_h
@import Foundation;

@class NSObject;

@interface PTVTwitterMediaRender : NSObject

/* instance methods */
- (id)init;
- (double)ptv_angleOffsetFromPortraitOrientationToOrientation:(long long)orientation;
- (void)renderVideo:(id)video withWorkingFolder:(id)folder muteAudio:(_Bool)audio captureOrientation:(long long)orientation completion:(id /* block */)completion;

@end

#endif /* PTVTwitterMediaRender_h */
