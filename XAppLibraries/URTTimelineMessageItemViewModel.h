//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTTimelineMessageItemViewModel_h
#define URTTimelineMessageItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterFeedbackInfo.h"
#include "TFNTwitterSuggestedItem-Protocol.h"
#include "TFNTwitterSuggestsInfo.h"
#include "TwitterTimelineMessageAction-Protocol.h"
#include "TwitterTimelineMessageTextAction-Protocol.h"
#include "TwitterTimelinePromptUserFacepile-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, TFSURTRichText, _TtC14TFSTwitterCore18URTFeedbackContext, _TtCVOV10TFSURTCore16URTTimelineEntry7Content4Item15ClientEventInfo;

@interface URTTimelineMessageItemViewModel : NSObject <TFSTwitterCore.TFSTwitterScribableItem, TFNTwitterSuggestedItem, NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 messageItem;
}

@property (nonatomic, readonly) TFNTwitterFeedbackInfo *feedbackInfo;
@property (nonatomic, readonly) TFNTwitterSuggestsInfo *suggestsInfo;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo *clientEventInfo;
@property (nonatomic, readonly) TFSTwitterCore.URTFeedbackContext *feedbackContext;
@property (nonatomic) _Bool shouldLogImpression;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly) NSArray *imageVariants;
@property (nonatomic, readonly) long long headerAlignment;
@property (nonatomic, readonly) long long bodyAlignment;
@property (nonatomic, readonly) TFSURTRichText *headerRichText;
@property (nonatomic, readonly) TFSURTRichText *bodyRichText;
@property (nonatomic, readonly) id <TwitterTimelineMessageAction> action;
@property (nonatomic, readonly) id <TwitterTimelineMessageTextAction> primaryButtonAction;
@property (nonatomic, readonly) id <TwitterTimelineMessageTextAction> secondaryButtonAction;
@property (nonatomic, readonly) id <TwitterTimelinePromptUserFacepile> userFacepile;
@property (nonatomic, readonly) NSDictionary *ocfPromptContentViewDictionary;
@property (nonatomic, readonly) NSString *ocfPromptContentUniqueIdentifier;
@property (nonatomic, readonly) NSString *bannerText;
@property (nonatomic, readonly) NSString *scribeComponentForPrimaryAction;
@property (nonatomic, readonly) NSString *scribeComponentForSecondaryAction;
@property (nonatomic, readonly) _Bool isDismissible;
@property (nonatomic, readonly) NSArray *impressionCallbackEndpoints;

/* instance methods */
- (id)scribeParametersWithPosition:(long long)position;
- (id)init;

@end

#endif /* URTTimelineMessageItemViewModel_h */
