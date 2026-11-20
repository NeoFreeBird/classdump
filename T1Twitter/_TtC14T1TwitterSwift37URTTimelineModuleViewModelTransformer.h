//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift37URTTimelineModuleViewModelTransformer_h
#define _TtC14T1TwitterSwift37URTTimelineModuleViewModelTransformer_h
@import Foundation;

@class TFNItemsModuleTransformer, _$sSa -> _$s10TwitterURT32URTModuleExperienceCustomizationMp, _$sSaySo19TFNItemsTransformer_pG, _$sSo26TFNItemsDataViewControllerCSgXw;

@interface T1TwitterSwift.URTTimelineModuleViewModelTransformer : TFNItemsModuleTransformer { // (Swift)
    /* instance variables */
    Swift.Array -> protocol descriptor for TwitterURT.URTModuleExperienceCustomization experienceCustomizations;
    weak __C.TFNItemsDataViewController? itemsController;
    __C.TFNItemsDataViewSectionController nominal type descriptor for TwitterURT.URTTimelineModuleViewModel function type (escaping) sectionControllerBuilder;
    [__C.TFNItemsTransformer] itemTransformers;
}

/* instance methods */
- (id)itemsForModule:(id)module;
- (id)sectionControllerForModule:(id)module;
- (id)itemsPredicate;
- (id)initWithChildTransformers:(id)transformers;

@end

#endif /* _TtC14T1TwitterSwift37URTTimelineModuleViewModelTransformer_h */
