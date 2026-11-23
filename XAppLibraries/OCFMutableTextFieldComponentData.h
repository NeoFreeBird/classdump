//
#ifndef OCFMutableTextFieldComponentData_h
#define OCFMutableTextFieldComponentData_h
@import Foundation;

#include "OCFTextFieldComponentData.h"

@class NSString;

@interface OCFMutableTextFieldComponentData : OCFTextFieldComponentData

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) long long maxLength;
@property (nonatomic) long long displayedLines;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autoCapitalizationType;
@property (nonatomic) long long autoCorrectionType;
@property (retain, nonatomic) NSString *contentType;

@end

#endif /* OCFMutableTextFieldComponentData_h */
