//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMMutableTargetSizingWrappedImageFetchRequest_h
#define TTMMutableTargetSizingWrappedImageFetchRequest_h
@import Foundation;

#include "TIPImageFetchRequest-Protocol.h"
#include "TIPImageFetchTransformer-Protocol.h"
#include "TIPMutableTargetSizingImageFetchRequest-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString, NSURL, NSValue;

@interface TTMMutableTargetSizingWrappedImageFetchRequest : NSObject <TIPMutableTargetSizingImageFetchRequest> {
    /* instance variables */
    NSValue *_targetDimensionsValue;
    NSNumber *_targetContentModeValue;
}

@property (readonly, nonatomic) id <TIPImageFetchRequest> wrappedRequest;
@property (nonatomic) struct CGSize { double x0; double x1; } targetDimensions;
@property (nonatomic) long long targetContentMode;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
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
- (id)initWithWrappedRequest:(id)request;
- (_Bool)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;

@end

#endif /* TTMMutableTargetSizingWrappedImageFetchRequest_h */
