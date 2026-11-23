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
