//
#ifndef _TtC10TwitterURT45URTTimelineEntryWithEmbeddedPromptTransformer_h
#define _TtC10TwitterURT45URTTimelineEntryWithEmbeddedPromptTransformer_h
@import Foundation;

@class TFNItemsModuleTransformer;

@interface TwitterURT.URTTimelineEntryWithEmbeddedPromptTransformer : TFNItemsModuleTransformer // (Swift)

/* instance methods */
- (id)init;
- (id)itemsForModule:(id)module;
- (id)sectionControllerForModule:(id)module;
- (id)itemsPredicate;
- (id)initWithChildTransformers:(id)transformers;

@end

#endif /* _TtC10TwitterURT45URTTimelineEntryWithEmbeddedPromptTransformer_h */
