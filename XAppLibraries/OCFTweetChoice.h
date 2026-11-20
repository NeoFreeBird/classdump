//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTweetChoice_h
#define OCFTweetChoice_h
@import Foundation;

@class NSObject, TFSTwitterStatusBundle;

@interface OCFTweetChoice : NSObject

@property (readonly, nonatomic) TFSTwitterStatusBundle *status;

/* instance methods */
- (id)initWithStatus:(id)status;

@end

#endif /* OCFTweetChoice_h */
