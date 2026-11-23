//
#ifndef _TtC15TwitterComposer30ComposerLinkPreviewCoordinator_h
#define _TtC15TwitterComposer30ComposerLinkPreviewCoordinator_h
@import Foundation;

#include "_TtC15TwitterComposer31ComposerLinkPreviewPresentation.h"
#include "_TtP15TwitterComposer38ComposerLinkPreviewCoordinatorDelegate_-Protocol.h"

@class NSObject, NSString, Swift.Bool, TwitterComposer.ComposerLinkPreviewContext, TwitterComposer.ComposerLinkPreviewPresentation, TwitterComposer.LinkPreviewState TwitterComposer.ComposerLinkPreviewCoordinator.ContentBox, TwitterComposer0B30LinkPreviewCoordinatorDelegate_pSgXw, _$sSD -> TwitterComposer.ComposerLinkPreviewCoordinator.ResolveKey _$sScTyyt _$ss5NeverOMn, _$sSD -> TwitterComposer.ComposerLinkPreviewCoordinator.ResolveKey _$sSo7NSTimerC, _$sSD -> TwitterComposer.LinkPreviewProviderID TwitterComposer.ComposerLinkPreviewProvider, _$sSDySi TwitterComposer.ComposerPreviewCardContainerView, _$sSa -> TwitterComposer.LinkPreviewEvent TwitterComposer.ComposerLinkPreviewCoordinator.ContentBox, _$sSd, _$sSo7NSTimerCSg;

@interface TwitterComposer.ComposerLinkPreviewCoordinator : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary -> TwitterComposer.LinkPreviewProviderID TwitterComposer.ComposerLinkPreviewProvider providers;
    Swift.Double debounceInterval;
    TwitterComposer.LinkPreviewState TwitterComposer.ComposerLinkPreviewCoordinator.ContentBox state;
    Swift.Array -> TwitterComposer.LinkPreviewEvent TwitterComposer.ComposerLinkPreviewCoordinator.ContentBox eventQueue;
    Swift.Bool isProcessingEvents;
    __C.NSTimer? debounceTimer;
    Swift.Dictionary -> TwitterComposer.ComposerLinkPreviewCoordinator.ResolveKey Swift.Task empty-list () nominal type descriptor for Swift.Never resolveTasks;
    Swift.Dictionary -> TwitterComposer.ComposerLinkPreviewCoordinator.ResolveKey __C.NSTimer resolveTimeoutTimers;
    Swift.Dictionary empty-list Swift.Int TwitterComposer.ComposerPreviewCardContainerView containers;
    TwitterComposer.ComposerLinkPreviewContext context;
}

@property (nonatomic, weak) id <TwitterComposer.ComposerLinkPreviewCoordinatorDelegate> delegate;
@property (nonatomic, retain) TwitterComposer.ComposerLinkPreviewPresentation *presentation;
@property (nonatomic, readonly) _Bool isShowingPreview;
@property (nonatomic, readonly) _Bool isShowingJetfuelPreview;
@property (nonatomic, readonly) NSString *hiddenTriggerText;

/* instance methods */
- (void)textDidChange:(id)change;
- (void)setCardPreviewAllowed:(_Bool)allowed jetfuelPreviewAllowed:(_Bool)allowed;
- (void)reset;
- (id)postTextForEditorText:(id)text;
- (id)editorTextByHidingTriggerText:(id)text in:(id)in;
- (id)editorTextByRestoringTriggerText:(id)text to:(id)to;
- (id)init;

@end

#endif /* _TtC15TwitterComposer30ComposerLinkPreviewCoordinator_h */
