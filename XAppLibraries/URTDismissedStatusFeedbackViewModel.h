//
#ifndef URTDismissedStatusFeedbackViewModel_h
#define URTDismissedStatusFeedbackViewModel_h
@import Foundation;

#include "URTEntryFeedbackViewModel-Protocol.h"
#include "URTTimelineStatusItemViewModel.h"
#include "_TtC10TwitterURT23FeedbackActionViewModel.h"

@class NSObject, NSString, _TtC14TFSTwitterCore18URTFeedbackContext;

@interface URTDismissedStatusFeedbackViewModel : NSObject <URTEntryFeedbackViewModel> // (Swift)

@property (nonatomic, readonly) TwitterURT.FeedbackActionViewModel *feedbackActionViewModel;
@property (nonatomic, readonly) URTTimelineStatusItemViewModel *statusViewModel;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) TFSTwitterCore.URTFeedbackContext *feedbackContext;

/* instance methods */
- (id)init;

@end

#endif /* URTDismissedStatusFeedbackViewModel_h */
