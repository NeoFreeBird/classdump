//
#ifndef T1CardViewAppStoreEventHandlerPresentable_h
#define T1CardViewAppStoreEventHandlerPresentable_h
@import Foundation;

#include "T1CardPresentable-Protocol.h"
#include "TFCCardDataSource-Protocol.h"

@class NSObject, NSString, NSURL, TFNTwitterAccount, TUICardViewEvent, TUICardViewEventHandlerContext, UIViewController;

@interface T1CardViewAppStoreEventHandlerPresentable : NSObject <T1CardPresentable>

@property (readonly, nonatomic) TUICardViewEventHandlerContext *context;
@property (readonly, nonatomic) TUICardViewEvent *event;
@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSURL *appDisplayURL;
@property (readonly, nonatomic) NSURL *appURL;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context event:(id)event;

@end

#endif /* T1CardViewAppStoreEventHandlerPresentable_h */
