//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV227KMPPINChangedDetectorWorker_h
#define _TtC4DMV227KMPPINChangedDetectorWorker_h
@import Foundation;

@class DMModels.TabStateStream, DMV2.LocalKeypairStateStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B28Arm64_mainPinChangedDetector_p;

@interface DMV2.KMPPINChangedDetectorWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainPinChangedDetector pinChangedDetector;
    DMV2.LocalKeypairStateStream localKeypairStateStream;
    DMModels.TabStateStream tabStateStream;
}

@end

#endif /* _TtC4DMV227KMPPINChangedDetectorWorker_h */
