//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountAttributeStore_Protocol_h
#define TFSAccountAttributeStore_Protocol_h
@import Foundation;

@protocol TFSAccountAttributeStore

@required

/* required instance methods */
- (_Bool)save:(id)save error:(id *)error;
- (id)loadAndReturnError:(id *)error;

@optional

@end

#endif /* TFSAccountAttributeStore_Protocol_h */
