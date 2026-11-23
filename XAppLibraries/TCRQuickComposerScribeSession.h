//
#ifndef TCRQuickComposerScribeSession_h
#define TCRQuickComposerScribeSession_h
@import Foundation;

@class NSObject;

@interface TCRQuickComposerScribeSession : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 host;
    @40@0:8:16@24@32 pendingEntryPointScribeInfo;
    @40@0:8:16@24@32 focusedSessionID;
    @40@0:8:16@24@32 accountSwitch;
    @40@0:8:16@24@32 savedDraft;
    @40@0:8:16@24@32 barAppearance;
    @40@0:8:16@24@32 isHostCoveredByBarPresentation;
}

/* instance methods */
- (id)initWithHost:(id)host;
- (void)hostViewDidAppear;
- (void)hostViewWillDisappearCoveredByBarPresentation:(_Bool)presentation;
- (void)setNeedsBarAppearanceCheck;
- (void)adoptComposition:(id)composition;
- (void)accountWillSwitch;
- (void)logAction:(id)action element:(id)element eventInfo:(id)info;
- (void)logFocusIfNeeded;
- (void)logSendOfComposition:(id)composition;
- (void)logExpandOfComposition:(id)composition trigger:(id)trigger expandReason:(id)reason;
- (void)logSavedDraftIfChangedWithReason:(id)reason;
- (id)init;

@end

#endif /* TCRQuickComposerScribeSession_h */
