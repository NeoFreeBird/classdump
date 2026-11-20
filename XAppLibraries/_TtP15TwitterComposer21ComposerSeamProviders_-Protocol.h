//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
