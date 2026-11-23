//
#ifndef GADAdMetadataProvider_Protocol_h
#define GADAdMetadataProvider_Protocol_h
@import Foundation;

#include "GADAdMetadataDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDictionary;

@protocol GADAdMetadataProvider <NSObject>

@required

@property (readonly, nonatomic) NSDictionary *adMetadata;
@property (weak, nonatomic) id <GADAdMetadataDelegate> adMetadataDelegate;

@optional

@end

#endif /* GADAdMetadataProvider_Protocol_h */
