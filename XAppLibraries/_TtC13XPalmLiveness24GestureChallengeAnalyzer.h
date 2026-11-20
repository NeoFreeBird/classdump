//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XPalmLiveness24GestureChallengeAnalyzer_h
#define _TtC13XPalmLiveness24GestureChallengeAnalyzer_h
@import Foundation;

@class Swift.Bool, XPalmLiveness.ChallengeScript, XPalmLiveness.LivenessPolicy, _$sSa -> XPalmLiveness.ChallengeStageRecord, _$sSdSg, _$sSi, _TtCs12_SwiftObject;

@interface XPalmLiveness.GestureChallengeAnalyzer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPalmLiveness.ChallengeScript script;
    XPalmLiveness.LivenessPolicy policy;
    Swift.Int stageIndex;
    Swift.Array -> XPalmLiveness.ChallengeStageRecord records;
    Swift.Double? stageStartTime;
    Swift.Double? holdStartTime;
    Swift.Double? lastSatisfiedTime;
    Swift.Bool armedByNonMatch;
    Swift.Bool stageSawNonMatch;
}

@end

#endif /* _TtC13XPalmLiveness24GestureChallengeAnalyzer_h */
