//
#ifndef T1ShareableByURL_Protocol_h
#define T1ShareableByURL_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ShareableByURL <NSObject>

@required

@property (nonatomic) _Bool shareTokenInURLEnabled;

@optional

@end

#endif /* T1ShareableByURL_Protocol_h */
