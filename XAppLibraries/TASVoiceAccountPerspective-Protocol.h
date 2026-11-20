//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASVoiceAccountPerspective_Protocol_h
#define TASVoiceAccountPerspective_Protocol_h
@import Foundation;

#include "TASSpacesContext-Protocol.h"
#include "TBCPeriscopeAccount.h"
#include "TBCPeriscopeAccountManager.h"
#include "TCMCommunitiesContext.h"
#include "TFNTwitterPromotedEventLogger.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "TSAContext-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSString, TFSAccountFeatureSwitches;

@protocol TASVoiceAccountPerspective <TAPAccount.TAPAccountPerspective, TSAContext>

@required

@property (nonatomic, readonly) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (nonatomic, readonly) TFSAccountFeatureSwitches *accountFeatureSwitches;
@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) id <TASSpacesContext> spacesContext;
@property (nonatomic, readonly) TBCPeriscopeAccountManager *periscopeAccountManager;
@property (nonatomic, readonly) TBCPeriscopeAccount *periscopeAccount;
@property (nonatomic, readonly) TFNTwitterPromotedEventLogger *promotedEventLogger;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) _Bool isActiveCreator;
@property (nonatomic, readonly) _Bool isNetzDGInSpacesEnabled;
@property (nonatomic, readonly) NSString *isNetzDGInSpacesURLString;
@property (nonatomic, readonly) TCMCommunitiesContext *communitiesContext;

/* required instance methods */
- (void)followUsers:(id)users responseBlock:(id /* block */)block;
- (void)unfollowUsers:(id)users responseBlock:(id /* block */)block;
- (void)lookUpUserForUsername:(id)username source:(unsigned long long)source completionBlock:(id /* block */)block;

@optional

@end

#endif /* TASVoiceAccountPerspective_Protocol_h */
