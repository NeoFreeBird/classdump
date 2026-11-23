//
#ifndef _TtC14TFSTwitterCore18URTFeedbackContext_h
#define _TtC14TFSTwitterCore18URTFeedbackContext_h
@import Foundation;

@class NSObject, TFSURTCore.URTTimelineEntry.Content.FeedbackInfo, _$sSa -> TFSTwitterCore.URTFeedbackActionContext;

@interface TFSTwitterCore.URTFeedbackContext : NSObject { // (Swift)
    /* instance variables */
    Swift.Array -> TFSTwitterCore.URTFeedbackActionContext feedbackActionCollection;
    TFSURTCore.URTTimelineEntry.Content.FeedbackInfo feedbackInfo;
}

@property (nonatomic, readonly) _Bool isEmpty;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore18URTFeedbackContext_h */
