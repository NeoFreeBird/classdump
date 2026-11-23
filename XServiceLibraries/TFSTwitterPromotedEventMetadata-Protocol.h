//
#ifndef TFSTwitterPromotedEventMetadata_Protocol_h
#define TFSTwitterPromotedEventMetadata_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterPromotedEventMetadata <NSObject>

@required

@property (nonatomic, readonly) NSString *impressionID;
@property (nonatomic, readonly) long long unifiedDisclosureType;

@optional

@end

#endif /* TFSTwitterPromotedEventMetadata_Protocol_h */
