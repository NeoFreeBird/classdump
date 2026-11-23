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
