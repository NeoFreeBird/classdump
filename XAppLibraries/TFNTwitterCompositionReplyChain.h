//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionReplyChain_h
#define TFNTwitterCompositionReplyChain_h
@import Foundation;

@class NSObject, NSOrderedSet, NSPointerArray, NSString;

@interface TFNTwitterCompositionReplyChain : NSObject

@property (readonly, nonatomic) NSPointerArray *weakCompositionPointers;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSOrderedSet *compositions;

/* class methods */
+ (id)restoreReplyChainOnUnsortedCompositions:(id)compositions;
+ (id)assignReplyChainToCompositions:(id)compositions;
+ (void)unassignReplyChainFromComposition:(id)composition;

/* instance methods */
- (id)init;
- (id)initWithUniqueID:(id)id;

@end

#endif /* TFNTwitterCompositionReplyChain_h */
