//
#ifndef TFNValuePicker_Protocol_h
#define TFNValuePicker_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNPickableValue-Protocol.h"

@class NSSet, NSString;

@protocol TFNValuePicker <NSObject>

@required

@property (readonly, nonatomic) _Bool canPickMultipleValues;
@property (readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property (readonly, copy, nonatomic) NSSet *pickedValues;
@property (copy, nonatomic) id /* block */ didPickValueBlock;

@optional

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSString *valueQuery;

@end

#endif /* TFNValuePicker_Protocol_h */
