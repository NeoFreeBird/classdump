//
#ifndef GADAdRenderingMetadata_h
#define GADAdRenderingMetadata_h
@import Foundation;

#include "GADResponseInfo.h"

@class NSObject, NSString;

@interface GADAdRenderingMetadata : NSObject

@property (readonly, nonatomic) NSString *adNetworkClassName;
@property (readonly, nonatomic) GADResponseInfo *responseInfoOverride;

/* instance methods */
- (id)initWithAdNetworkClassName:(id)name;
- (id)initWithAdNetworkClassName:(id)name responseInfoOverride:(id)override;

@end

#endif /* GADAdRenderingMetadata_h */
