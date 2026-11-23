//
#ifndef GADAdMetadataDelegate_Protocol_h
#define GADAdMetadataDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdMetadataDelegate <NSObject>

@required

/* required instance methods */
- (void)adMetadataDidChange:(id)change;

@optional

@end

#endif /* GADAdMetadataDelegate_Protocol_h */
