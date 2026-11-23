//
#ifndef TFSTwitterGrokTranslation_h
#define TFSTwitterGrokTranslation_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterEntitySet.h"
#include "TFSTwitterGrokTranslationAssociatedData.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterGrokTranslation : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *translation;
@property (nonatomic, readonly) NSString *previewTranslation;
@property (nonatomic, readonly) TFSTwitterEntitySet *entitySet;
@property (nonatomic, readonly) TFSTwitterGrokTranslationAssociatedData *associatedData;
@property (nonatomic, readonly) NSArray *richTextEntries;
@property (nonatomic, readonly) _Bool isTranslationAvailable;
@property (nonatomic, readonly) NSString *sourceLanguage;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (void)setClassNameFor:(id)_for;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithTranslation:(id)translation previewTranslation:(id)translation entitySet:(id)set associatedData:(id)data richTextEntries:(id)entries isTranslationAvailable:(_Bool)available sourceLanguage:(id)language;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterGrokTranslation_h */
