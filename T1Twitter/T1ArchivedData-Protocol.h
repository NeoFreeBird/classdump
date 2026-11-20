//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
