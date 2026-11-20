//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdLoader_h
#define GADAdLoader_h
@import Foundation;

#include "GADAdLoaderDelegate-Protocol.h"
#include "GADAdSource.h"

@class NSArray, NSObject, NSSet, NSString, UIViewController;

@interface GADAdLoader : NSObject {
    /* instance variables */
    GADAdSource *_adSource;
    struct atomic_flag { _Atomic _Bool _Value; } _requestInProgress;
    _Atomic _Bool _isLoading;
    NSSet *_adTypes;
    NSArray *_adOptions;
    UIViewController *_rootViewController;
}

@property (weak, nonatomic) id <GADAdLoaderDelegate> delegate;
@property (readonly, nonatomic) NSString *adUnitID;
@property (readonly, nonatomic) _Bool loading;

/* instance methods */
- (id)initWithAdUnitID:(id)id rootViewController:(id)controller adTypes:(id)types options:(id)options;
- (id)initWithRootViewController:(id)controller;
- (id)init;
- (void)dealloc;
- (void)loadRequestWithTarget:(id)target;
- (_Bool)didSetRequestLoadingInProgress;
- (void)loadRequest:(id)request;
- (void)loadWithAdResponseString:(id)string;
- (void)adSourceDidLoadAds:(id)ads withErrors:(id)errors responseInfo:(id)info;
- (id)publicAdFromInternalAd:(id)ad responseInfo:(id)info error:(id *)error;
- (id)adSource;
- (void)updateTargeting:(id)targeting;
- (id)customFormatIDs;
- (id)validAdSizes;
- (void)failedToReceiveAdWithError:(id)error;
- (void)finishLoading;
- (void)receivePublicAd:(id)ad;
- (_Bool)isLoading;
- (_Bool)adSourceShouldLoadRequest:(id)request targeting:(id)targeting error:(id *)error;

@end

#endif /* GADAdLoader_h */
