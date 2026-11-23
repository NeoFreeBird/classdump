//
#ifndef T1DashContentItem_Protocol_h
#define T1DashContentItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1DashContentItem <NSObject>

@required

/* required instance methods */
- (long long)dashContentItemType;
- (_Bool)switchToDashContentItemType:(long long)type;

@optional

@end

#endif /* T1DashContentItem_Protocol_h */
