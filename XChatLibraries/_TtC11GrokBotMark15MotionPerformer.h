//
#ifndef _TtC11GrokBotMark15MotionPerformer_h
#define _TtC11GrokBotMark15MotionPerformer_h
@import Foundation;

@class GrokBotMark.MotionCharacter, GrokBotMark.MotionClipName ?, GrokBotMark.MotionDirective, GrokBotMark.MotionState, Swift.Bool, _$sSDySa -> GrokBotMark.MotionClipName _$sGAB, _$sSd, _$sSdSg, _$sSdyc, _$sSi, _TtCs12_SwiftObject;

@interface GrokBotMark.MotionPerformer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokBotMark.MotionState state;
    GrokBotMark.MotionClipName ? clip;
    GrokBotMark.MotionCharacter character;
    Swift.Double? firstPhase;
    () -> Swift.Double random;
    Swift.Dictionary empty-list Swift.Array -> GrokBotMark.MotionClipName _$sGAB bags;
    Swift.Bool isCompact;
    Swift.Bool isResting;
    Swift.Bool isEmphasized;
    Swift.Bool hasStarted;
    GrokBotMark.MotionDirective directive;
    Swift.Double stateSeconds;
    Swift.Int step;
    Swift.Int loops;
}

@end

#endif /* _TtC11GrokBotMark15MotionPerformer_h */
