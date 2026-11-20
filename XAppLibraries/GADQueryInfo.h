//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADQueryInfo_h
#define GADQueryInfo_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"

@class NSDictionary, NSMutableSet, NSObject, NSString;

@interface GADQueryInfo : NSObject <GADEventContextSource> {
    /* instance variables */
    double _creationTimeSinceEpoch;
    NSMutableSet *_visitedRenderIDs;
}

@property (readonly, nonatomic) NSDictionary *sourceQueryDictionary;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSDictionary *queryDictionary;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)createQueryInfoHelperWithRequest:(id)request adFormat:(long long)format adUnitID:(id)id completionHandler:(id /* block */)handler;
+ (void)createQueryInfoWithRequest:(id)request adFormat:(long long)format adUnitID:(id)id completionHandler:(id /* block */)handler;
+ (void)createQueryInfoWithRequest:(id)request adFormat:(long long)format completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithQueryString:(id)string sourceQueryDictionary:(id)dictionary queryDictionary:(id)dictionary;
- (_Bool)isExpired;
- (_Bool)hasVisitedRenderID:(id)id;
- (void)setVisitedRenderID:(id)id;
- (unsigned long long)visitedRenderIDCount;

@end

#endif /* GADQueryInfo_h */
