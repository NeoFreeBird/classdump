//
#ifndef TUCAppStoreData_h
#define TUCAppStoreData_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TUCAppStoreData : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 appStoreData;
}

@property (nonatomic, readonly) NSDictionary *platformMap;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithPlatformArray:(id)array mediaEntitiesDict:(id)dict;
- (id)entryForCurrentPlatform;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCAppStoreData_h */
