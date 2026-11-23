//
#ifndef OCFBooleanComponentData_h
#define OCFBooleanComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@interface OCFBooleanComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) _Bool value;

/* instance methods */
- (id)initWithValue:(_Bool)value primaryText:(id)text secondaryText:(id)text;
- (id)initWithJSONDictionary:(id)jsondictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;
- (_Bool)isEqual:(id)equal;
- (id)settingsDictionary;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFBooleanComponentData_h */
