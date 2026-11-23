//
#ifndef T1StatusSharePreviewProvider_h
#define T1StatusSharePreviewProvider_h
@import Foundation;

@class _$s10ShareSheet0aB15PreviewProviderCN;

@interface T1StatusSharePreviewProvider : type metadata for ShareSheet.ShareSheetPreviewProvider { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *replyAssistant;
    NSNumber"16@0:8 *conversationAssistant;
    NSNumber"16@0:8 *status;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *layoutMetrics;
    NSNumber"16@0:8 *conversationReply;
    NSNumber"16@0:8 *previewImages;
    NSNumber"16@0:8 *cardViews;
    NSNumber"16@0:8 *assistants;
    NSNumber"16@0:8 *generationState;
}

@property (nonatomic, readonly) long long numberOfPreviews;

/* instance methods */
- (id)initWithStatus:(id)status account:(id)account layoutMetrics:(id)metrics;
- (void)dealloc;
- (void)beginGeneratingPreviews;
- (void)endGeneratingPreviews;
- (id)previewImageAt:(long long)at;
- (id)init;

@end

#endif /* T1StatusSharePreviewProvider_h */
