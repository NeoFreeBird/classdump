//
#ifndef T1TranslationToggleEventHandler_h
#define T1TranslationToggleEventHandler_h
@import Foundation;

@class NSObject;

@interface T1TranslationToggleEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller;
- (void)_t1_toggleTranslationForViewModel:(id)model account:(id)account controller:(id)controller;
- (void)_t1_fetchTranslations:(id)translations account:(id)account controller:(id)controller;
- (void)_t1_fetchGrokTranslations:(id)translations account:(id)account controller:(id)controller translationSource:(id)source sourceLanguageCode:(id)code destinationLanguageCode:(id)code;
- (void)_t1_fetchTranslatedStatusFromGraphQL:(id)ql account:(id)account controller:(id)controller translationSource:(id)source;

@end

#endif /* T1TranslationToggleEventHandler_h */
