//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPVideoContextCTAInfo_h
#define TVPVideoContextCTAInfo_h
@import Foundation;

@class NSNumber, NSObject, NSString, NSURL;

@interface TVPVideoContextCTAInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *vanityURLString;
@property (retain, nonatomic) NSNumber *appId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned long long openWebsiteType;

/* class methods */
+ (id)withAmplifyVMAPPlaylistCTA:(id)cta;

/* instance methods */
- (id)initAppStoreCTAWithAppId:(id)id appName:(id)name urlString:(id)string;
- (id)initOpenURLCTAWithURLString:(id)urlstring openWebsiteType:(unsigned long long)type;
- (id)initImageOpenURLCTAWithURL:(id)url vanityURLString:(id)urlstring openWebsiteType:(unsigned long long)type;
- (id)initWatchURLCTAWithURLString:(id)urlstring;
- (id)description;

@end

#endif /* TVPVideoContextCTAInfo_h */
