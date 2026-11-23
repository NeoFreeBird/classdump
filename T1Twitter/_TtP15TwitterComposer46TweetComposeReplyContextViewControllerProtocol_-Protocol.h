//
#ifndef _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h
#define _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h
@import Foundation;

@class TFNTwitterAccount, TFNTwitterComposition;

@protocol TwitterComposer.TweetComposeReplyContextViewControllerProtocol

@required

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) double peekHeight;

/* required instance methods */
- (void)setDelegate:(id)delegate;

@optional

@end

#endif /* _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h */
