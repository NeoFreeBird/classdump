//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVCaptureOutput_PTVAudioValues_h
#define AVCaptureOutput_PTVAudioValues_h
@import Foundation;

@interface AVCaptureOutput (PTVAudioValues)

/* instance methods */
- (double)CalculateAudioLevel;

@end

#endif /* AVCaptureOutput_PTVAudioValues_h */
