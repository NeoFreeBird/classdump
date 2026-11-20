//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRDurationPickerView_h
#define TCRDurationPickerView_h
@import Foundation;

#include "UIPickerViewAccessibilityDelegate-Protocol.h"
#include "UIPickerViewDataSource-Protocol.h"

@class NSDictionary, NSString, UILabel, UIPickerView;
@protocol TCRDurationPickerViewDelegate;

@interface TCRDurationPickerView : UIPickerView <UIPickerViewAccessibilityDelegate, UIPickerViewDataSource>

@property (nonatomic) double maxInterval;
@property (nonatomic) double minInterval;
@property (nonatomic) long long maxDays;
@property (nonatomic) long long maxHours;
@property (nonatomic) long long maxMinutes;
@property (retain, nonatomic) UILabel *daysLabel;
@property (retain, nonatomic) UILabel *hoursLabel;
@property (retain, nonatomic) UILabel *minutesLabel;
@property (retain, nonatomic) NSDictionary *pickerWheelValues;
@property (nonatomic) struct CGSize { double x0; double x1; } valueLabelSize;
@property (weak, nonatomic) id <TCRDurationPickerViewDelegate> durationDelegate;
@property (nonatomic) double selectedDuration;
@property (readonly, nonatomic) NSString *selectedDurationString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_arrayWithNumberValuesUpTo:(unsigned long long)to;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithMinInterval:(double)interval maxInterval:(double)interval;
- (void)setDelegate:(id)delegate;
- (void)setDataSource:(id)source;
- (void)layoutSubviews;
- (void)setSelectedDuration:(double)duration animated:(_Bool)animated;
- (struct CGSize { double x0; double x1; })_sizeOfWidestStringInArray:(id)array;
- (id)_unitLabelForComponent:(long long)component;
- (id)_pickerWheelValueForRow:(long long)row inComponent:(long long)component;
- (double)_clampedInterval:(double)interval;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (double)pickerView:(id)view widthForComponent:(long long)component;
- (double)pickerView:(id)view rowHeightForComponent:(long long)component;
- (id)pickerView:(id)view viewForRow:(long long)row forComponent:(long long)component reusingView:(id)view;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (id)pickerView:(id)view accessibilityLabelForComponent:(long long)component;

@end

#endif /* TCRDurationPickerView_h */
