//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
