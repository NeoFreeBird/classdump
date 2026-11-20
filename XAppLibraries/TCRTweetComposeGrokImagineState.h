//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTweetComposeGrokImagineState_h
#define TCRTweetComposeGrokImagineState_h
@import Foundation;

#include "GrokImagineSessionCompleteState.h"
#include "GrokImagineSessionState.h"
#include "TFNTwitterAccount.h"
#include "TTMGrokLegacyImagineVideoAsset.h"
#include "_TtC4Grok17GrokFeatureAccess.h"
#include "_TtC4Grok26GrokImagineVideoGenSession.h"

@class NSObject, NSString, NSTimer;

@interface TCRTweetComposeGrokImagineState : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 hasLoggedImpression;
}

@property (nonatomic, readonly) Grok.GrokFeatureAccess *grokFeatureAccess;
@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, retain) Grok.GrokImagineVideoGenSession *session;
@property (nonatomic, retain) GrokImagineSessionState *state;
@property (nonatomic, retain) GrokImagineSessionCompleteState *completeState;
@property (nonatomic, copy) NSString *promptText;
@property (nonatomic, retain) TTMGrokLegacyImagineVideoAsset *lastGeneratedVideo;
@property (nonatomic, retain) NSTimer *moderationMessageShownTimer;

/* instance methods */
- (id)initWithAccount:(id)account grokFeatureAccess:(id)access scribeContext:(id)context;
- (void)logImpressionIfNeeded;
- (void)cleanup;
- (_Bool)needsCleanupFor:(id)_for currentSession:(id)session;
- (_Bool)shouldShowPromptInputForAttachments:(id)attachments;
- (_Bool)shouldShowRedoForAttachments:(id)attachments;
- (_Bool)shouldShowImagineButtonForAttachments:(id)attachments;
- (_Bool)shouldHideTagButton;
- (long long)imagineButtonStateForAttachments:(id)attachments;
- (void)setupModerationResetTimer:(id /* block */)timer;
- (id)init;

@end

#endif /* TCRTweetComposeGrokImagineState_h */
