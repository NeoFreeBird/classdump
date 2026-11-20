//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADRequest_h
#define GADRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString, UIWindowScene;

@interface GADRequest : NSObject <NSCopying> {
    /* instance variables */
    NSString *_adString;
    NSArray *_adOptions;
}

@property (copy, nonatomic) NSArray *adTypes;
@property (copy, nonatomic) NSString *requestOrigin;
@property (readonly, nonatomic) NSDictionary *networkExtrasMap;
@property (copy, nonatomic) NSString *publisherProvidedID;
@property (copy, nonatomic) NSArray *categoryExclusions;
@property (weak, nonatomic) UIWindowScene *scene;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *contentURL;
@property (copy, nonatomic) NSArray *neighboringContentURLStrings;
@property (copy, nonatomic) NSString *requestAgent;
@property (copy, nonatomic) NSDictionary *customTargeting;

/* class methods */
+ (id)request;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqualToRequest:(id)request;
- (void)registerAdNetworkExtras:(id)extras;
- (id)adNetworkExtrasFor:(Class)_for;
- (void)removeAdNetworkExtrasFor:(Class)_for;
- (id)adString;
- (void)setAdString:(id)string;
- (id)adOptions;
- (void)setAdOptions:(id)options;

@end

#endif /* GADRequest_h */
