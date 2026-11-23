//
#ifndef TFSModelBuilderSupport_h
#define TFSModelBuilderSupport_h
@import Foundation;

@class NSObject;

@interface TFSModelBuilderSupport : NSObject // (Swift)

/* class methods */
+ (id)parseDictionaryWithJsonData:(id)data error:(id *)error;
+ (id)parseArrayWithJsonData:(id)data error:(id *)error;

/* instance methods */
- (id)init;

@end

#endif /* TFSModelBuilderSupport_h */
