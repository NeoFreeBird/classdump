//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift37URTListPinnedModuleSectionTransformer_h
#define _TtC14T1TwitterSwift37URTListPinnedModuleSectionTransformer_h
@import Foundation;

@class TFNItemsModuleTransformer;

@interface T1TwitterSwift.URTListPinnedModuleSectionTransformer : TFNItemsModuleTransformer // (Swift)

/* instance methods */
- (id)init;
- (id)itemsForModule:(id)module;
- (id)sectionControllerForModule:(id)module;
- (id)itemsPredicate;
- (id)initWithChildTransformers:(id)transformers;

@end

#endif /* _TtC14T1TwitterSwift37URTListPinnedModuleSectionTransformer_h */
