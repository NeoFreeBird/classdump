//
#ifndef _TtC12TweetDetails28GrokTranslateButtonViewState_h
#define _TtC12TweetDetails28GrokTranslateButtonViewState_h
@import Foundation;

@class NSObject, NSString, Swift.Bool, TweetDetails.GrokTranslateButtonViewState.TranslationState, _$sSSSg;

@interface TweetDetails.GrokTranslateButtonViewState : NSObject // (Swift)

@property (nonatomic, readonly) long long translationState;
@property (nonatomic, readonly) _Bool isAnnotationOnly;
@property (nonatomic, readonly) NSString *sourceLanguageCode;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* class methods */
+ (id)translatable;
+ (id)translatableWithSourceLanguageCode:(id)code;
+ (id)translatingWithSourceLanguageCode:(id)code;
+ (id)translatedWithSourceLanguageCode:(id)code;
+ (id)translatedWithoutButtonWithSourceLanguageCode:(id)code;
+ (id)error;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithState:(long long)state isAnnotationOnly:(_Bool)only sourceLanguageCode:(id)code;
- (id)init;

@end

#endif /* _TtC12TweetDetails28GrokTranslateButtonViewState_h */
