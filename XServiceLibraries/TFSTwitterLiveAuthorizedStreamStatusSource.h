//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLiveAuthorizedStreamStatusSource_h
#define TFSTwitterLiveAuthorizedStreamStatusSource_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface TFSTwitterLiveAuthorizedStreamStatusSource : NSObject

@property (readonly, copy, nonatomic) NSURL *locationURL;
@property (readonly, copy, nonatomic) NSURL *cookieSetURL;
@property (readonly, copy, nonatomic) NSURL *noRedirectPlaybackURL;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *streamType;

/* instance methods */
- (id)init;
- (id)initWithLocation:(id)location cookieSetURL:(id)url noRedirectPlaybackURL:(id)url status:(long long)status streamType:(id)type;
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterLiveAuthorizedStreamStatusSource_h */
