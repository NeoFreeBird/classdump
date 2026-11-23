//
#ifndef TFNTooltipManagerDataSource_Protocol_h
#define TFNTooltipManagerDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTooltipManagerDataSource <NSObject>

@required

/* required instance methods */
- (id)defaultTooltipPresentationView;

@optional

@end

#endif /* TFNTooltipManagerDataSource_Protocol_h */
