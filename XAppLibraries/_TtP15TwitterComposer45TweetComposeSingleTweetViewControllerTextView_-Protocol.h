//
#ifndef _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerTextView__Protocol_h
#define _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerTextView__Protocol_h
@import Foundation;

@class NSString;

@protocol TwitterComposer.TweetComposeSingleTweetViewControllerTextView

@required

@property (nonatomic, readonly) _Bool isEditing;
@property (nonatomic, readonly) NSString *placeholderText;
@property (nonatomic, readonly) NSString *text;

/* required instance methods */
- (void)setEditing:(_Bool)editing;

@optional

@end

#endif /* _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerTextView__Protocol_h */
