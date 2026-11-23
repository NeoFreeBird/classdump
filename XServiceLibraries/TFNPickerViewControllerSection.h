//
#ifndef TFNPickerViewControllerSection_h
#define TFNPickerViewControllerSection_h
@import Foundation;

#include "TFNPickableItem.h"
#include "TFNPickableValue-Protocol.h"
#include "TFNValuePicker-Protocol.h"

@class NSArray, NSIndexPath, NSObject, NSSet, NSString;

@interface TFNPickerViewControllerSection : NSObject <TFNValuePicker>

@property (retain, nonatomic) TFNPickableItem *lastPickedItem;
@property (nonatomic) long long lastPickedIndex;
@property (retain, nonatomic) NSIndexPath *lastPickedIndexPath;
@property (retain, nonatomic) NSIndexPath *nextPickedIndexPath;
@property (retain, nonatomic) id <TFNPickableValue> pickedValue;
@property (copy, nonatomic) NSSet *pickedValues;
@property (copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) _Bool canPickMultipleValues;
@property (copy, nonatomic) id /* block */ didPickValueBlock;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSString *valueQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithIndex:(unsigned long long)index name:(id)name canPickMultipleValues:(_Bool)values;
- (void)populateWithValues:(id)values initiallyPickedValues:(id)values unpickableValues:(id)values valuePickingOptional:(_Bool)optional maxAllowedValuesPicked:(_Bool)picked;

@end

#endif /* TFNPickerViewControllerSection_h */
