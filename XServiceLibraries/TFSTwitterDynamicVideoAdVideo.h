//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDynamicVideoAdVideo_h
#define TFSTwitterDynamicVideoAdVideo_h
@import Foundation;

@class NSNumber, NSObject, NSString, NSURL;

@interface TFSTwitterDynamicVideoAdVideo : NSObject // (Swift)

@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *videoID;
@property (nonatomic, readonly) NSNumber *ownerId;
@property (nonatomic, readonly) unsigned long long ctaType;
@property (nonatomic, readonly) NSString *ctaUrl;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSURL *ownerProfileImageURL;
@property (nonatomic, readonly) unsigned long long openWebsiteType;
@property (nonatomic, readonly) _Bool renderAdByAdvertiserName;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithAssetURL:(id)url videoID:(id)id contentType:(id)type ownerID:(id)id ownerName:(id)name ownerProfileImageURL:(id)url ctaType:(unsigned long long)type ctaURL:(id)url renderAdByAdvertiserName:(_Bool)name openWebsiteCTAType:(unsigned long long)ctatype;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterDynamicVideoAdVideo_h */
