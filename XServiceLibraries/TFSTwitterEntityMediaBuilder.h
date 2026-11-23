//
#ifndef TFSTwitterEntityMediaBuilder_h
#define TFSTwitterEntityMediaBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary strict:(_Bool)strict;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaBuilder_h */
