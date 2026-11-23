//
#ifndef TFSTwitterTranslation_h
#define TFSTwitterTranslation_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterEntitySet.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterTranslation : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *translation;
@property (nonatomic, readonly) NSString *previewTranslation;
@property (nonatomic, readonly) TFSTwitterEntitySet *entities;
@property (nonatomic, readonly) NSString *translationSource;
@property (nonatomic, readonly) NSString *localizedSourceLanguage;
@property (nonatomic, readonly) NSString *sourceLanguage;
@property (nonatomic, readonly) NSString *destinationLanguage;
@property (nonatomic, readonly) NSArray *polls;
@property (nonatomic, readonly) NSString *translationState;

/* instance methods */
- (id)initWithTranslation:(id)translation previewTranslation:(id)translation entities:(id)entities translationSource:(id)source localizedSourceLanguage:(id)language sourceLanguage:(id)language destinationLanguage:(id)language polls:(id)polls translationState:(id)state;
- (id)initWithGrokTranslation:(id)translation;
- (id)initWithGrokTranslation:(id)translation previewTranslation:(id)translation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterTranslation_h */
