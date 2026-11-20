//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSLRUDictionaryNode_h
#define TFSLRUDictionaryNode_h
@import Foundation;

@class NSObject;

@interface TFSLRUDictionaryNode : NSObject

@property (retain, nonatomic) id key;
@property (retain, nonatomic) id object;
@property (nonatomic) unsigned long long cost;
@property (retain, nonatomic) TFSLRUDictionaryNode *next;
@property (weak, nonatomic) TFSLRUDictionaryNode *previous;

/* instance methods */
- (id)description;

@end

#endif /* TFSLRUDictionaryNode_h */
