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
