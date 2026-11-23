//
#ifndef _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h
#define _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TFNTwitterComposition.h"

@protocol TwitterComposer.TweetComposeReplyContextViewControllerProtocol

@required

@property (nonatomic, retain) TFNTwitterAccount *account;
@property (nonatomic, retain) TFNTwitterComposition *composition;
@property (nonatomic, readonly) double peekHeight;

/* required instance methods */
- (void)setDelegate:(id)delegate;

@optional

@end

#endif /* _TtP15TwitterComposer46TweetComposeReplyContextViewControllerProtocol__Protocol_h */
