//
#ifndef TFSTwitterEntityURLBuilder_h
#define TFSTwitterEntityURLBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityURLBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary strict:(_Bool)strict;
- (id)init;

@end

#endif /* TFSTwitterEntityURLBuilder_h */
