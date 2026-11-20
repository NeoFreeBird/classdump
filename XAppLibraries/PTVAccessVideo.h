//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAccessVideo_h
#define PTVAccessVideo_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface PTVAccessVideo : NSObject {
    /* instance variables */
    _Bool _isHLSEncrypted;
    _Bool _isLHLSEncrypted;
}

@property (readonly) NSString *life_cycle_token;
@property (readonly) NSString *chat_token;
@property (readonly) NSNumber *autoPlayStartWatchingThreshold;
@property (readonly) NSString *lhls_url;
@property (readonly) NSString *hls_url;
@property (readonly) NSString *replay_url;
@property (readonly) NSArray *pspVersion;
@property (readonly) unsigned long long chatRoomPermissionType;
@property (readonly) double defaultPlaybackBufferLength;
@property (readonly) double minPlaybackBufferLength;
@property (readonly) double maxPlaybackBufferLength;
@property (readonly) double constantPlaybackBufferLength;
@property (readonly) NSString *hls_url_guest_template;
@property (readonly) NSString *lhls_url_guest_template;
@property (readonly) NSString *replay_url_guest_template;
@property (readonly) NSString *guest_playlist_url_template_token;
@property (readonly) NSString *share_url;
@property (readonly) NSString *cdn_hostname;
@property (readonly) _Bool isEncrypted;
@property (readonly) NSString *mediaConfiguration;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)dictionary;
- (_Bool)shouldUseHLS;
- (_Bool)shouldUseLHLS;
- (_Bool)hasAnyLiveVideoURLs;
- (_Bool)hasAnyReplayVideoURLs;
- (_Bool)hasAnyVideoURLs;
- (_Bool)videoParametersAreEqual:(id)equal;
- (unsigned long long)chatRoomPermissionTypeForString:(id)string;
- (void)overrideVidManPlaybackURLsIfNeeded;
- (id)replaceURL:(id)url withHost:(id)host andPort:(id)port andProtocol:(id)protocol andPathTemplate:(id)_template;

@end

#endif /* PTVAccessVideo_h */
