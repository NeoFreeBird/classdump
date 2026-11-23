//
#ifndef _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92522SportsPlayVideoSession_h
#define _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92522SportsPlayVideoSession_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSObject, UIView;

@interface T1TwitterSwift.(SportsPlayVideoSession in _31EABD6AD6DB0F4CC8F7E94F2A08E925) : NSObject <TAVUIAutoplayable, TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *onTap;
    NSNumber"16@0:8 *onFinish;
    NSNumber"16@0:8 *container;
    NSNumber"16@0:8 *scrollView;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *tweetID;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *hostManagesVisibility;
    NSNumber"16@0:8 *autoplayCoordinator;
    NSNumber"16@0:8 *videoView;
    NSNumber"16@0:8 *impressionScriber;
    NSNumber"16@0:8 *status;
    NSNumber"16@0:8 *execution;
    NSNumber"16@0:8 *isTornDown;
    NSNumber"16@0:8 *isOnScreen;
    NSNumber"16@0:8 *isActiveAutoplayable;
    NSNumber"16@0:8 *hidesAttribution;
    NSNumber"16@0:8 *finishObservation;
    NSNumber"16@0:8 *loopObserver;
    NSNumber"16@0:8 *hiddenMediaOriginAlphas;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92522SportsPlayVideoSession_h */
