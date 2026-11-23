//
#ifndef TFSJSONSerialization_h
#define TFSJSONSerialization_h
@import Foundation;

@class NSObject;

@interface TFSJSONSerialization : NSObject

/* class methods */
+ (id)dataWithJSONObject:(id)jsonobject options:(unsigned long long)options error:(id *)error;
+ (id)JSONObjectWithData:(id)data options:(unsigned long long)options error:(id *)error;
+ (id)JSONObjectWithData:(id)data permitMainThread:(_Bool)thread options:(unsigned long long)options error:(id *)error;
+ (void)encodeJSONObject:(id)jsonobject options:(unsigned long long)options completion:(id /* block */)completion;
+ (void)decodeJSONData:(id)jsondata options:(unsigned long long)options completion:(id /* block */)completion;

@end

#endif /* TFSJSONSerialization_h */
