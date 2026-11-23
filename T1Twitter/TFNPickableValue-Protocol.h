//
#ifndef TFNPickableValue_Protocol_h
#define TFNPickableValue_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TFNPickableValue <NSObject>

@required

@property (nonatomic, readonly) NSString *valueName;
@property (nonatomic, readonly) UIImage *valueIcon;
@property (nonatomic, readonly) NSString *valueDetail;
@property (nonatomic, readonly) NSString *valueShortName;

@optional

@end

#endif /* TFNPickableValue_Protocol_h */
