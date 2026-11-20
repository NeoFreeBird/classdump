//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAPTweetPerspectiveExchange_AdFormats_h
#define TAPTweetPerspectiveExchange_AdFormats_h
@import Foundation;

@interface TAPTweetPerspectiveExchange (AdFormats)

/* class methods */
+ (id)perspectiveForViewModel:(id)model;
+ (id)editTweetPerspectiveForTweet:(id)tweet;
+ (id)editTweetPerspectiveForTweetOrNil:(id)nil;
+ (id)legacyStatusScribableForViewModel:(id)model;
+ (id)legacyStatusScribableForTweet:(id)tweet;
+ (id)legacyNavigationMetadataPerspectiveForTweet:(id)tweet;
+ (id)webViewPerspectiveForTweet:(id)tweet;
+ (id)legacyPromotedLoggableForTweet:(id)tweet;
+ (id)unifiedCardsTweetForTweet:(id)tweet;
+ (id)playerSessionSourceForPerspective:(id)perspective;
+ (id)twitterCompositionPerspectiveForPerspective:(id)perspective;
+ (id)socialContextTweetPerspectiveForPerspective:(id)perspective;
+ (id)conversationcontextTweetForPerspective:(id)perspective;
+ (_Bool)isTweetPerspective:(id)perspective;
+ (id)asTweetPerspective:(id)perspective;
+ (id)muteTweetPerspectiveForPerspective:(id)perspective;
+ (id)cardDataSourceTweetPerspectiveForPerspective:(id)perspective;
+ (id)adFormatFeaturesPerspectiveForTweet:(id)tweet;

@end

#endif /* TAPTweetPerspectiveExchange_AdFormats_h */
