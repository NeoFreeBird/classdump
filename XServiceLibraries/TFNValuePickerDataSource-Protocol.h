//
#ifndef TFNValuePickerDataSource_Protocol_h
#define TFNValuePickerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNValuePickerDataSource <NSObject>

@required

@optional

/* optional instance methods */
- (id)valuesForPicker:(id)picker;
- (id)valueSectionsForPicker:(id)picker;
- (id)valueSectionNamesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;
- (id)initiallyPickedValuesForPicker:(id)picker;
- (id)unpickableValuesForPicker:(id)picker;
- (id)unpickableTextForPicker:(id)picker;
- (id)picker:(id)picker messageForValue:(id)value;
- (id)addValueMessagesForPicker:(id)picker;

@end

#endif /* TFNValuePickerDataSource_Protocol_h */
