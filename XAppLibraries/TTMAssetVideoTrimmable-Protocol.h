//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetVideoTrimmable_Protocol_h
#define TTMAssetVideoTrimmable_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TTMAssetImage.h"
#include "TTMAssetVideoTrimParameters.h"

@class NSArray;

@protocol TTMAssetVideoTrimmable <NSObject, NSCopying, NSCoding>

@required

@property (nonatomic, retain) TTMAssetVideoTrimParameters *trimParameters;
@property (nonatomic, copy) NSArray *sensitiveWarnings;
@property (nonatomic) _Bool allowDownload;
@property (nonatomic, retain) id <NSCopying, NSSecureCoding, TAVTVideoFilterMediaMetadata> customFilter;
@property (nonatomic, retain) TTMAssetImage *userSpecifiedPreviewImage;

/* required instance methods */
- (void)avAssetWithProgressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)avAssetWithProgressHandler:(id /* block */)handler completion:(id /* block */)completion;
- (id)copy;

@optional

@end

#endif /* TTMAssetVideoTrimmable_Protocol_h */
