//
#ifndef GADEventContextSource_Protocol_h
#define GADEventContextSource_Protocol_h
@import Foundation;

#include "GADEventContext.h"
#include "NSObject-Protocol.h"

@protocol GADEventContextSource <NSObject>

@required

@property (readonly, nonatomic) GADEventContext *context;

@optional

@end

#endif /* GADEventContextSource_Protocol_h */
