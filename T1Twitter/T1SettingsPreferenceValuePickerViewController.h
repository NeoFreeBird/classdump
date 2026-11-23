//
#ifndef T1SettingsPreferenceValuePickerViewController_h
#define T1SettingsPreferenceValuePickerViewController_h
@import Foundation;

@class TFNDataViewItem, TFNPickerViewController;

@interface T1SettingsPreferenceValuePickerViewController : TFNPickerViewController {
    /* instance variables */
    _Bool _shouldResetItem;
    TFNDataViewItem *_helpItem;
}

/* instance methods */
- (id)initWithItem:(id)item updateAction:(id /* block */)action;
- (void)_resetItem;
- (void)setSections:(id)sections;
- (void)viewWillAppear:(_Bool)appear;

@end

#endif /* T1SettingsPreferenceValuePickerViewController_h */
