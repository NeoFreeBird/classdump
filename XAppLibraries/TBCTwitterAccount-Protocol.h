//
#ifndef TBCTwitterAccount_Protocol_h
#define TBCTwitterAccount_Protocol_h
@import Foundation;

#include "TBCPeriscopeAccount.h"
#include "TFSTwitterAPICommandContext-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSString, TASActionService;

@protocol TBCTwitterAccount <TAPAccount.TAPAccountPerspective>

@required

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TBCPeriscopeAccount *periscopeAccount;
@property (readonly, nonatomic) id <TFSTwitterAPICommandLoader> tbc_apiCommandLoader;
@property (readonly, nonatomic) id <TFSTwitterAPICommandContext> tbc_apiCommandContext;
@property (readonly, nonatomic) TASActionService *tbc_actionService;
@property (readonly, nonatomic) _Bool tbc_isLiveVideoViewerSessionEnabled;

@optional

@end

#endif /* TBCTwitterAccount_Protocol_h */
