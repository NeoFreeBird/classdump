//
#ifndef TFNItemTraitsContainer_Protocol_h
#define TFNItemTraitsContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSNumber;

@protocol TFNItemTraitsContainer <NSObject>

@required

@property (retain, nonatomic) NSNumber *overrideTopContentInset;
@property (retain, nonatomic) NSNumber *overrideLeftContentInset;
@property (retain, nonatomic) NSNumber *overrideBottomContentInset;
@property (retain, nonatomic) NSNumber *overrideRightContentInset;

@optional

@end

#endif /* TFNItemTraitsContainer_Protocol_h */
