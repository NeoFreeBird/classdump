//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCAppStoreDataEntry_h
#define TUCAppStoreDataEntry_h
@import Foundation;

@class NSNumber, NSObject, NSString, TFSTwitterEntityMedia;

@interface TUCAppStoreDataEntry : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 entry;
}

@property (nonatomic, readonly) NSString *platformIdentifier;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *appDescription;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSString *urlResolvedString;
@property (nonatomic, readonly) NSNumber *ratingStars;
@property (nonatomic, readonly) NSNumber *ratingCount;
@property (nonatomic, readonly) _Bool isFreeApp;
@property (nonatomic, readonly) TFSTwitterEntityMedia *appIconMediaEntity;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCAppStoreDataEntry_h */
