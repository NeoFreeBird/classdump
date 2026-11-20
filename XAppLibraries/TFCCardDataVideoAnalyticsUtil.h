//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFCCardDataVideoAnalyticsUtil_h
#define TFCCardDataVideoAnalyticsUtil_h
@import Foundation;

@class NSObject;

@interface TFCCardDataVideoAnalyticsUtil : NSObject

/* class methods */
+ (id)mediaPlatformIdentifierFromHlsUrl:(id)url;
+ (id)mediaPlatformIdentifierFromVmapUrl:(id)url;
+ (id)hlsUrlPatternWithVideoType:(id)type;
+ (id)vmapUrlPatternWithVideoType:(id)type;
+ (id)mediaIdInUrl:(id)url regex:(id)regex;

@end

#endif /* TFCCardDataVideoAnalyticsUtil_h */
