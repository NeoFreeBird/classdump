//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionOutboxController_h
#define TFNTwitterCompositionOutboxController_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNTwitterAccount.h"
#include "TFNTwitterCompositionUploadOperationDelegate-Protocol.h"
#include "TFNTwitterToastNudgeExperimentModel.h"
#include "TFNTwitterUndoSendCoordinator.h"
#include "TFNTwitterUndoSendCoordinatorDelegate-Protocol.h"
#include "TFSProgressCenterObserver-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "TULProgressLiveActivityControllerObserver-Protocol.h"

@class NSMapTable, NSMutableArray, NSObject, NSOperationQueue, NSString, TULProgressLiveActivityController;

@interface TFNTwitterCompositionOutboxController : NSObject <TNLCommunicationAgentObserver, TFNTwitterCompositionUploadOperationDelegate, TFNTwitterUndoSendCoordinatorDelegate, TULProgressLiveActivityControllerObserver, TFSProgressCenterObserver>

@property (retain, nonatomic) NSMutableArray *progressings;
@property (nonatomic) long long networkReachabilityStatus;
@property (nonatomic) _Bool needsToProcessOutboxOnNetworkReachabilityChange;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMapTable *weakOperationsForCompositions;
@property (readonly, nonatomic) TFNTwitterToastNudgeExperimentModel *toastNudgeExperimentModel;
@property (readonly, nonatomic) TFNTwitterUndoSendCoordinator *undoSendCoordinator;
@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (retain, nonatomic) TULProgressLiveActivityController *liveActivity;
@property (readonly, weak, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <NSCopying> uniqueID;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (void)send:(id)send;
- (void)sendCompositions:(id)compositions;
- (void)retryFailedComposition:(id)composition;
- (void)cancelFailedComposition:(id)composition;
- (void)processUnsentCompositions;
- (void)cancelUnsentCompositions:(id)compositions;
- (void)cancelSentComposition:(id)composition;
- (_Bool)isUploadProgressWithUniqueID:(id)id;
- (_Bool)isActivityProgressCoveringComposition:(id)composition;
- (id)uploadProgressUniqueIDCoveringComposition:(id)composition;
- (void)cancelUnsentCompositionsForUploadProgressUniqueID:(id)id;
- (id)_tfn_progressingForUniqueID:(id)id;
- (id)_tfn_progressingCoveringComposition:(id)composition;
- (void)cancelUndoableComposition:(id)composition;
- (void)processUndoableCompositions;
- (void)processValidUndoableCompositions;
- (void)processExpiredUndoableCompositions;
- (void)processExpiredEditableCompositions;
- (void)removeEditableCompositionFromDrafts:(id)drafts;
- (double)sendingProgressForComposition:(id)composition;
- (_Bool)_tfn_main_willShowUndoOptionBeforeSending:(id)sending;
- (void)_tfn_main_prepareCompositionToOutbox:(id)outbox;
- (void)_tfn_main_cancelCompositionToDrafts:(id)drafts;
- (void)_tfn_main_deleteCompositionInOutbox:(id)outbox;
- (void)_tfn_main_processOutbox;
- (_Bool)_tfn_main_containsUnconfirmedSend:(id)send;
- (_Bool)_tfn_main_containsInFlightUpload:(id)upload;
- (void)_tfn_main_logUnconfirmedSendForCompositions:(id)compositions retryExpired:(_Bool)expired currentDate:(id)date;
- (void)_tfn_main_processFailedNudgeDraftCompositions;
- (void)_tfn_main_addNudgeToFailedCompositionIfNeeded:(id)needed failureError:(id)error;
- (void)_tfn_main_didFailSendExpiredCompositions:(id)compositions;
- (void)_tfn_main_enqueueUploadCompositions:(id)compositions;
- (void)_tfn_handleDoubleEditUploadForComposition:(id)composition error:(id)error index:(unsigned long long)index count:(unsigned long long)count completion:(id /* block */)completion;
- (void)_tfn_main_willUploadComposition:(id)composition index:(unsigned long long)index count:(unsigned long long)count;
- (void)_tfn_main_editTweetDidUploadComposition:(id)composition resultStatus:(id)status;
- (void)_tfn_main_didUploadComposition:(id)composition index:(unsigned long long)index count:(unsigned long long)count resultStatus:(id)status;
- (void)_tfn_main_didFailUploadComposition:(id)composition index:(unsigned long long)index count:(unsigned long long)count error:(id)error;
- (void)_tfn_main_didCancelUploadComposition:(id)composition index:(unsigned long long)index count:(unsigned long long)count error:(id)error;
- (void)_tfn_main_sendDidCancelUploadNotificationForComposition:(id)composition;
- (void)_tfn_main_sendDidCancelUploadNotificationForComposition:(id)composition index:(unsigned long long)index count:(unsigned long long)count;
- (void)_tfn_main_startActivityProgressIfNeededForCompositions:(id)compositions;
- (void)_tfn_main_updateProgressing;
- (void)_tfn_main_clearEndedActivityProgress;
- (void)_tfn_main_updateReplyChainScribeDetails:(id)details;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)compositionUploadOperation:(id)operation didUpdateContentInComposition:(id)composition;
- (void)compositionUploadOperation:(id)operation didChangeProgress:(double)progress phase:(long long)phase processingAttachmentCount:(unsigned long long)count processingVideoCount:(unsigned long long)count composition:(id)composition;
- (void)compositionUploadOperationDidSuspendBackgroundTask:(id)task;
- (void)compositionUploadOperationDidResumeBackgroundTask:(id)task;
- (void)undoPeriodElapsedForCompositions:(id)compositions;
- (void)undoBackgroundTaskExpired;
- (void)progressLiveActivityControllerDidEnd:(id)end;
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;

@end

#endif /* TFNTwitterCompositionOutboxController_h */
