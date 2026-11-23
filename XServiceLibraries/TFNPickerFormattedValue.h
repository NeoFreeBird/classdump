//
#ifndef TFNPickerFormattedValue_h
#define TFNPickerFormattedValue_h
@import Foundation;

#include "TFNPickableValue-Protocol.h"

@class NSFormatter, NSObject, NSString, UIImage;

@interface TFNPickerFormattedValue : NSObject <TFNPickableValue>

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSFormatter *formatter;
@property (readonly, copy, nonatomic) NSString *valueName;
@property (readonly, nonatomic) UIImage *valueIcon;
@property (readonly, copy, nonatomic) NSString *valueDetail;
@property (readonly, copy, nonatomic) NSString *valueShortName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithValue:(id)value formatter:(id)formatter;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToFormattedValue:(id)value;

@end

#endif /* TFNPickerFormattedValue_h */
