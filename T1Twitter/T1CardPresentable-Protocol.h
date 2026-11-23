//
#ifndef T1CardPresentable_Protocol_h
#define T1CardPresentable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFCCardDataSource-Protocol.h"

@class NSString, NSURL, TFNTwitterAccount, UIViewController;

@protocol T1CardPresentable <NSObject>

@required

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSURL *appDisplayURL;
@property (readonly, nonatomic) NSURL *appURL;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) UIViewController *presentingViewController;

@optional

@end

#endif /* T1CardPresentable_Protocol_h */
