//
#ifndef T1TranslationManager_h
#define T1TranslationManager_h
@import Foundation;

@class NSObject;

@interface T1TranslationManager : NSObject

/* class methods */
+ (id)_t1_googleSupportedLanguages;
+ (id)_t1_latinLanguages;
+ (_Bool)_t1_isLanguageSupported:(id)supported;
+ (_Bool)_t1_isLatinLanguage:(id)language;
+ (_Bool)allowsTweetTranslation:(id)translation;
+ (id)displayNameForLanguageCode:(id)code;
+ (id)_languageCodeConversionTable;
+ (id)_languageCodeFromLocaleCode:(id)code;
+ (id)apiLanguageCodeForLanguageCode:(id)code;
+ (id)_t1_mutuallyExclusiveRangesFromEntities:(id)entities;

@end

#endif /* T1TranslationManager_h */
