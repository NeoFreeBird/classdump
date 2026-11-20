//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCommunity_h
#define TFSTwitterCommunity_h
@import Foundation;

#include "TFSTwitterCommunityMembership.h"
#include "TFSTwitterCommunityReference.h"

@class NSObject, NSString;

@interface TFSTwitterCommunity : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 community;
    B24@0:8@"NSString"16 $__lazy_storage_$_communityReference;
    B24@0:8@"NSString"16 $__lazy_storage_$_communityMembership;
}

@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, retain) TFSTwitterCommunityReference *communityReference;
@property (nonatomic, retain) TFSTwitterCommunityMembership *communityMembership;
@property (nonatomic, readonly) _Bool hasRules;
@property (nonatomic, readonly) NSString *displayName;

/* class methods */
+ (id)observableForCommunityID:(id)id modelContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterCommunity_h */
