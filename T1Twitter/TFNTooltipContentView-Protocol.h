//
#ifndef TFNTooltipContentView_Protocol_h
#define TFNTooltipContentView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipContentView <NSObject>

@required

@property (copy, nonatomic) id /* block */ contentSizeChangedBlock;

@optional

@end

#endif /* TFNTooltipContentView_Protocol_h */
