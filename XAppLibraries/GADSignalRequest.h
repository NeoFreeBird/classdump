//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSignalRequest_h
#define GADSignalRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString, UIWindowScene;

@interface GADSignalRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *adType;
@property (readonly, nonatomic) NSString *signalType;
@property (readonly, nonatomic) NSDictionary *networkExtrasMap;
@property (weak, nonatomic) UIWindowScene *scene;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *contentURL;
@property (copy, nonatomic) NSArray *neighboringContentURLStrings;
@property (copy, nonatomic) NSString *requestAgent;
@property (copy, nonatomic) NSString *publisherProvidedID;
@property (copy, nonatomic) NSArray *categoryExclusions;
@property (copy, nonatomic) NSDictionary *customTargeting;
@property (copy, nonatomic) NSString *adUnitID;

/* instance methods */
- (id)init;
- (id)initInternalWithSignalType:(id)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)registerAdNetworkExtras:(id)extras;
- (id)adNetworkExtrasFor:(Class)_for;
- (void)removeAdNetworkExtrasFor:(Class)_for;

@end

#endif /* GADSignalRequest_h */
