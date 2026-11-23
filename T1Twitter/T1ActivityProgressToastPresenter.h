//
#ifndef T1ActivityProgressToastPresenter_h
#define T1ActivityProgressToastPresenter_h
@import Foundation;

#include "TFSProgressCenterObserver-Protocol.h"

@class NSObject;

@interface T1ActivityProgressToastPresenter : NSObject <TFSProgressCenterObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *toaster;
    NSNumber"16@0:8 *isEnabled;
    NSNumber"16@0:8 *activityView;
    NSNumber"16@0:8 *savedSentRootStatusIDs;
}

/* instance methods */
- (void)progressCenter:(id)center didStartProgress:(id)progress;
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressCenter:(id)center didCompleteProgress:(id)progress;
- (void)progressCenter:(id)center didEndProgressingWithUniqueID:(id)id outcome:(long long)outcome;
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)outboxDidProcessComposition:(id)composition;
- (void)outboxDidFailProcessComposition:(id)composition;
- (void)outboxDidCancelProcessComposition:(id)composition;
- (id)init;

@end

#endif /* T1ActivityProgressToastPresenter_h */
