//
#ifndef TUICardViewEventHandlerContext_h
#define TUICardViewEventHandlerContext_h
@import Foundation;

#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFNDataViewCell-Protocol.h"
#include "TFNTwitterAccount.h"
#include "TFNTwitterCardContext.h"
#include "TFNTwitterCardEventLogger-Protocol.h"
#include "TFNTwitterCardScribeContextProvider-Protocol.h"

@class NSObject, UIView, UIViewController;
@protocol TTACoreBasicStatusView;

@interface TUICardViewEventHandlerContext : NSObject

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (retain, nonatomic) TFNTwitterAccount *composingAccount;
@property (readonly, nonatomic) id <TFNTwitterCardEventLogger> logger;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) id <TFNTwitterCardScribeContextProvider> scribeContextProvider;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (weak, nonatomic) id <TFNDataViewCell> presentingCell;
@property (weak, nonatomic) UIView<TTACoreBasicStatusView> *statusView;
@property (copy, nonatomic) id /* block */ mediaOriginViewProvider;
@property (nonatomic) double mediaAnimationOriginCornerRadius;

/* instance methods */
- (id)initWithCardContext:(id)context scribeContextProvider:(id)provider logger:(id)logger presentingViewController:(id)controller composingAccount:(id)account;
- (id)init;

@end

#endif /* TUICardViewEventHandlerContext_h */
