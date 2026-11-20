//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FeedbackModuleItemsTransformer_h
#define T1FeedbackModuleItemsTransformer_h
@import Foundation;

@class TFNItemsModuleChildTransformer, TFNTwitterAccount;

@interface T1FeedbackModuleItemsTransformer : TFNItemsModuleChildTransformer {
    /* instance variables */
    TFNTwitterAccount *_account;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)itemsForModule:(id)module;
- (id)sectionControllerForModule:(id)module;
- (id)itemsPredicate;
- (id)_feedbackModuleForModule:(id)module;

@end

#endif /* T1FeedbackModuleItemsTransformer_h */
