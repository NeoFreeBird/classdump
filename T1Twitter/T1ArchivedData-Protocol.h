//
#ifndef T1ArchivedData_Protocol_h
#define T1ArchivedData_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDate;

@protocol T1ArchivedData <NSObject, NSCoding>

@required

@property (readonly, nonatomic) NSDate *archivedDate;
@property (readonly, nonatomic) _Bool TTLHasExpired;

@optional

@end

#endif /* T1ArchivedData_Protocol_h */
