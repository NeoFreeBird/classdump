//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVReplayThumbnail_h
#define PTVReplayThumbnail_h
@import Foundation;

@class NSObject, NSURL;

@interface PTVReplayThumbnail : NSObject

@property (retain, nonatomic) NSURL *thumbnailURL;
@property (nonatomic) double mediaTime;

/* instance methods */

@end

#endif /* PTVReplayThumbnail_h */
