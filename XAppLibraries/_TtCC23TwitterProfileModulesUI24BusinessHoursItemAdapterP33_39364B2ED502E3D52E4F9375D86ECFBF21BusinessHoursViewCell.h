//
#ifndef _TtCC23TwitterProfileModulesUI24BusinessHoursItemAdapterP33_39364B2ED502E3D52E4F9375D86ECFBF21BusinessHoursViewCell_h
#define _TtCC23TwitterProfileModulesUI24BusinessHoursItemAdapterP33_39364B2ED502E3D52E4F9375D86ECFBF21BusinessHoursViewCell_h
@import Foundation;

@class TFNTableViewCell;

@interface TwitterProfileModulesUI.BusinessHoursItemAdapter.(BusinessHoursViewCell in _39364B2ED502E3D52E4F9375D86ECFBF) : TFNTableViewCell { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 item;
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 didEditOpen;
    @40@0:8:16@24@32 didEditClose;
    @40@0:8:16@24@32 contentStackViewMargins;
    @40@0:8:16@24@32 $__lazy_storage_$_contentStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_openTimeStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_openTimeLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_openTimePicker;
    @40@0:8:16@24@32 $__lazy_storage_$_closeTimeStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_closeTimeLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_closeTimePicker;
    @40@0:8:16@24@32 deleteButtonSize;
    @40@0:8:16@24@32 $__lazy_storage_$_deleteButtonContainer;
    @40@0:8:16@24@32 $__lazy_storage_$_deleteButton;
    @40@0:8:16@24@32 datePickerConfiguration;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)pickerValueChanged:(id)changed;
- (void)deleteButtonActivated:(id)activated;

@end

#endif /* _TtCC23TwitterProfileModulesUI24BusinessHoursItemAdapterP33_39364B2ED502E3D52E4F9375D86ECFBF21BusinessHoursViewCell_h */
