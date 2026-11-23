//
#ifndef TFNPickerViewControllerDelegate_Protocol_h
#define TFNPickerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPickerViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pickerViewController:(id)controller didPickValue:(id)value inSectionAtIndex:(unsigned long long)index willDismiss:(_Bool)dismiss;
- (void)pickerViewController:(id)controller didDeselectValue:(id)value inSectionAtIndex:(unsigned long long)index willDismiss:(_Bool)dismiss;
- (void)pickerViewController:(id)controller willAddValueToSectionAtIndex:(unsigned long long)index withAddValueMessage:(id)message index:(unsigned long long)index sender:(id)sender;
- (_Bool)pickerViewController:(id)controller shouldRemoveValue:(id)value fromSectionAtIndex:(unsigned long long)index;
- (void)pickerViewController:(id)controller didRemoveValue:(id)value fromSectionAtIndex:(unsigned long long)index;

@end

#endif /* TFNPickerViewControllerDelegate_Protocol_h */
