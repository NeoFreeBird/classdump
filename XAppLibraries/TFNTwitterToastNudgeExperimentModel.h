//
#ifndef TFNTwitterToastNudgeExperimentModel_h
#define TFNTwitterToastNudgeExperimentModel_h
@import Foundation;

#include "TFNTwitterAccountModel.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterToastNudgeExperimentModel : NSObject

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) TFNTwitterAccountModel *accountModel;
@property (readonly, nonatomic) unsigned long long toastNudgeFlags;

/* class methods */
+ (void)scribe:(id)scribe composition:(id)composition didSendStatusIDString:(id)idstring;
+ (void)scribe:(id)scribe didSaveDraftComposition:(id)composition;
+ (void)scribe:(id)scribe didDeleteDraftComposition:(id)composition;

/* instance methods */
- (id)initWithAccountID:(id)id accountModel:(id)model featureSwitches:(id)switches;
- (_Bool)shouldHideTweetSentToast;
- (_Bool)shouldShowShowUndoTweetSentToast;
- (_Bool)sendNotificationToShowUndoTweetToastIfNeededForCompositions:(id)compositions;
- (void)_tfn_storeProposedTextToCustomScribeTableForComposition:(id)composition;

@end

#endif /* TFNTwitterToastNudgeExperimentModel_h */
