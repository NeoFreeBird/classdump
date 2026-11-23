//
#ifndef PTVProfileImageEntity_Protocol_h
#define PTVProfileImageEntity_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVProfileImageEntity <NSObject>

@required

/* required instance methods */
- (void)loadImageEntityForWorkClient:(id)client withProfileImageType:(unsigned long long)type;
- (id)profileImageURLForType:(unsigned long long)type;

@optional

@end

#endif /* PTVProfileImageEntity_Protocol_h */
