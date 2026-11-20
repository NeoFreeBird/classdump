//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdNetworkResponseInfo_h
#define GADAdNetworkResponseInfo_h
@import Foundation;

@class NSDictionary, NSError, NSObject, NSString;

@interface GADAdNetworkResponseInfo : NSObject

@property (retain, nonatomic) NSString *adNetworkClassName;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double latency;
@property (readonly, nonatomic) NSDictionary *adUnitMapping;
@property (readonly, nonatomic) NSString *adSourceName;
@property (readonly, nonatomic) NSString *adSourceID;
@property (readonly, nonatomic) NSString *adSourceInstanceName;
@property (readonly, nonatomic) NSString *adSourceInstanceID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* instance methods */
- (id)initWithAdSourceName:(id)name adSourceID:(id)id adSourceInstanceName:(id)name adSourceInstanceID:(id)id adUnitMapping:(id)mapping;
- (id)description;

@end

#endif /* GADAdNetworkResponseInfo_h */
