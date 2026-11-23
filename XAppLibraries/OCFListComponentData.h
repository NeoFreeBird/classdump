//
#ifndef OCFListComponentData_h
#define OCFListComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@class NSArray;

@interface OCFListComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) _Bool isSearchEnabled;
@property (readonly, nonatomic) NSArray *allowedValues;
@property (readonly, nonatomic) NSArray *selectedValues;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;
- (id)initWithAllowedValues:(id)values selectedValues:(id)values isSearchEnabled:(_Bool)enabled primaryText:(id)text secondaryText:(id)text;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* OCFListComponentData_h */
