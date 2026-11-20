//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPlaceBuilder_h
#define TFSTwitterPlaceBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterPlaceBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json searchRequestID:(id)id error:(id *)error;
- (id)parseWithData:(id)data searchRequestID:(id)id error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterPlaceBuilder_h */
