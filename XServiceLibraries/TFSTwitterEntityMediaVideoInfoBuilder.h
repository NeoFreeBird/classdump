//
#ifndef TFSTwitterEntityMediaVideoInfoBuilder_h
#define TFSTwitterEntityMediaVideoInfoBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaVideoInfoBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json error:(id *)error;
- (id)parseWithData:(id)data error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaVideoInfoBuilder_h */
