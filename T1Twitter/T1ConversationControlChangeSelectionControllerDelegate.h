//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationControlChangeSelectionControllerDelegate_h
#define T1ConversationControlChangeSelectionControllerDelegate_h
@import Foundation;

#include "TCRConversationControlTypeSelectionControllerDelegate-Protocol.h"

@class NSArray, NSObject, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;

@interface T1ConversationControlChangeSelectionControllerDelegate : NSObject <TCRConversationControlTypeSelectionControllerDelegate>

@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) _Bool tweetHasMention;
@property (readonly, nonatomic) _Bool shouldDelaySelectionAction;
@property (readonly, nonatomic) NSArray *currentRegionCodes;

/* instance methods */
- (id)initWithScribeContext:(id)context account:(id)account status:(id)status;
- (void)conversationControlOptionsWereSelectedWithTypes:(id)types regionCodes:(id)codes;
- (id)conversationControlDisplayTextForType:(unsigned long long)type;
- (id)conversationControlAccessibilityTextForType:(unsigned long long)type;
- (id)conversationControlIconNameForType:(unsigned long long)type;
- (id)conversationControlSubtitleTextForType:(unsigned long long)type;
- (_Bool)_t1_useCheckmarkLabeling;
- (void)_t1_changeTweetConversationControlTo:(id)to regionCodes:(id)codes;
- (id)_t1_scribeValueForConversationControlTypes:(id)types;

@end

#endif /* T1ConversationControlChangeSelectionControllerDelegate_h */
