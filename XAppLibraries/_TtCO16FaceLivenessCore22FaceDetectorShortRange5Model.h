//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO16FaceLivenessCore22FaceDetectorShortRange5Model_h
#define _TtCO16FaceLivenessCore22FaceDetectorShortRange5Model_h
@import Foundation;

@class FaceLivenessCore.FaceDetectionResultHandler ?, FaceLivenessCore.FaceDetectionSessionConfigurationWrapper ?, _$sSf, _$sSo7MLModelC, _TtCs12_SwiftObject;

@interface FaceLivenessCore.FaceDetectorShortRange.Model : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.MLModel model;
    Swift.Float confidenceScoreThreshold;
    Swift.Float weightedNonMaxSuppressionThreshold;
    FaceLivenessCore.FaceDetectionSessionConfigurationWrapper ? faceDetectionSessionConfiguration;
    FaceLivenessCore.FaceDetectionResultHandler ? detectionResultHandler;
}

@end

#endif /* _TtCO16FaceLivenessCore22FaceDetectorShortRange5Model_h */
