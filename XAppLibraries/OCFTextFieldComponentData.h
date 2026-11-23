//
#ifndef OCFTextFieldComponentData_h
#define OCFTextFieldComponentData_h
@import Foundation;

#include "OCFComponentData.h"

@class NSString;

@interface OCFTextFieldComponentData : OCFComponentData

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *hintText;
@property (readonly, nonatomic) long long maxLength;
@property (readonly, nonatomic) long long displayedLines;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long autoCapitalizationType;
@property (readonly, nonatomic) long long autoCorrectionType;
@property (readonly, nonatomic) NSString *contentType;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (_Bool)isEqual:(id)equal;
- (id)settingsDictionary;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFTextFieldComponentData_h */
