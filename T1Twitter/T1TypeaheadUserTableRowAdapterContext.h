//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TypeaheadUserTableRowAdapterContext_h
#define T1TypeaheadUserTableRowAdapterContext_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "TTSSearchFeatureSwitches-Protocol.h"
#include "TTSTypeaheadUserTableRowAdapterContext-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TUIUserBadger;

@interface T1TypeaheadUserTableRowAdapterContext : NSObject <TTSTypeaheadUserTableRowAdapterContext>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TUIUserBadger *badger;
@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) id <TTSSearchFeatureSwitches> searchFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (_Bool)hasAccountLabel:(id)label;
- (_Bool)shouldShowMessageButtonForUser:(id)user;
- (id)externalViewProvider;
- (id)imagePipeline;
- (id)provideInfoForUser:(id)user useDarkMode:(_Bool)mode;
- (id)socialTextForSocialContext:(id)context;

@end

#endif /* T1TypeaheadUserTableRowAdapterContext_h */
