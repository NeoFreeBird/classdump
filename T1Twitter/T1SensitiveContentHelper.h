//
#ifndef T1SensitiveContentHelper_h
#define T1SensitiveContentHelper_h
@import Foundation;

@class NSObject;

@interface T1SensitiveContentHelper : NSObject

/* class methods */
+ (double)paragraphSpacingForTweetDetails;
+ (id)sensitiveContentRichText;
+ (id)sensitiveContentRichTextInTweetDetails;
+ (id)accessibilityLabelForSensitiveMedia;
+ (id)accessibilityLabelForSensitiveMediaInTweetDetails;
+ (id)accessibilityHintForSensitiveMedia;
+ (id)accessibilityHintForSensitiveMediainTweetDetails;

@end

#endif /* T1SensitiveContentHelper_h */
