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
