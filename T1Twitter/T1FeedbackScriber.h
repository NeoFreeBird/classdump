//
#ifndef T1FeedbackScriber_h
#define T1FeedbackScriber_h
@import Foundation;

@class NSObject;

@interface T1FeedbackScriber : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *scribeContext;
}

/* instance methods */
- (id)initWithScribe:(id)scribe scribeContext:(id)context;
- (void)scribePresentationOfDismissibleItem:(id)item element:(id)element parameters:(id)parameters;
- (void)scribeUndoOfPresentationOfDismissibleItem:(id)item element:(id)element parameters:(id)parameters;
- (void)scribeRemovalOfDismissibleItem:(id)item element:(id)element parameters:(id)parameters;
- (void)scribeSelectionOfFeedbackReasonFromDismissibleItem:(id)item parameters:(id)parameters;
- (void)scribeUndoOfSelectionOfFeedbackReasonFromDismissibleItem:(id)item parameters:(id)parameters;
- (void)scribeRemovalOfFeedbackReasonForDismissibleItem:(id)item parameters:(id)parameters;
- (id)init;

@end

#endif /* T1FeedbackScriber_h */
