//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XPalmLiveness18PalmLivenessEngine_h
#define _TtC13XPalmLiveness18PalmLivenessEngine_h
@import Foundation;

@class NSObject, Swift.Bool, XPalmLiveness.ChallengeScript, XPalmLiveness.DepthAnalyzer, XPalmLiveness.FrameDigestChain, XPalmLiveness.GestureChallengeAnalyzer, XPalmLiveness.HandPoseTracker, XPalmLiveness.LivenessFrameSource, XPalmLiveness.LivenessPolicy, XPalmLiveness.MicroMotionAnalyzer, XPalmLiveness.PalmLivenessEngine.Phase, XPalmLiveness.PalmLivenessEngineDelegate ?, XPalmLiveness.PulseAnalyzer, XPalmLiveness.ScreenArtifactAnalyzer, XPalmLiveness.TorchResponseAnalyzer, _$s10Foundation4DataVMn, _$s10Foundation4DateVMn, _$sSS, _$sSSSg, _$sSd, _$sSdSg;

@interface XPalmLiveness.PalmLivenessEngine : NSObject { // (Swift)
    /* instance variables */
    XPalmLiveness.LivenessFrameSource frameSource;
    XPalmLiveness.LivenessPolicy policy;
    nominal type descriptor for Foundation.Data nonce;
    XPalmLiveness.ChallengeScript script;
    Swift.String frameSourceKind;
    XPalmLiveness.HandPoseTracker tracker;
    XPalmLiveness.GestureChallengeAnalyzer challengeAnalyzer;
    XPalmLiveness.MicroMotionAnalyzer microMotionAnalyzer;
    XPalmLiveness.PulseAnalyzer pulseAnalyzer;
    XPalmLiveness.ScreenArtifactAnalyzer artifactAnalyzer;
    XPalmLiveness.TorchResponseAnalyzer torchAnalyzer;
    XPalmLiveness.DepthAnalyzer depthAnalyzer;
    XPalmLiveness.FrameDigestChain digestChain;
    XPalmLiveness.PalmLivenessEngine.Phase phase;
    Swift.Double? sessionStartTime;
    nominal type descriptor for Foundation.Date sessionStartDate;
    Swift.Double? acquireStableStart;
    Swift.Double? concludingStart;
    Swift.Double? torchScheduleStart;
    Swift.Bool torchCommandedOn;
    Swift.Double? lastTorchTransitionTime;
    Swift.Double lastUIDispatchTime;
    Swift.String? appAttestKeyID;
    Swift.Bool didRequestAppAttestKey;
    XPalmLiveness.PalmLivenessEngineDelegate ? delegate;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC13XPalmLiveness18PalmLivenessEngine_h */
