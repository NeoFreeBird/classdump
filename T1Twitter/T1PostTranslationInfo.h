//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PostTranslationInfo_h
#define T1PostTranslationInfo_h
@import Foundation;

#include "T1TranslatedStatusViewModel.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class GrokTranslationError, NSObject;

@interface T1PostTranslationInfo : NSObject // (Swift)

@property (nonatomic) long long state;
@property (nonatomic, retain) id <TTACoreStatusViewModel> originalStatus;
@property (nonatomic, retain) T1TranslatedStatusViewModel *translatedStatus;
@property (nonatomic, retain) GrokTranslationError *translationError;

/* instance methods */
- (id)init;

@end

#endif /* T1PostTranslationInfo_h */
