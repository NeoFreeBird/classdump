//
#ifndef TFNLegacyBasicForm_h
#define TFNLegacyBasicForm_h
@import Foundation;

#include "TFNLegacyForm.h"

@class NSArray;

@interface TFNLegacyBasicForm : TFNLegacyForm

@property (readonly, nonatomic) NSArray *formFields;

/* class methods */
+ (id)_createFormFieldWithTitle:(id)title hintText:(id)text userInput:(id)input;

/* instance methods */
- (id)initWithTitles:(id)titles hintTexts:(id)texts userInputs:(id)inputs;
- (id)userInputForFormFieldAtIndex:(unsigned long long)index;
- (id)sections;

@end

#endif /* TFNLegacyBasicForm_h */
