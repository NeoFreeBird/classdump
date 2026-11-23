//
#ifndef OCFSettingsGroupComponentData_h
#define OCFSettingsGroupComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@class NSArray;

@interface OCFSettingsGroupComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) NSArray *settings;
@property (readonly, nonatomic) NSArray *statusTextQuantityPairs;

/* class methods */
+ (id)private_settingsGroupForSettingsGroupDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;
- (id)initWithSettings:(id)settings statusTextQuantityPairs:(id)pairs primaryText:(id)text secondaryText:(id)text;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* OCFSettingsGroupComponentData_h */
