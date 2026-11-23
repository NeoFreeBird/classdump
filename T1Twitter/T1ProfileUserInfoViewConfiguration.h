//
#ifndef T1ProfileUserInfoViewConfiguration_h
#define T1ProfileUserInfoViewConfiguration_h
@import Foundation;

@class GrokTranslateButtonViewFeatures, NSObject;

@interface T1ProfileUserInfoViewConfiguration : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) _Bool useGrokInlineTranslation;
@property (readonly, nonatomic) _Bool useGrokAutoTranslation;
@property (readonly, nonatomic) GrokTranslateButtonViewFeatures *grokTranslationButtonFeatures;

/* class methods */
+ (id)configurationForAccount:(id)account;

/* instance methods */
- (id)initWithUserID:(long long)id useGrokInlineTranslation:(_Bool)translation useGrokAutoTranslation:(_Bool)translation grokTranslationButtonFeatures:(id)features;

@end

#endif /* T1ProfileUserInfoViewConfiguration_h */
