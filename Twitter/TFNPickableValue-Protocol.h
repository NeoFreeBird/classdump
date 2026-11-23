//
#ifndef TFNPickableValue_Protocol_h
#define TFNPickableValue_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TFNPickableValue <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *valueName;

@optional

@property (readonly, nonatomic) UIImage *valueIcon;
@property (readonly, copy, nonatomic) NSString *valueDetail;
@property (readonly, copy, nonatomic) NSString *valueShortName;

@end

#endif /* TFNPickableValue_Protocol_h */
