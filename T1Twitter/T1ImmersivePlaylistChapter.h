//
#ifndef T1ImmersivePlaylistChapter_h
#define T1ImmersivePlaylistChapter_h
@import Foundation;

@class NSObject, NSString;

@interface T1ImmersivePlaylistChapter : NSObject

@property (readonly, copy, nonatomic) NSString *statusID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double position;

/* instance methods */
- (id)initWithStatusID:(id)id title:(id)title subtitle:(id)subtitle position:(double)position;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* T1ImmersivePlaylistChapter_h */
