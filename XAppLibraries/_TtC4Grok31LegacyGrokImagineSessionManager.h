//
#ifndef _TtC4Grok31LegacyGrokImagineSessionManager_h
#define _TtC4Grok31LegacyGrokImagineSessionManager_h
@import Foundation;

#include "_TtC4Grok26GrokImagineVideoGenSession.h"

@class Grok.GrokEventScriber, Grok.GrokSettingsProvider, Grok0A18AccountPerspective_p, NSObject, Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine19CurrentValueSubjectCMn Grok.GrokImagineVideoGenSession ? _$ss5NeverOMn, _$sSo16TIPImagePipelineC;

@interface Grok.LegacyGrokImagineSessionManager : NSObject { // (Swift)
    /* instance variables */
    Grok0A18AccountPerspective_p account;
    __C.TIPImagePipeline imagePipeline;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Grok.GrokSettingsProvider settingsProvider;
    Grok.GrokEventScriber eventScriber;
    Swift.Bool shouldCancelWithComposerDismissal;
    nominal type descriptor for Combine.CurrentValueSubject Grok.GrokImagineVideoGenSession ? nominal type descriptor for Swift.Never currentSessionSubject;
}

@property (nonatomic, readonly) Grok.GrokImagineVideoGenSession *currentSession;

/* instance methods */
- (_Bool)isCurrentSessionRunning;
- (void)cancelCurrentSession;
- (void)cancelCurrentSessionForComposerDismissal;
- (id)init;

@end

#endif /* _TtC4Grok31LegacyGrokImagineSessionManager_h */
