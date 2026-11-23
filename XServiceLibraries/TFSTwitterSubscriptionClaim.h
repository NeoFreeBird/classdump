//
#ifndef TFSTwitterSubscriptionClaim_h
#define TFSTwitterSubscriptionClaim_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterSubscriptionClaim : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 resources;
    B24@0:8@"NSString"16 origin;
}

@property (nonatomic, readonly) NSString *restId;

/* class methods */
+ (id)decodeClaimFrom:(id)from;

/* instance methods */
- (id)encode;
- (id)initWithRestId:(id)id resources:(id)resources;
- (_Bool)isEqual:(id)equal;
- (_Bool)resourcesIntersectsWithIdentifiers:(id)identifiers;
- (id)init;

@end

#endif /* TFSTwitterSubscriptionClaim_h */
