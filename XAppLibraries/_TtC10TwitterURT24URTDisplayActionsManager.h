//
#ifndef _TtC10TwitterURT24URTDisplayActionsManager_h
#define _TtC10TwitterURT24URTDisplayActionsManager_h
@import Foundation;

@class TwitterURT.URTClientFeedbackConfirmationSink, TwitterURT.URTDisplayActions ?, TwitterURT.URTTimelineUpdateDisplayActionCoverPresenter ?, TwitterURT.URTTimelineUpdatePipeline, _$sSo32URTDisplayActionsManagerDelegate_pSgXw, _TtCs12_SwiftObject;

@interface TwitterURT.URTDisplayActionsManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterURT.URTDisplayActions ? displayActions;
    weak __C.URTDisplayActionsManagerDelegate? delegate;
    TwitterURT.URTTimelineUpdatePipeline timelineUpdater;
    TwitterURT.URTTimelineUpdateDisplayActionCoverPresenter ? coverPresenter;
    TwitterURT.URTClientFeedbackConfirmationSink feedbackConfirmationSink;
}

@end

#endif /* _TtC10TwitterURT24URTDisplayActionsManager_h */
