//
#ifndef TFSUserProfileFeaturesProvider_Protocol_h
#define TFSUserProfileFeaturesProvider_Protocol_h
@import Foundation;

@protocol TFSUserProfileFeaturesProvider

@required

@property (nonatomic, readonly) _Bool isProfileBioTranslationEnabled;
@property (nonatomic, readonly) _Bool isProfessionalProfileEnabled;
@property (nonatomic, readonly) _Bool isProfileBusinessAccountEnabled;
@property (nonatomic, readonly) _Bool isProfileHighlightsInfoEnabled;
@property (nonatomic, readonly) _Bool isProfileCreatorSubscriptionsCountEnabled;
@property (nonatomic, readonly) _Bool isProfileHiddenLikesEnabled;
@property (nonatomic, readonly) _Bool isCreatorSubscriptionsEmailShareEnabled;
@property (nonatomic, readonly) _Bool isProfileArticlesInfoEnabled;
@property (nonatomic, readonly) _Bool isProfileCanPayEnabled;
@property (nonatomic, readonly) _Bool isProfileGrokTranslatedBioEnabled;

@optional

@end

#endif /* TFSUserProfileFeaturesProvider_Protocol_h */
