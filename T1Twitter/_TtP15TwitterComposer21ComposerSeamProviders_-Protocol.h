//
#ifndef _TtP15TwitterComposer21ComposerSeamProviders__Protocol_h
#define _TtP15TwitterComposer21ComposerSeamProviders__Protocol_h
@import Foundation;

@protocol TwitterComposer.ComposerSeamProviders

@required

/* required instance methods */
- (id)makeMediaAttachmentsController;
- (id)makeGrokImaginePostURLDetectorWithAccount:(id)account;
- (_Bool)isGrokImaginePostURL:(id)url;
- (id)makeSingleTweetControllerWithComposition:(id)composition account:(id)account tweetAudienceSelectionModel:(id)model scribeContext:(id)context;
- (id)makeReplyContextController;

@optional

@end

#endif /* _TtP15TwitterComposer21ComposerSeamProviders__Protocol_h */
