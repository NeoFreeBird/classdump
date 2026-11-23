//
#ifndef TFSTwitterEntitySetBuilder_h
#define TFSTwitterEntitySetBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntitySetBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json;
- (id)init;

@end

#endif /* TFSTwitterEntitySetBuilder_h */
