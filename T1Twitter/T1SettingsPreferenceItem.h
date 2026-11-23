//
#ifndef T1SettingsPreferenceItem_h
#define T1SettingsPreferenceItem_h
@import Foundation;

#include "T1SettingsPreferenceItemValue.h"
#include "TFNValuePickerDataSource-Protocol.h"

@class NSArray, NSObject, NSString, NSUserDefaults, TFNDataViewItem;

@interface T1SettingsPreferenceItem : NSObject <TFNValuePickerDataSource>

@property (retain, nonatomic) T1SettingsPreferenceItemValue *value;
@property (retain, nonatomic) T1SettingsPreferenceItemValue *previousValue;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) TFNDataViewItem *helpItem;
@property (readonly, nonatomic) id /* block */ updateAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title userDefaults:(id)defaults userDefaultsKey:(id)key titles:(id)titles values:(id)values icons:(id)icons defaultValue:(id)value helpItem:(id)item updateAction:(id /* block */)action;
- (id)initWithTitle:(id)title userDefaults:(id)defaults userDefaultsKey:(id)key titles:(id)titles values:(id)values defaultValue:(id)value helpItem:(id)item updateAction:(id /* block */)action;
- (id)initWithTitle:(id)title userDefaultsKey:(id)key titles:(id)titles values:(id)values defaultValue:(id)value helpItem:(id)item updateAction:(id /* block */)action;
- (id)init;
- (id)tfn_dataViewItem;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;

@end

#endif /* T1SettingsPreferenceItem_h */
