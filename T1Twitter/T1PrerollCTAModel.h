//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PrerollCTAModel_h
#define T1PrerollCTAModel_h
@import Foundation;

@class NSObject, NSString, NSURL, NSUUID, TVPVideoAdContext;

@interface T1PrerollCTAModel : NSObject

@property (readonly, nonatomic) TVPVideoAdContext *adVideoContext;
@property (readonly, nonatomic) NSString *advertiserName;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long openWebsiteType;
@property (readonly, nonatomic) NSString *timelineCTAText;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (readonly, nonatomic) NSUUID *playlistItemKey;
@property (retain, nonatomic) id transitionObject;

/* instance methods */
- (id)initWithPlaylistItem:(id)item;
- (id)init;
- (void)setMediaSize:(struct CGSize { double x0; double x1; })size;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1PrerollCTAModel_h */
