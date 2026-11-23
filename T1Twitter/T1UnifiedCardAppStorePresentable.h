//
#ifndef T1UnifiedCardAppStorePresentable_h
#define T1UnifiedCardAppStorePresentable_h
@import Foundation;

#include "T1CardPresentable-Protocol.h"
#include "TFCCardDataSource-Protocol.h"
#include "TUCTweetPerspective-Protocol.h"

@class NSObject, NSString, NSURL, TFNTwitterAccount, TUCAppStoreDataEntry, UIViewController;

@interface T1UnifiedCardAppStorePresentable : NSObject <T1CardPresentable>

@property (readonly, nonatomic) TUCAppStoreDataEntry *entry;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TUCTweetPerspective> status;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSURL *appDisplayURL;
@property (readonly, nonatomic) NSURL *appURL;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppStoreEntry:(id)entry account:(id)account status:(id)status presentingViewController:(id)controller;

@end

#endif /* T1UnifiedCardAppStorePresentable_h */
