//
#ifndef TFSTwitterTranslatedProfileBioModel_h
#define TFSTwitterTranslatedProfileBioModel_h
@import Foundation;

#include "TFSTwitterEntitySet.h"

@class NSObject, NSString;

@interface TFSTwitterTranslatedProfileBioModel : NSObject // (Swift)

@property (nonatomic, readonly) NSString *bio;
@property (nonatomic, readonly) TFSTwitterEntitySet *entitySet;
@property (nonatomic, readonly) NSString *sourceLanguage;
@property (nonatomic, readonly) NSString *translationSource;

/* instance methods */
- (id)initWithBio:(id)bio entityDic:(id)dic sourceLanguage:(id)language translationSource:(id)source;
- (id)initWithBio:(id)bio entitySet:(id)set sourceLanguage:(id)language translationSource:(id)source;
- (id)init;

@end

#endif /* TFSTwitterTranslatedProfileBioModel_h */
