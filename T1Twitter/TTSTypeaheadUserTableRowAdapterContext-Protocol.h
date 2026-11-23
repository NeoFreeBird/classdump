//
#ifndef TTSTypeaheadUserTableRowAdapterContext_Protocol_h
#define TTSTypeaheadUserTableRowAdapterContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "TTSSearchFeatureSwitches-Protocol.h"

@protocol TTSTypeaheadUserTableRowAdapterContext <NSObject>

@required

@property (readonly, nonatomic) id <TTSSearchFeatureSwitches> searchFeatures;
@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;

/* required instance methods */
- (_Bool)hasAccountLabel:(id)label;
- (_Bool)shouldShowMessageButtonForUser:(id)user;
- (id)externalViewProvider;
- (id)imagePipeline;
- (id)provideInfoForUser:(id)user useDarkMode:(_Bool)mode;
- (id)socialTextForSocialContext:(id)context;

@optional

@end

#endif /* TTSTypeaheadUserTableRowAdapterContext_Protocol_h */
