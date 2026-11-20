//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
