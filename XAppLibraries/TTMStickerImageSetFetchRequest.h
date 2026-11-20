//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMStickerImageSetFetchRequest_h
#define TTMStickerImageSetFetchRequest_h
@import Foundation;

#include "TIPImageFetchRequest-Protocol.h"
#include "TIPImageFetchTransformer-Protocol.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface TTMStickerImageSetFetchRequest : NSObject <TIPImageFetchRequest>

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetDimensions;
@property (readonly, nonatomic) long long targetContentMode;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSDictionary *progressiveLoadingPolicies;
@property (readonly, nonatomic) id <TIPImageFetchTransformer> transformer;
@property (readonly, nonatomic) long long loadingSources;
@property (readonly, copy, nonatomic) id /* block */ imageRequestHydrationBlock;
@property (readonly, copy, nonatomic) id /* block */ imageRequestAuthorizationBlock;
@property (readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURL:(id)url identifier:(id)identifier targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
- (id)init;

@end

#endif /* TTMStickerImageSetFetchRequest_h */
