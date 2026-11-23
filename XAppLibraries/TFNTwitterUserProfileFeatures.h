//
#ifndef TFNTwitterUserProfileFeatures_h
#define TFNTwitterUserProfileFeatures_h
@import Foundation;

#include "TFSUserProfileFeaturesProvider-Protocol.h"

@class NSObject;

@interface TFNTwitterUserProfileFeatures : NSObject <TFSUserProfileFeaturesProvider>

@property (readonly, nonatomic) _Bool isProfileBioTranslationEnabled;
@property (readonly, nonatomic) _Bool isProfessionalProfileEnabled;
@property (readonly, nonatomic) _Bool isProfileBusinessAccountEnabled;
@property (readonly, nonatomic) _Bool isProfileHighlightsInfoEnabled;
@property (readonly, nonatomic) _Bool isProfileCreatorSubscriptionsCountEnabled;
@property (readonly, nonatomic) _Bool isProfileHiddenLikesEnabled;
@property (readonly, nonatomic) _Bool isCreatorSubscriptionsEmailShareEnabled;
@property (readonly, nonatomic) _Bool isProfileArticlesInfoEnabled;
@property (readonly, nonatomic) _Bool isProfileCanPayEnabled;
@property (readonly, nonatomic) _Bool isProfileGrokTranslatedBioEnabled;

/* instance methods */
- (id)initWithIsProfileBioTranslationEnabled:(_Bool)enabled isProfessionalProfileEnabled:(_Bool)enabled isProfileBusinessAccountEnabled:(_Bool)enabled isProfileHighlightsInfoEnabled:(_Bool)enabled isProfileCreatorSubscriptionsCountEnabled:(_Bool)enabled isProfileHiddenLikesEnabled:(_Bool)enabled isCreatorSubscriptionsEmailShareEnabled:(_Bool)enabled isProfileArticlesInfoEnabled:(_Bool)enabled isProfileCanPayEnabled:(_Bool)enabled isProfileGrokTranslatedBioEnabled:(_Bool)enabled;

@end

#endif /* TFNTwitterUserProfileFeatures_h */
