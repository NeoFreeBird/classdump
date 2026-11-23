//
#ifndef OCFToggleWrapperComponentData_h
#define OCFToggleWrapperComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"
#include "OCFToggleWrapperComponentContent.h"

@interface OCFToggleWrapperComponentData : OCFComponentData

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFRichText *titleText;
@property (readonly, nonatomic) OCFToggleWrapperComponentContent *onContent;
@property (readonly, nonatomic) OCFToggleWrapperComponentContent *offContent;
@property (readonly, nonatomic) _Bool state;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithStyle:(long long)style titleText:(id)text onContent:(id)content offContent:(id)content state:(_Bool)state;
- (_Bool)isEqual:(id)equal;
- (id)settingsDictionary;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFToggleWrapperComponentData_h */
