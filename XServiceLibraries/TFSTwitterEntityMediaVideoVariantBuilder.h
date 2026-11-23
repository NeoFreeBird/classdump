//
#ifndef TFSTwitterEntityMediaVideoVariantBuilder_h
#define TFSTwitterEntityMediaVideoVariantBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaVideoVariantBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json error:(id *)error;
- (id)parseWithData:(id)data error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaVideoVariantBuilder_h */
