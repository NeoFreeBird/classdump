//
#ifndef TFNFormFieldPickerDataSource_h
#define TFNFormFieldPickerDataSource_h
@import Foundation;

#include "TFNFormFieldDataItem.h"
#include "TFNValuePickerDataSource-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFNFormFieldPickerDataSource : NSObject <TFNValuePickerDataSource> {
    /* instance variables */
    TFNFormFieldDataItem *_item;
    NSArray *_pickableValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItem:(id)item pickableValues:(id)values;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;

@end

#endif /* TFNFormFieldPickerDataSource_h */
