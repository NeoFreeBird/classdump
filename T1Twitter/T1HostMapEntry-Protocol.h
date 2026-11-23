//
#ifndef T1HostMapEntry_Protocol_h
#define T1HostMapEntry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol T1HostMapEntry <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *mappedHost;
@property (readonly, copy, nonatomic) NSSet *literalPaths;
@property (readonly, copy, nonatomic) NSSet *prefixPaths;

@optional

@end

#endif /* T1HostMapEntry_Protocol_h */
