//
#ifndef URTEntryFeedbackViewModel_Protocol_h
#define URTEntryFeedbackViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtC10TwitterURT23FeedbackActionViewModel.h"

@class NSString, _TtC14TFSTwitterCore18URTFeedbackContext;

@protocol URTEntryFeedbackViewModel <NSObject>

@required

@property (nonatomic, readonly) TwitterURT.FeedbackActionViewModel *feedbackActionViewModel;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) TFSTwitterCore.URTFeedbackContext *feedbackContext;

@optional

@end

#endif /* URTEntryFeedbackViewModel_Protocol_h */
