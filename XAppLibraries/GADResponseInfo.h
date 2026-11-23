//
#ifndef GADResponseInfo_h
#define GADResponseInfo_h
@import Foundation;

#include "GADAdNetworkResponseInfo.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString;

@interface GADResponseInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *refreshInterval;
@property (readonly, nonatomic) NSNumber *refreshLoadDelayInterval;
@property (readonly, nonatomic) NSDictionary *biddingData;
@property (readonly, nonatomic) NSString *serverRequestID;
@property (readonly, nonatomic) NSString *responseIdentifier;
@property (readonly, nonatomic) NSDictionary *extrasDictionary;
@property (readonly, nonatomic) GADAdNetworkResponseInfo *loadedAdNetworkResponseInfo;
@property (readonly, nonatomic) NSArray *adNetworkInfoArray;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* instance methods */
- (id)init;
- (id)initWithResponseIdentifier:(id)identifier serverRequestID:(id)id refreshInterval:(id)interval refreshLoadDelayInterval:(id)interval adNetworkInfoArray:(id)array loadedAdNetworkResponseInfo:(id)info extrasDictionary:(id)dictionary biddingData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithUpdatedAdNetworkInfoArray:(id)array;
- (id)description;

@end

#endif /* GADResponseInfo_h */
