//
#ifndef _TtC10TFNUISwift19LegacyTabDescriptor_h
#define _TtC10TFNUISwift19LegacyTabDescriptor_h
@import Foundation;

#include "_TtC10TFNUISwift13LegacyTabSlot.h"

@class NSArray, NSObject, NSString, TFNUISwift.LegacyTabSlot ?, UIColor, _$sSSSg, _$sSo7UIColorCSg;

@interface TFNUISwift.LegacyTabDescriptor : NSObject // (Swift)

@property (nonatomic, retain) TFNUISwift.LegacyTabSlot *leadingAccessory;
@property (nonatomic, retain) TFNUISwift.LegacyTabSlot *leadingMain;
@property (nonatomic, retain) TFNUISwift.LegacyTabSlot *trailingMain;
@property (nonatomic, retain) TFNUISwift.LegacyTabSlot *trailingAccessory;
@property (nonatomic, copy) NSString *tabAccessibilityLabel;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic, retain) UIColor *deselectedColor;
@property (nonatomic, retain) UIColor *highlightBarColor;
@property (nonatomic, readonly) NSArray *orderedSlots;
@property (nonatomic, readonly) NSString *firstLabelText;

/* instance methods */
- (id)init;
- (id)initWithLeadingAccessory:(id)accessory leadingMain:(id)main trailingMain:(id)main trailingAccessory:(id)accessory tabAccessibilityLabel:(id)label selectedColor:(id)color deselectedColor:(id)color highlightBarColor:(id)color;
- (id)opticallyCentered;

@end

#endif /* _TtC10TFNUISwift19LegacyTabDescriptor_h */
