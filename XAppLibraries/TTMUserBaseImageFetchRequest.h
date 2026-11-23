//
#ifndef TTMUserBaseImageFetchRequest_h
#define TTMUserBaseImageFetchRequest_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"
#include "TIPMutableTargetSizingImageFetchRequest-Protocol.h"

@class NSDictionary, NSObject, NSString, NSURL, TFSTwitterImageCategory;

@interface TTMUserBaseImageFetchRequest : NSObject <TIPMutableTargetSizingImageFetchRequest> {
    /* instance variables */
    NSString *_baseURLString;
    NSString *_format;
    TFSTwitterImageCategory *_category;
    _Bool _isTrulyUserImage;
    NSString *_untouchedUserImageURLString;
}

@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double x0; double x1; } targetDimensions;
@property (nonatomic) long long targetContentMode;
@property (nonatomic) double timeToLive;
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
- (id)init;
- (id)initWithUserID:(long long)id userImageURLString:(id)urlstring banner:(_Bool)banner options:(unsigned long long)options;
- (void)_ttm_prepareCategoryLoadingInstanceVariablesWithURL:(id)url;
- (id)_ttm_constructImageURL;

@end

#endif /* TTMUserBaseImageFetchRequest_h */
