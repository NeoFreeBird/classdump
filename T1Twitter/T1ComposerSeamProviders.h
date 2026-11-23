//
#ifndef T1ComposerSeamProviders_h
#define T1ComposerSeamProviders_h
@import Foundation;

#include "_TtP15TwitterComposer21ComposerSeamProviders_-Protocol.h"

@class NSObject;

@interface T1ComposerSeamProviders : NSObject <TwitterComposer.ComposerSeamProviders> // (Swift)

/* instance methods */
- (id)makeMediaAttachmentsController;
- (id)makeGrokImaginePostURLDetectorWithAccount:(id)account;
- (_Bool)isGrokImaginePostURL:(id)url;
- (id)makeSingleTweetControllerWithComposition:(id)composition account:(id)account tweetAudienceSelectionModel:(id)model scribeContext:(id)context;
- (id)makeReplyContextController;
- (id)init;

@end

#endif /* T1ComposerSeamProviders_h */
