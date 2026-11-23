//
#ifndef TIPGenericImageFetchRequest_h
#define TIPGenericImageFetchRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "TIPImageFetchRequest-Protocol.h"
#include "TIPImageFetchTransformer-Protocol.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface TIPGenericImageFetchRequest : NSObject <TIPImageFetchRequest, NSCopying, NSMutableCopying>

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

/* class methods */
+ (id)genericImageFetchRequestWithRequest:(id)request;

/* instance methods */
- (id)initWithImageURL:(id)url;
- (id)initWithImageURL:(id)url identifier:(id)identifier targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* TIPGenericImageFetchRequest_h */
