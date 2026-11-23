//
#ifndef TFSTwitterUnmentionInfoBuilder_h
#define TFSTwitterUnmentionInfoBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterUnmentionInfoBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json;
- (id)init;

@end

#endif /* TFSTwitterUnmentionInfoBuilder_h */
