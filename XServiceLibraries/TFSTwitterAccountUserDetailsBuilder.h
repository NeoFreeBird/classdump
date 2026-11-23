//
#ifndef TFSTwitterAccountUserDetailsBuilder_h
#define TFSTwitterAccountUserDetailsBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAccountUserDetailsBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseFromJSON:(id)json;
- (id)init;

@end

#endif /* TFSTwitterAccountUserDetailsBuilder_h */
