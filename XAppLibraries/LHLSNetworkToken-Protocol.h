//
#ifndef LHLSNetworkToken_Protocol_h
#define LHLSNetworkToken_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol LHLSNetworkToken <NSObject, NSCopying>

@required

@property (readonly, nonatomic) int value;

@optional

@end

#endif /* LHLSNetworkToken_Protocol_h */
