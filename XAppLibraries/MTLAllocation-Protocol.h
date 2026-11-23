//
#ifndef MTLAllocation_Protocol_h
#define MTLAllocation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MTLAllocation <NSObject>

@required

@property (nonatomic, readonly) long long allocatedSize;

@optional

@end

#endif /* MTLAllocation_Protocol_h */
